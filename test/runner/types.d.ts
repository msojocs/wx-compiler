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
    lazyload: boolean
    lazyloadConfig: string
}

export interface RequestResult {
    success: boolean
    data: string
}
export interface CompilerResult {
    success: boolean
    type: 'string' | 'object'
    data: any
}