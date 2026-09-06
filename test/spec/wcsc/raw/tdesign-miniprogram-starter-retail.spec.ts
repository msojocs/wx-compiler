import { describe, it } from "vitest";
import assert from "assert";
import path from "path";
import linux from '../../../runner/binary-linux'
import windows from '../../../runner/binary-windows'
import * as fs from 'fs'
import { resolve } from 'path'

describe("wcsc", function () {
    describe("Raw: node output should equal with wine", function () {
        it("case1", async function ({ task }) {
            const configPath = resolve(__dirname, './tdesign-miniprogram-starter-retail/case1-cmd.txt')
            const projectPath = path.resolve(
                __dirname,
                "../../../projects/tdesign-miniprogram-starter-retail"
            );
            const args = [
                "--config-path",
                configPath,
            ];
            const w = await windows.wcsc(args, projectPath);
            const n = await linux.wcsc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `tdesign-miniprogram-starter-retail/${task.name}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            fs.writeFileSync(
                `${storagePath}/wine-output.js`,
                w
            );
            fs.writeFileSync(
                `${storagePath}/node-output.js`,
                n
            );
            assert.equal(w, n);
        });
        it("case2", async function ({ task }) {
            const configPath = resolve(__dirname, './tdesign-miniprogram-starter-retail/case2-cmd.txt')
            const projectPath = path.resolve(
                __dirname,
                "../../../projects/tdesign-miniprogram-starter-retail"
            );
            const args = [
                "--config-path",
                configPath,
            ];
            const w = await windows.wcsc(args, projectPath);
            const n = await linux.wcsc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `tdesign-miniprogram-starter-retail/${task.name}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            fs.writeFileSync(
                `${storagePath}/wine-output.js`,
                w
            );
            fs.writeFileSync(
                `${storagePath}/node-output.js`,
                n
            );
            assert.equal(w, n);
        });
    });
});
