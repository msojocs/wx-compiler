import { afterAll, beforeAll, describe, it } from "vitest";

const assert = require("assert/strict");
const { spawnSync } = require("child_process");
const fs = require("fs");
const os = require("os");
const path = require("path");

const root = path.resolve(__dirname, "../..");
const launcher = path.join(root, "tools/run-electron.js");
const compiler = path.join(__dirname, "addon/compiler.js");
const marker = "---------------result------------------\n";

describe("Electron compiler runtime", function () {
  let directory;

  beforeAll(() => {
    directory = fs.mkdtempSync(path.join(os.tmpdir(), "wx compiler "));
  });

  afterAll(() => {
    fs.rmSync(directory, { recursive: true, force: true });
  });

  function run(args, electron = true) {
    const env = { ...process.env, ELECTRON_RUN_AS_NODE: "0" };
    delete env.DISPLAY;
    const result = spawnSync(process.execPath, electron ? [launcher, ...args] : args, {
      cwd: directory,
      env,
      encoding: "utf8",
      timeout: 20000,
      maxBuffer: 20 * 1024 * 1024,
    });
    assert.ifError(result.error);
    assert.equal(result.signal, null, result.stderr);
    return result;
  }

  function output(result) {
    assert.equal(result.status, 0, result.stderr);
    const index = result.stdout.indexOf(marker);
    assert.notEqual(index, -1, result.stdout);
    return result.stdout.slice(index + marker.length);
  }

  it("runs the pinned Electron runtime without a display and preserves arguments", () => {
    const result = run(["-e", "console.log(JSON.stringify([process.versions.electron, process.argv[1]]))", "path with spaces"]);
    assert.equal(result.status, 0, result.stderr);
    assert.deepEqual(JSON.parse(result.stdout), [require("electron/package.json").version, "path with spaces"]);
  });

  it("preserves the child process exit status", () => {
    assert.equal(run(["-e", "process.exitCode = 7"]).status, 7);
  });

  it.skipIf(process.platform === "win32")("preserves child termination signals", function () {
    const result = spawnSync(process.execPath, [launcher, "-e", "process.kill(process.pid, 'SIGTERM')"], {
      encoding: "utf8",
      timeout: 20000,
    });
    assert.ifError(result.error);
    assert.equal(result.signal, "SIGTERM", result.stderr);
  });

  it("reports missing and invalid compiler arguments", () => {
    for (const args of [[], ["unknown", "options.json"]]) {
      const result = run([compiler, ...args]);
      assert.equal(result.status, 1);
      assert.match(result.stderr, /Usage:/);
    }
  });

  it("reports unreadable and invalid options files", () => {
    const invalid = path.join(directory, "invalid.json");
    fs.writeFileSync(invalid, "{");
    for (const optionsPath of [path.join(directory, "missing.json"), invalid]) {
      const result = run([compiler, "wcc", optionsPath]);
      assert.equal(result.status, 1);
      assert.ok(result.stderr.trim());
      assert.ok(!result.stdout.includes(marker));
    }
  });

  for (const type of ["wcc", "wcsc"]) {
    for (const lazyload of [false, true]) {
      it(`matches Node output for ${type}, lazyload=${lazyload}`, () => {
        const options = {
          cwd: directory,
          files: [type === "wcc" ? "./index.wxml" : "./index.wxss"],
          contents: [type === "wcc" ? "<view>{{message}}</view>" : "view { width: 10rpx; }"],
          pageCount: 1,
          wxmlCompileConfigSplit: ">_<2413",
          ...(type === "wcc" ? { lazyloadConfig: lazyload ? "index" : "" } : { lazyload }),
        };
        const optionsPath = path.join(directory, `${type} ${lazyload}.json`);
        fs.writeFileSync(optionsPath, JSON.stringify(options));
        const args = [compiler, type, optionsPath];
        const expected = output(run(args, false));
        const actual = output(run(args));
        assert.ok(actual.length > 0);
        assert.equal(actual, expected);
        if (type === "wcc" && !lazyload) {
          assert.match(actual, /\$gwx/);
        } else {
          assert.equal(typeof JSON.parse(actual), "object");
        }
      });
    }
  }

  it("reports native compilation errors", () => {
    const optionsPath = path.join(directory, "broken wxml.json");
    fs.writeFileSync(optionsPath, JSON.stringify({
      cwd: directory,
      files: ["./index.wxml"],
      contents: ["<view>"],
    }));
    const result = run([compiler, "wcc", optionsPath]);
    assert.equal(result.status, 1);
    assert.ok(result.stderr.trim());
    assert.ok(!result.stdout.includes(marker));
  });
});
