export interface CompilerOptions {
    files: string[]
    debugWXS: boolean
    debug: boolean
    genfuncname: string
    isCut: boolean
    wxmlCompileConfig: string
    wxmlCompileConfigSplit: string
    replaceContent: Record<string, string>
    cwd: string
    lazyloadConfig: string
}