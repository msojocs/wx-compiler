module.exports = {
    require: [
        "@babel/register",
        'ts-node/register'
    ],
    recursive: true,
    spec: "./test/spec/**/*.spec.ts",
    // spec: "test/spec/wcsc/module/module.spec.ts",
    timeout: 20000,
}