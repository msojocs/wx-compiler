const { execFileSync, spawn } = require("child_process");
const fs = require("fs");
const os = require("os");
const path = require("path");

const root = path.resolve(__dirname, "..");
const version = require("electron/package.json").version;
const electron = path.join(root, "cache", `electron-v${version}-win32-x64`, "electron.exe");
const env = { ...process.env, ELECTRON_RUN_AS_NODE: "1", WINEDEBUG: process.env.WINEDEBUG ?? "-all" };
let directory;
let descriptors = [];

function cleanup() {
  for (const fd of descriptors) fs.closeSync(fd);
  descriptors = [];
  if (directory) fs.rmSync(directory, { recursive: true, force: true });
}

try {
  if (!fs.existsSync(electron)) {
    throw new Error("Windows Electron is missing. Run test/runner/addon/addon-prepare.sh first.");
  }
  const windowsPath = (value) => execFileSync("winepath", ["-w", value], {
    env, encoding: "utf8", timeout: 60000,
  }).trim();
  env.WX_COMPILER_WINE_ROOT = windowsPath("/");
  env.WX_COMPILER_ROOT = windowsPath(root);
  const args = process.argv.slice(2);
  if (args[0] && !args[0].startsWith("-")) args[0] = windowsPath(path.resolve(args[0]));

  // Wine cannot expose Unix socket pipes as Node streams. Regular files work
  // for both compiler logging and large compilation results without a display.
  directory = fs.mkdtempSync(path.join(os.tmpdir(), "wx-windows-electron-"));
  const stdout = path.join(directory, "stdout");
  const stderr = path.join(directory, "stderr");
  descriptors.push(fs.openSync(stdout, "w"));
  descriptors.push(fs.openSync(stderr, "w"));
  const child = spawn("wine", [electron, ...args], {
    env,
    stdio: ["ignore", ...descriptors],
  });
  for (const fd of descriptors) fs.closeSync(fd);
  descriptors = [];

  child.on("error", (error) => {
    console.error(error.message);
    process.exitCode = 1;
  });
  child.on("close", (code, signal) => {
    process.stdout.write(fs.readFileSync(stdout));
    process.stderr.write(fs.readFileSync(stderr));
    cleanup();
    if (signal) {
      process.removeAllListeners(signal);
      process.kill(process.pid, signal);
    } else {
      process.exitCode = code ?? 1;
    }
  });
  for (const signal of ["SIGINT", "SIGTERM"]) {
    process.on(signal, () => child.kill(signal));
  }
} catch (error) {
  cleanup();
  console.error(error.message);
  process.exitCode = 1;
}
