const fs = require("fs");
const path = require("path");
const compiler = require("./wcc");

function windowsPath(value) {
  if (typeof value === "string" && value.startsWith("/") && process.env.WX_COMPILER_WINE_ROOT) {
    return path.join(process.env.WX_COMPILER_WINE_ROOT, value);
  }
  return value;
}

(async () => {
  try {
    const [type, optionsPath] = process.argv.slice(2);
    if (!["wcc", "wcsc"].includes(type) || !optionsPath) {
      throw new Error("Usage: pnpm start:windows <wcc|wcsc> <options.json>");
    }
    const options = JSON.parse(fs.readFileSync(windowsPath(optionsPath), "utf8"));
    options.cwd = windowsPath(options.cwd) || process.cwd();
    if (options.output) options.output = windowsPath(options.output);
    const result = await compiler[type](options);
    console.log("---------------result------------------");
    process.stdout.write(typeof result === "string" ? result : JSON.stringify(result));
  } catch (error) {
    process.stderr.write(String(error));
    process.exitCode = 1;
  }
})();
