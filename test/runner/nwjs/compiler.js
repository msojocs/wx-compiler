const fs = require("fs");
const compiler = require("./wcc");

const args = process.argv.slice(1);
const [type, p] = args;
const optionsData = fs.readFileSync(p).toString();
const options = JSON.parse(optionsData);

(async () => {
  const result = await compiler[type](options);
  if (typeof result === "string") {
    process.stdout.write(result);
  } else {
    process.stdout.write(JSON.stringify(result));
  }
})();
