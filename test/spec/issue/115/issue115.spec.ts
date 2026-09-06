import assert from "assert"
import path from "path"
import { describe, it } from "vitest";
import linux from '../../../runner/module-linux'
import windows from '../../../runner/module-windows'
import * as fs from 'fs'

describe("issue - 115", function () {
    describe("issue: linux output should equal with wine", function () {
        it("标签没合闭", async function ({ task }) {
            const p = path.resolve(__dirname, './data/example.json')
            const storagePath = path.resolve(
                __dirname,
                `issue-115/${task.name}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            const w = await windows.wcc(p);
            const n = await linux.wcc(p, '');
            // console.log('windows:', typeof w)
            // console.log('linux:', typeof n)

            assert.equal(typeof n, typeof w, 'Type mismatch');
            assert.equal(w.success, false, 'Success flag mismatch');
            fs.writeFileSync(
                `${storagePath}/wine-output.json`,
                JSON.stringify(w, null, 4)
            );
            fs.writeFileSync(
                `${storagePath}/node-output.json`,
                JSON.stringify(n, null, 4)
            );
            assert.deepEqual(n, w, 'Output data mismatch');
        });
    });
});
