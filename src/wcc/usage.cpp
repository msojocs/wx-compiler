#include <iostream>

const char *sCliVersion = "20230804";
//----- (00401726) --------------------------------------------------------
int usage(int argc, const char **argv)
{
  printf("Wechat WXML Compiler, core version %s, cli version %s\n", "v0.5vv_20211229_syb_scopedata", sCliVersion);
  printf(
    "Usage: %s [-d] [-o OUTPUT] [-xc XComponentDefine] [-om XComponentDefine] [-cb [callback.js...]] [-llcommon] [-llw/-l"
    "la XCPath] [--wxs ContentMapFile] <FILES... | -s <SINGLE_FILE>\n",
    *argv);
  printf("  Options:\n");
  printf("  -d: output code for debug\n");
  printf("  -o: output destination (default stdout)\n");
  printf(" -xc: output simplified code for custom component\n");
  printf(" -cc: output compelete code for custom component\n");
  printf("  -s: read from stdin\n");
  printf(" -ds: insert debug wxs info\n");
  printf(" -cb: add life cycle callback\n");
  printf(" -llw: compile in lazy load mode (webiew)\n");
  printf(" -lla: compile in lazy load mode (app service)\n");
  printf("    args XCPath: custom component paths connected by comma or --split (./page/index,./comp/comp)\n");
  printf(" --wxs: compile wxs scripts for glass-easel\n");
  puts(" --gdc: gdc function for glass-easel");
  puts(" --wxs-env: wxs env for glass-easel");
  return 1;
}