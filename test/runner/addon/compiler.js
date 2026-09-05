const fs = require("fs");
const compiler = require("./wcc");

(async () => {
  try {
    const [type, optionsPath] = process.argv.slice(2);
    if (!["wcc", "wcsc"].includes(type) || !optionsPath) {
      throw new Error("Usage: pnpm start <wcc|wcsc> <options.json>");
    }
    const options = JSON.parse(fs.readFileSync(optionsPath, "utf8"));
    const result = await compiler[type](options);
    console.log('---------------result------------------')
    if (typeof result === "string") {
      process.stdout.write(result);
    } else {
      process.stdout.write(JSON.stringify(result));
    }
  } catch (err) {
    console.error(String(err));
    process.exitCode = 1;
  }
})();
