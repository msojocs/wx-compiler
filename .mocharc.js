module.exports = {
    require: [
        "@babel/register",
        'ts-node/register'
    ],
    recursive: true,
    spec: "./test/spec/**/*.spec.ts",
    timeout: 20000,
}