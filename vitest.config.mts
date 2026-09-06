import { defineConfig } from "vitest/config";

export default defineConfig({
  test: {
    environment: "node",
    // The comparison tests share a Wine runtime and write compiler output files.
    fileParallelism: false,
    testTimeout: 20000,
    hookTimeout: 20000,
    diff: {
      truncateThreshold: 0,
    },
    projects: [
      {
        extends: true,
        test: {
          name: "spec",
          include: ["test/spec/**/*.spec.ts"],
        },
      },
      {
        extends: true,
        test: {
          name: "electron",
          include: ["test/runner/electron.spec.js"],
          testTimeout: 30000,
          hookTimeout: 30000,
        },
      },
    ],
  },
});
