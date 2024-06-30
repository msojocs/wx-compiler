#include <iostream>

//----- (00401726) --------------------------------------------------------
int usage(int argc, const char **argv)
{
  printf("*** WeChat Stylesheet Compiler, Version %s ***\n", "v0.4me_20200724_db");
  printf(
    "Usage: %s [-lc] [-o OUTPUT] [-s <NAME OF FILE>] [-st] [-js] [-db] [-cp <CLASS PREFIX>] [-pc <FILE COUNT>] <[-sd <SOU"
    "RCE DIRECTLY>] | <root_css_file..> [import_css_files..]>\n",
    *argv);
  printf(" -lc: need to lint the css\n");
  printf(" -sd: 'someclass { font-size: 18px }'\n");
  printf("  -s: read from stdin\n");
  printf("  -o: output destination (default stdout)\n");
  printf(" -st: print tree\n");
  printf(" -db: add debug attr\n");
  printf(" -js: js formate output\n");
  printf(" -cp: add class prefix\n");
  printf(" -pc: page wxss files count\n");
  return 0;
}