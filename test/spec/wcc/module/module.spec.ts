
import assert from 'assert';
import path from 'path';
import linux from '../../../runner/module-linux'
import windows from '../../../runner/module-windows'
import * as fs from 'fs'
import { execFileSync } from 'child_process';

describe("wcc - module", function () {
    this.beforeAll(() => {
        // TODO: 启动docker wine容器
        execFileSync(path.resolve(__dirname, '../../../runner/nwjs/wine-prepare.sh'), { stdio: 'inherit' })
    })
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
            const n = JSON.parse(await linux.wcc(p, ''));
            const w = JSON.parse(await windows.wcc(p));
            fs.writeFileSync(
                `${storagePath}/wine-output.json`,
                JSON.stringify(w, null, 4)
            );
            fs.writeFileSync(
                `${storagePath}/node-output.json`,
                JSON.stringify(n, null, 4)
            );
            assert.deepEqual(w, n);
        });
    });
});
