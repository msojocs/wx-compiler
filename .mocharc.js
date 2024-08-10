module.exports = {
    require: [
        "@babel/register",
        'ts-node/register'
    ],
    recursive: true,
    // spec: "./test/spec/**/*.spec.ts",
    spec: [
        "./test/spec/**/*.spec.ts",
        // 'test/spec/issue/115/issue115.spec.ts',
        // 'test/spec/wcc/module/module.spec.ts',
    ],
    // spec: "test/spec/wcc/wxs/wxs.spec.ts",
    timeout: 20000,
}