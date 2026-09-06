import assert from "assert"
import path from "path"
import { describe, it } from "vitest";
import linux from '../../../runner/module-linux'
import windows from '../../../runner/module-windows'
import * as fs from 'fs'

describe("issue - 137", function () {
    describe("issue: linux output should equal with wine", function () {
        it("Arch linux crash", async function ({ task }) {
            const p = path.resolve(__dirname, './data/example.json')
            const storagePath = path.resolve(
                __dirname,
                `output/${task.name}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            const w = await windows.wcsc(p);
            const n = await linux.wcsc(p, '', storagePath);
            // console.log('windows:', typeof w)
            // console.log('linux:', typeof n)

            fs.writeFileSync(
                `${storagePath}/wine-output.json`,
                JSON.stringify(w, null, 4)
            );
            fs.writeFileSync(
                `${storagePath}/node-output.json`,
                JSON.stringify(n, null, 4)
            );
            assert.equal(typeof n, typeof w);
            assert.equal(w.success, true)
            assert.deepEqual(n, w);
        });
    });
});
