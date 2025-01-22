
import assert from 'assert';
import path from 'path';
import linux from '../../../runner/binary-linux'
import windows from '../../../runner/binary-windows'
import * as fs from 'fs'

describe("wcc - empty", function () {
    describe("Empty: default command output", function () {
        it("版本", async function () {
            const projectPath = __dirname;
            const args: string[] = [
                "-v"
            ];
            let w = ""
            try
            {
                w = (await windows.wcc(args, projectPath)).replace(/\r\n/g, '\n')
            }catch{}
            const n = await linux.wcc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `version/${this.test?.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            fs.writeFileSync(`${storagePath}/wine-output.js`, w);
            fs.writeFileSync(`${storagePath}/node-output.js`, n);
            assert.equal(n, w, `wine: ${w}\n\nlinux: ${n}`);
        });
    });
});
