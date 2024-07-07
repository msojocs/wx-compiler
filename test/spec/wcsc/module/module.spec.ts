
import assert from 'assert';
import { describe } from "mocha";
import path from 'path';
import linux from '../../../runner/module-linux'
import windows from '../../../runner/module-windows'
import * as fs from 'fs'

describe("wcsc - module", function () {
    describe("linux output should deep equal with wine", function () {
        // afterEach(function(){
        //   if(this.currentTest.state === 'failed'){
        //     console.error('failed', this.currentTest)
        //   }
        // })
        it("初次加载1", async function () {
            const p = path.resolve(__dirname, './data/1720324528222-wcsc-options.json')
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test?.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            const w = await windows.wcsc(p);
            console.log('windows:', typeof w)
            const n = await linux.wcsc(p, '');
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
