module.exports = {
    require: [
        "@babel/register",
        'ts-node/register'
    ],
    recursive: true,
    spec: "test/**/*.spec.ts",
    timeout: 20000,
}