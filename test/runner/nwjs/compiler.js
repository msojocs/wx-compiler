const fs = require("fs");
const compiler = require("./wcc");

const args = process.argv.slice(2);
const [type, p] = args;
// console.log('type:', type, '; options path:', p)
const optionsData = fs.readFileSync(p).toString();
const options = JSON.parse(optionsData);

(async () => {
  const result = await compiler[type](options);
  console.log('---------------result------------------')
  if (typeof result === "string") {
    process.stdout.write(result);
  } else {
    process.stdout.write(JSON.stringify(result));
  }
})();
