
import assert from 'assert';
import path from 'path';
import linux from '../../../runner/linux'
import windows from '../../../runner/windows'
import * as fs from 'fs'

describe("wcsc - empty", function () {
    describe("Empty: default command output", function () {
        it("使用说明", async function () {
            const projectPath = __dirname;
            const args: string[] = [
                "-v"
            ];
            let w = (await windows.wcsc(args, projectPath)).replace(/\r\n/g, '\n')
            let n = await linux.wcsc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `version/${this.test?.title}`
            );
            w = w.replace(/[A-Z]:.*?wcsc\.exe/, '').replace('wcsc.exe', '')
            n = n.replace(/\/.*?\/wcsc/, '')
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            fs.writeFileSync(`${storagePath}/wine-output.js`, w);
            fs.writeFileSync(`${storagePath}/linux-output.js`, n);
            assert.equal(w, n);
        });
    });
});
