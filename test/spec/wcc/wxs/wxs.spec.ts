
import assert from 'assert';
import path from 'path';
import linux from '../../../runner/binary-linux'
import windows from '../../../runner/binary-windows'
import * as fs from 'fs'
import { describe } from "mocha";

describe("wcc - wxs", function () {
    describe("wxs: node output should equal with wine", function () {
        // afterEach(function(){
        //   if(this.currentTest.state === 'failed'){
        //     console.error('failed', this.currentTest)
        //   }
        // })
        it("sample1", async function () {
            const projectPath = path.resolve(
                __dirname,
                "../../../projects/miniprogram-demo/miniprogram"
            );
            const p = path.resolve(__dirname, './sample1.json')
            const args = [
                "--wxs",
                p
            ];
            const w = (await windows.wcc(args, projectPath)).replace(/\r\n/g, '\n')
            const n = await linux.wcc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test?.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            assert.equal(typeof w, typeof n);
            fs.writeFileSync(`${storagePath}/wine-output.js`, w);
            fs.writeFileSync(`${storagePath}/node-output.js`, n);
            assert.equal(w, n);
        });
        
        it("sample2", async function () {
            const projectPath = path.resolve(
                __dirname,
                "../../../projects/miniprogram-demo/miniprogram"
            );
            const p = path.resolve(__dirname, './sample2.json')
            const args = [
                "--wxs",
                p
            ];
            const w = (await windows.wcc(args, projectPath)).replace(/\r\n/g, '\n')
            const n = await linux.wcc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test?.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            assert.equal(typeof w, typeof n);
            fs.writeFileSync(`${storagePath}/wine-output.js`, w);
            fs.writeFileSync(`${storagePath}/node-output.js`, n);
            assert.equal(w, n);
        });
        it("sample3", async function () {
            const projectPath = path.resolve(
                __dirname,
                "../../../projects/miniprogram-demo/miniprogram"
            );
            const p = path.resolve(__dirname, './sample3.json')
            const args = [
                "--wxs",
                p
            ];
            const w = (await windows.wcc(args, projectPath)).replace(/\r\n/g, '\n')
            const n = await linux.wcc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test?.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            assert.equal(typeof w, typeof n);
            fs.writeFileSync(`${storagePath}/wine-output.js`, w);
            fs.writeFileSync(`${storagePath}/node-output.js`, n);
            assert.equal(w, n);
        });
    });
});
