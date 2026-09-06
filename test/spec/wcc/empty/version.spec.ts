import { describe, it } from "vitest";

import assert from 'assert';
import path from 'path';
import linux from '../../../runner/binary-linux'
import windows from '../../../runner/binary-windows'
import * as fs from 'fs'

describe("wcc - empty", function () {
    describe("Empty: default command output", function () {
        it("版本", async function ({ task }) {
            const projectPath = __dirname;
            const args: string[] = [
                "-v"
            ];
            let w = ""
            try
            {
                w = (await windows.wcc(args, projectPath)).replace(/\r\n/g, '\n')
            }
            catch(err: any){
                console.error('error:', err)
                w = err.stdout.replace(/\r\n/g, '\n')
            }
            const n = await linux.wcc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `version/${task.name}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            fs.writeFileSync(`${storagePath}/wine-output.js`, w);
            fs.writeFileSync(`${storagePath}/node-output.js`, n);
            assert.equal(n, w, `wine: ${w}\n\nlinux: ${n}`);
        });
        it("wxs-env", async function ({ task }) {
            const projectPath = __dirname;
            const args: string[] = [
                "--wxs-env"
            ];
            let w = ""
            try
            {
                w = (await windows.wcc(args, projectPath)).replace(/\r\n/g, '\n')
            }
            catch(err: any){
                console.error('error:', err)
                w = err.stdout.replace(/\r\n/g, '\n')
            }
            const n = await linux.wcc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `wxs-env/${task.name}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            fs.writeFileSync(`${storagePath}/wine-output.js`, w);
            fs.writeFileSync(`${storagePath}/node-output.js`, n);
            assert.equal(n, w, `wine: ${w}\n\nlinux: ${n}`);
        });
        it("runtime-globals", async function ({ task }) {
            const projectPath = __dirname;
            const args: string[] = [
                "--runtime-globals"
            ];
            let w = ""
            try
            {
                w = (await windows.wcc(args, projectPath)).replace(/\r\n/g, '\n')
            }
            catch(err: any){
                console.error('error:', err)
                w = err.stdout.replace(/\r\n/g, '\n')
            }
            const n = await linux.wcc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `runtime-globals/${task.name}`
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
