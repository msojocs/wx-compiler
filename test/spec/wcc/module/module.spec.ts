
import assert from 'assert';
import { describe } from "mocha";
import path from 'path';
import linux from '../../../runner/module-linux'
import windows from '../../../runner/module-windows'
import * as fs from 'fs'

describe("wcc - module", function () {
    describe("llw: linux output should deep equal with wine", function () {
        // afterEach(function(){
        //   if(this.currentTest.state === 'failed'){
        //     console.error('failed', this.currentTest)
        //   }
        // })
        it("初次加载1", async function () {
            const p = path.resolve(__dirname, './data/options-1719836862880.json')
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test?.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            const w = await windows.wcc(p);
            const n = await linux.wcc(p, '');
            // console.log('windows:', typeof w)
            // console.log('linux:', n)

            assert.equal(typeof n, typeof w);
            if (typeof w == 'string')
            {
                fs.writeFileSync(
                    `${storagePath}/wine-output.json`,
                    w
                );
                fs.writeFileSync(
                    `${storagePath}/node-output.json`,
                    n as string
                );
                assert.equal(n, w);
            }
            else
            {
                fs.writeFileSync(
                    `${storagePath}/wine-output.json`,
                    JSON.stringify(w, null, 4)
                );
                fs.writeFileSync(
                    `${storagePath}/node-output.json`,
                    JSON.stringify(n, null, 4)
                );
                assert.deepEqual(n, w);
            }
        });
        it("初次加载2", async function () {
            const p = path.resolve(__dirname, './data/options-1719836863260.json')
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test?.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            const w = await windows.wcc(p);
            const n = await linux.wcc(p, '');
            console.log('windows:', typeof w)
            console.log('linux:', typeof n)

            assert.equal(typeof n, typeof w);
            if (typeof w == 'string')
            {
                fs.writeFileSync(
                    `${storagePath}/wine-output.json`,
                    w
                );
                fs.writeFileSync(
                    `${storagePath}/node-output.json`,
                    n as string
                );
                assert.equal(n, w);
            }
            else
            {
                fs.writeFileSync(
                    `${storagePath}/wine-output.json`,
                    JSON.stringify(w, null, 4)
                );
                fs.writeFileSync(
                    `${storagePath}/node-output.json`,
                    JSON.stringify(n, null, 4)
                );
                assert.deepEqual(n, w);
            }
        });
    });
});
