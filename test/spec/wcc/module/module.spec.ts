
import assert from 'assert';
import path from 'path';
import linux from '../../../runner/module-linux'
import windows from '../../../runner/module-windows'
import * as fs from 'fs'
import { execFileSync, execSync } from 'child_process';

describe("wcc - module", function () {
    this.beforeAll(() => {
        // TODO: 启动docker wine容器
        execFileSync(path.resolve(__dirname, './nwjs-download.sh'))

        const rootDir = path.resolve(__dirname, '../../../')
        const cmd = `docker run -it --volume=${rootDir}:/workspace --env=USE_XVFB=yes --env=XVFB_SERVER=:95 --env=XVFB_SCREEN=0 --env=XVFB_RESOLUTION=320x240x8 --env=DISPLAY=:95 --rm --hostname=DESKTOP-1TV4OAG --name=wine --shm-size=1g --workdir=/home/wineuser --env=TZ=Asia/Shanghai --volume=winehome:/home/wineuser -p 8083:8083 scottyhardy/docker-wine:latest wine /workspace/nwjs-sdk-v0.55.0-win-x64/nw.exe`
        execSync(cmd)
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
