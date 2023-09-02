
import assert from 'assert';
import path from 'path';
import linux from '../../../runner/linux'
import windows from '../../../runner/windows'
import * as fs from 'fs'
import { resolve } from 'path'

describe("[tdesign-miniprogram-starter-retail] wcc - raw", function () {
    describe("Raw: node output should equal with wine", function () {
        // afterEach(function(){
        //   if(this.currentTest.state === 'failed'){
        //     console.error('failed', this.currentTest)
        //   }
        // })
        it("case1", async function () {
            const configPath = resolve(__dirname, './tdesign-miniprogram-starter-retail/case1-cmd.txt')
            const projectPath = path.resolve(
                __dirname,
                "../../../projects/tdesign-miniprogram-starter-retail"
            );
            const args = [
                "--config-path",
                configPath,
            ];
            const w = (await windows.wcc(args, projectPath)).replace(/\r\n/g, '\n')
            const n = await linux.wcc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `tdesign-miniprogram-starter-retail/${this.test?.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            fs.writeFileSync(`${storagePath}/wine-output.js`, w);
            fs.writeFileSync(`${storagePath}/node-output.js`, n);
            assert.equal(w, n);
        });
        it("case2", async function () {
            const configPath = resolve(__dirname, './tdesign-miniprogram-starter-retail/case2-cmd.txt')
            const projectPath = path.resolve(
                __dirname,
                "../../../projects/tdesign-miniprogram-starter-retail"
            );
            const args = [
                "--config-path",
                configPath,
            ];
            const w = (await windows.wcc(args, projectPath)).replace(/\r\n/g, "\n");
            const n = await linux.wcc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `tdesign-miniprogram-starter-retail/${this.test?.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            fs.writeFileSync(`${storagePath}/wine-output.js`, w);
            fs.writeFileSync(`${storagePath}/node-output.js`, n);
            assert.equal(w, n);
        });
        it("case3", async function () {
            const configPath = resolve(__dirname, './tdesign-miniprogram-starter-retail/case3-cmd.txt')
            const projectPath = path.resolve(
                __dirname,
                "../../../projects/tdesign-miniprogram-starter-retail"
            );
            const args = [
                "--config-path",
                configPath,
            ];
            const w = (await windows.wcc(args, projectPath)).replace(/\r\n/g, "\n");
            const n = await linux.wcc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `tdesign-miniprogram-starter-retail/${this.test?.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            fs.writeFileSync(`${storagePath}/wine-output.js`, w);
            fs.writeFileSync(`${storagePath}/node-output.js`, n);
            assert.equal(w, n);
        });
        
    });
});
