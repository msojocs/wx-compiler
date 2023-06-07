#include <iostream>

typedef unsigned long _DWORD;

//----- (00534330) --------------------------------------------------------
int  main(int argc, const char **argv, const char **envp)
{
  int *v3; // edi
  _DWORD *v4; // eax
  _BYTE *v5; // edx
  char v6; // al
  char v7; // al
  FILE *v8; // eax
  int v9; // edx
  char *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  char v13; // al
  FILE *v14; // eax
  void **v15; // ebx
  char *v16; // ecx
  int v17; // edx
  int v18; // edx
  char *v19; // eax
  char *v20; // eax
  char *v21; // eax
  _DWORD *v22; // edx
  int v23; // edx
  _DWORD *v24; // eax
  int v25; // edx
  FILE *v26; // eax
  bool v27; // zf
  int *v28; // eax
  std::ostream::sentry *v29; // edx
  int *v30; // eax
  _DWORD *v31; // eax
  unsigned __int8 **v32; // eax
  unsigned __int8 **v33; // eax
  int *j; // eax
  std::ostream::sentry *v35; // eax
  std::ostream::sentry *v36; // eax
  _DWORD *v37; // eax
  FILE *v38; // eax
  int v39; // edx
  int v40; // edx
  int v41; // edx
  char v43; // [esp+1h] [ebp-38Bh]
  char v44; // [esp+2h] [ebp-38Ah]
  char v45; // [esp+3h] [ebp-389h]
  const char **innerArgv; // [esp+4h] [ebp-388h]
  int innerArgc; // [esp+8h] [ebp-384h]
  FILE *v48; // [esp+Ch] [ebp-380h]
  int v49; // [esp+Ch] [ebp-380h]
  int v50; // [esp+Ch] [ebp-380h]
  bool v51; // [esp+10h] [ebp-37Ch]
  int v52; // [esp+10h] [ebp-37Ch]
  char v53; // [esp+14h] [ebp-378h]
  int *flag; // [esp+14h] [ebp-378h]
  int v55; // [esp+18h] [ebp-374h]
  std::ostream::sentry *i; // [esp+18h] [ebp-374h]
  std::ostream::sentry *v57; // [esp+18h] [ebp-374h]
  _DWORD *Block; // [esp+1Ch] [ebp-370h]
  bool hasConfigParam; // [esp+20h] [ebp-36Ch]
  int v60; // [esp+20h] [ebp-36Ch]
  std::ostream::sentry *v61; // [esp+20h] [ebp-36Ch]
  std::ostream::sentry *v62; // [esp+20h] [ebp-36Ch]
  int *k; // [esp+20h] [ebp-36Ch]
  char *currentArg; // [esp+24h] [ebp-368h]
  char *FileNamea; // [esp+24h] [ebp-368h]
  int currentIndex; // [esp+28h] [ebp-364h]
  int v67; // [esp+28h] [ebp-364h]
  int v68; // [esp+28h] [ebp-364h]
  int v69; // [esp+28h] [ebp-364h]
  int v70; // [esp+28h] [ebp-364h]
  int argcIndex; // [esp+2Ch] [ebp-360h]
  FILE *Streama; // [esp+2Ch] [ebp-360h]
  FILE *Streamk; // [esp+2Ch] [ebp-360h]
  FILE *Streamb; // [esp+2Ch] [ebp-360h]
  FILE *Streamc; // [esp+2Ch] [ebp-360h]
  FILE *Streamd; // [esp+2Ch] [ebp-360h]
  FILE *Streame; // [esp+2Ch] [ebp-360h]
  FILE *Streaml; // [esp+2Ch] [ebp-360h]
  FILE *Streamf; // [esp+2Ch] [ebp-360h]
  FILE *Streamg; // [esp+2Ch] [ebp-360h]
  int *Streamh; // [esp+2Ch] [ebp-360h]
  FILE *Streamm; // [esp+2Ch] [ebp-360h]
  FILE *Streami; // [esp+2Ch] [ebp-360h]
  FILE *Streamn; // [esp+2Ch] [ebp-360h]
  FILE *Streamj; // [esp+2Ch] [ebp-360h]
  void **v86; // [esp+68h] [ebp-324h] BYREF
  void **v87; // [esp+6Ch] [ebp-320h]
  int v88; // [esp+70h] [ebp-31Ch]
  _DWORD *fileList; // [esp+74h] [ebp-318h] BYREF
  int v90; // [esp+78h] [ebp-314h]
  int v91; // [esp+7Ch] [ebp-310h]
  void **v92; // [esp+80h] [ebp-30Ch] BYREF
  int v93; // [esp+84h] [ebp-308h]
  int v94; // [esp+88h] [ebp-304h]
  char *v95; // [esp+8Ch] [ebp-300h] BYREF
  int v96; // [esp+90h] [ebp-2FCh]
  char v97; // [esp+94h] [ebp-2F8h] BYREF
  char *configPathData; // [esp+A4h] [ebp-2E8h] BYREF
  int v99; // [esp+A8h] [ebp-2E4h]
  char v100; // [esp+ACh] [ebp-2E0h] BYREF
  int v101; // [esp+BCh] [ebp-2D0h] BYREF
  int v102[5]; // [esp+C0h] [ebp-2CCh] BYREF
  void *gwxMark[6]; // [esp+D4h] [ebp-2B8h] BYREF
  void *blankStr[6]; // [esp+ECh] [ebp-2A0h] BYREF
  int v105; // [esp+104h] [ebp-288h] BYREF
  int v106[5]; // [esp+108h] [ebp-284h] BYREF
  int v107; // [esp+11Ch] [ebp-270h] BYREF
  int v108[5]; // [esp+120h] [ebp-26Ch] BYREF
  int v109; // [esp+134h] [ebp-258h] BYREF
  int v110[5]; // [esp+138h] [ebp-254h] BYREF
  void *v111[2]; // [esp+14Ch] [ebp-240h] BYREF
  char v112; // [esp+154h] [ebp-238h] BYREF
  void *v113[2]; // [esp+164h] [ebp-228h] BYREF
  char v114; // [esp+16Ch] [ebp-220h] BYREF
  int v115; // [esp+17Ch] [ebp-210h] BYREF
  int v116; // [esp+180h] [ebp-20Ch] BYREF
  std::ostream::sentry *v117; // [esp+184h] [ebp-208h]
  int *v118; // [esp+188h] [ebp-204h]
  int *v119; // [esp+18Ch] [ebp-200h]
  int v120; // [esp+190h] [ebp-1FCh]
  int v121; // [esp+194h] [ebp-1F8h] BYREF
  int v122[2]; // [esp+198h] [ebp-1F4h] BYREF
  int *v123; // [esp+1A0h] [ebp-1ECh]
  int *v124; // [esp+1A4h] [ebp-1E8h]
  int v125; // [esp+1A8h] [ebp-1E4h]
  _DWORD v126[6]; // [esp+1ACh] [ebp-1E0h] BYREF
  void *v127[6]; // [esp+1C4h] [ebp-1C8h] BYREF
  void *v128[6]; // [esp+1DCh] [ebp-1B0h] BYREF
  void *v129[6]; // [esp+1F4h] [ebp-198h] BYREF
  void *v130[6]; // [esp+20Ch] [ebp-180h] BYREF
  int v131; // [esp+224h] [ebp-168h] BYREF
  int v132; // [esp+228h] [ebp-164h]
  int v133; // [esp+22Ch] [ebp-160h]
  char *String[6]; // [esp+23Ch] [ebp-150h] BYREF
  void *v135[6]; // [esp+254h] [ebp-138h] BYREF
  char *v136[6]; // [esp+26Ch] [ebp-120h] BYREF
  int v137; // [esp+284h] [ebp-108h] BYREF
  int v138; // [esp+288h] [ebp-104h]
  char v139; // [esp+28Ch] [ebp-100h] BYREF
  char *v140; // [esp+29Ch] [ebp-F0h] BYREF
  int v141; // [esp+2A0h] [ebp-ECh]
  int v142[4]; // [esp+2A4h] [ebp-E8h] BYREF
  int configPathParamName; // [esp+2B4h] [ebp-D8h] BYREF
  int v144; // [esp+2B8h] [ebp-D4h]
  char v145[4]; // [esp+2BCh] [ebp-D0h] BYREF
  char v146[196]; // [esp+2C0h] [ebp-CCh] BYREF
  int *p_argc; // [esp+384h] [ebp-8h]

  p_argc = &argc;
  innerArgc = argc;
  innerArgv = argv;
  __main();
  v95 = &v97;
  configPathData = &v100;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v96 = 0;
  v97 = 0;
  v99 = 0;
  v100 = 0;
  fileList = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v102[0] = 0;
  v102[1] = 0;
  v102[2] = (int)v102;
  v102[3] = (int)v102;
  v102[4] = 0;
  std::string::basic_string(gwxMark, "$gwx");
  std::string::basic_string(blankStr, " ");
  v106[0] = 0;
  v106[1] = 0;
  v106[2] = (int)v106;
  v106[3] = (int)v106;
  v106[4] = 0;
  for ( argcIndex = 1; argcIndex < innerArgc; ++argcIndex )
  {
    std::string::basic_string((void **)&configPathParamName, "--config-path");
    currentIndex = argcIndex;
    currentArg = (char *)&innerArgv[argcIndex];
    hasConfigParam = 0;
    if ( !std::string::compare((int)&configPathParamName, *(char **)currentArg) )
      // 一样
      hasConfigParam = argcIndex + 1 < innerArgc;
    std::string::_M_dispose((void **)&configPathParamName);
    if ( hasConfigParam )
    {
      // 有--config-path参数，下一个参数是路径，跳过
      ++argcIndex;
      // 后面接着配置路径
      std::string::operator=((unsigned int *)&configPathData, (char *)innerArgv[currentIndex + 1]);
    }
    else
    {
      // 没有--config-path参数
      std::string::basic_string((void **)&configPathParamName, *(char **)currentArg);
      std::vector<std::string>::emplace_back<std::string>((void **)&fileList, &configPathParamName);
      std::string::_M_dispose((void **)&configPathParamName);
    }
  }
  if ( v99 )
  {
    v138 = 0;
    v137 = (int)&v139;
    v139 = 0;
    ReadFile(configPathData, (unsigned int *)&v137);
    while ( v138 )
    {
      std::string::basic_string((void **)&v140, "\n");
      GetNextArg((int)&configPathParamName, &v137, (int)&v140);
      std::vector<std::string>::emplace_back<std::string>((void **)&fileList, &configPathParamName);
      std::string::_M_dispose((void **)&configPathParamName);
      std::string::_M_dispose((void **)&v140);
    }
    std::string::_M_dispose((void **)&v137);
  }
  Streama = 0;
  v43 = 0;
  v44 = 0;
  v60 = 0;
  v53 = 0;
  v55 = -1431655765 * ((v90 - (int)fileList) >> 3);
  v45 = 0;
  FileNamea = 0;
  while ( (int)Streama < v55 )
  {
    v67 = 6 * (_DWORD)Streama;
    v4 = &fileList[6 * (_DWORD)Streama];
    v5 = (_BYTE *)*v4;
    if ( *(_BYTE *)*v4 != 45 )
    {
      std::vector<std::string>::push_back((int)&v86, (int)v4);
      goto LABEL_84;
    }
    v6 = v5[1];
    switch ( v6 )
    {
      case 'd':
        v7 = v5[2];
        if ( !v7 )
        {
          v60 |= 2u;
          goto LABEL_84;
        }
        if ( v7 == 115 )
        {
          v60 |= 4u;
          goto LABEL_84;
        }
        break;
      case 's':
        if ( v5[2] == 116 )
        {
          v60 |= 8u;
          goto LABEL_84;
        }
        if ( (int)&Streama->_ptr + 1 < v55 )
        {
          std::vector<std::string>::push_back((int)&v86, (int)&fileList[v67 + 6]);
          v45 = 1;
          goto LABEL_84;
        }
        break;
      case 'v':
        if ( v5[2] == 98 )
          v60 |= 0x10u;
        else
          v44 = 1;
        goto LABEL_84;
      case 'x':
        if ( v5[2] == 99 && (int)&Streama->_ptr + 1 < v55 )
        {
          v53 = 1;
          if ( *(_BYTE *)v89[v67 + 6] != 45 )
          {
            std::string::_M_assign((int)&v95, (int)&fileList[v67 + 6]);
            v53 = 1;
            Streama = (FILE *)((char *)Streama + 1);
          }
          goto LABEL_84;
        }
        break;
      case 'c':
        if ( v5[2] == 99 && (int)&Streama->_ptr + 1 < v55 )
        {
          v53 = 0;
          if ( *(_BYTE *)v89[v67 + 6] != 45 )
          {
            std::string::_M_assign((int)&v95, (int)&fileList[v67 + 6]);
            v53 = 0;
            Streama = (FILE *)((char *)Streama + 1);
          }
          goto LABEL_84;
        }
        break;
      case 'o':
        v8 = (FILE *)((char *)&Streama->_ptr + 1);
        if ( (int)&Streama->_ptr + 1 < v55 )
        {
          FileNamea = (char *)fileList[v67 + 6];
LABEL_72:
          Streama = v8;
          goto LABEL_84;
        }
        break;
      case 'g':
        if ( v5[2] == 110 && (int)&Streama->_ptr + 1 < v55 )
        {
          std::string::_M_assign((int)gwxMark, (int)&fileList[v67 + 6]);
          v8 = (FILE *)((char *)&Streama->_ptr + 1);
          goto LABEL_72;
        }
        break;
      case 'p':
        v60 |= 0x20u;
        goto LABEL_84;
      case 't':
        v60 |= 1u;
        goto LABEL_84;
      case 'i':
        v60 |= 0x40u;
        goto LABEL_84;
    }
    std::string::basic_string((void **)&configPathParamName, "--split");
    v51 = std::operator==<char>((int)&fileList[v67], (int)&configPathParamName);
    if ( v51 )
      v51 = (int)&Streama->_ptr + 1 < v55;
    std::string::_M_dispose((void **)&configPathParamName);
    if ( v51 )
    {
      Streama = (FILE *)((char *)Streama + 1);
      std::string::_M_assign((int)blankStr, (int)&fileList[v67 + 6]);
      goto LABEL_84;
    }
    v9 = fileList[6 * (_DWORD)Streama];
    if ( *(_BYTE *)(v9 + 1) == 99 && *(_BYTE *)(v9 + 2) == 98 )
    {
      LOBYTE(v142[0]) = 0;
      v140 = (char *)v142;
      v10 = (char *)fileList[v67 + 6];
      Streama = (FILE *)((char *)Streama + 1);
      v60 |= 0x80u;
      v141 = 0;
      ReadFile(v10, (unsigned int *)&v140);
      if ( v141 )
      {
        std::string::basic_string((void **)&configPathParamName, "life_cycle_callback_content");
        v11 = std::map<std::string,std::string>::operator[](&v105, &configPathParamName);
        std::string::_M_assign((int)v11, (int)&v140);
        std::string::_M_dispose((void **)&configPathParamName);
      }
      std::string::_M_dispose((void **)&v140);
    }
    else
    {
      if ( !std::string::compare((int)&fileList[v67], "--pm") )
      {
        v48 = (FILE *)((char *)&Streama->_ptr + 1);
        if ( (int)&Streama->_ptr + 1 < v55 )
        {
          Streamk = (FILE *)&fileList[v67 + 6];
          std::string::basic_string((void **)&configPathParamName, "plain_text_marker");
          v12 = std::map<std::string,std::string>::operator[](&v105, &configPathParamName);
          std::string::_M_assign((int)v12, (int)Streamk);
          std::string::_M_dispose((void **)&configPathParamName);
          v8 = v48;
          goto LABEL_72;
        }
      }
      v49 = fileList[6 * (_DWORD)Streama];
      if ( *(_BYTE *)(v49 + 1) == 108 && *(_BYTE *)(v49 + 2) == 108 )
      {
        v13 = *(_BYTE *)(v49 + 3);
        if ( v13 != 119 )
        {
          if ( v13 != 97 )
          {
            v14 = ___acrt_iob_func(2u);
            fprintf(v14, "Error: expected -llw or -lla, but got %s", (const char *)v49);
            v68 = -1;
            goto LABEL_153;
          }
          v51 = 1;
        }
        if ( !std::string::compare((int)blankStr, " ") )
          std::string::basic_string((void **)&configPathParamName, ",");
        else
          std::string::basic_string((char *)&configPathParamName, (int)blankStr);
        Streama = (FILE *)((char *)Streama + 1);
        Split((int)&v131, &fileList[v67 + 6], (int)&configPathParamName);
        v15 = (void **)v131;
        v16 = (char *)v92;
        v131 = 0;
        v17 = v93;
        v92 = v15;
        v140 = v16;
        v93 = v132;
        v142[0] = v94;
        v141 = v17;
        v94 = v133;
        v132 = 0;
        v133 = 0;
        std::vector<std::string>::~vector((void ***)&v140, v17);
        std::vector<std::string>::~vector((void ***)&v131, v18);
        std::string::_M_dispose((void **)&configPathParamName);
        v43 = 1;
        v53 = v51;
      }
    }
LABEL_84:
    Streama = (FILE *)((char *)Streama + 1);
  }
  if ( v44 )
  {
    std::string::basic_string((void **)&configPathParamName, "global");
    WXML::Compiler::GetVersionInfo((int)&v140, &configPathParamName);
    std::string::_M_dispose((void **)&configPathParamName);
    Streamb = ___acrt_iob_func(1u);
    if ( FileNamea && *FileNamea )
      Streamb = fopen(FileNamea, "w");
    fprintf(Streamb, "%s\n", v140);
    fclose(Streamb);
    std::string::_M_dispose((void **)&v140);
  }
  if ( v86 == v87 )
  {
    v68 = Usage(innerArgc, innerArgv);
  }
  else
  {
    v108[0] = 0;
    v108[2] = (int)v108;
    v108[3] = (int)v108;
    v108[1] = 0;
    v108[4] = 0;
    v110[0] = 0;
    v110[1] = 0;
    v110[2] = (int)v110;
    v110[3] = (int)v110;
    v110[4] = 0;
    Streamc = 0;
    if ( v45 )
    {
      configPathParamName = (int)v145;
      v144 = 0;
      v145[0] = 0;
      ReadFile(0, (unsigned int *)&configPathParamName);
      v19 = std::map<std::string,std::string>::operator[](&v107, (int)v86);
      std::string::_M_assign((int)v19, (int)&configPathParamName);
      std::string::_M_dispose((void **)&configPathParamName);
    }
    else
    {
      while ( -1431655765 * (((char *)v87 - (char *)v86) >> 3) > (unsigned int)Streamc )
      {
        v145[0] = 0;
        configPathParamName = (int)v145;
        v20 = (char *)v86[6 * (_DWORD)Streamc];
        v144 = 0;
        ReadFile(v20, (unsigned int *)&configPathParamName);
        v21 = std::map<std::string,std::string>::operator[](&v107, (int)&v86[6 * (_DWORD)Streamc]);
        std::string::_M_assign((int)v21, (int)&configPathParamName);
        std::string::_M_dispose((void **)&configPathParamName);
        Streamc = (FILE *)((char *)Streamc + 1);
      }
    }
    if ( v96 )
    {
      GetNextArg((int)String, (int *)&v95, (int)blankStr);
      v52 = strtoull(String[0], 0, 10);
      std::string::_M_dispose((void **)String);
      v131 = 0;
      v132 = 0;
      v133 = 0;
      for ( i = 0; (int)i < v52; i = (std::ostream::sentry *)((char *)i + 1) )
      {
        v141 = 0;
        v140 = (char *)v142;
        LOBYTE(v142[0]) = 0;
        memset(String, 0, 12);
        GetNextArg((int)v135, (int *)&v95, (int)blankStr);
        std::string::operator=((unsigned __int8 **)&v140, (int)v135);
        std::string::_M_dispose(v135);
        GetNextArg((int)v136, (int *)&v95, (int)blankStr);
        v50 = strtoull(v136[0], 0, 10);
        std::string::_M_dispose((void **)v136);
        for ( Streamd = 0; (int)Streamd < v50; Streamd = (FILE *)((char *)Streamd + 1) )
        {
          v144 = 0;
          configPathParamName = (int)v145;
          v145[0] = 0;
          GetNextArg((int)&v137, (int *)&v95, (int)blankStr);
          std::string::operator=((unsigned __int8 **)&configPathParamName, (int)&v137);
          std::string::_M_dispose((void **)&v137);
          std::vector<std::string>::push_back((int)String, (int)&configPathParamName);
          v69 = v132;
          if ( v69 == std::find<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>,std::string>(
                        v131,
                        v132,
                        (int)&configPathParamName) )
            std::vector<std::string>::push_back((int)&v131, (int)&configPathParamName);
          std::string::_M_dispose((void **)&configPathParamName);
        }
        Streame = (FILE *)std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::lower_bound(
                            &v109,
                            (int)&v140);
        if ( Streame == (FILE *)v110 || (unsigned __int8)std::operator<<char>((int)&v140, (int)&Streame->_file) )
        {
          Block = operator new(0x34u);
          std::string::basic_string((char *)Block + 16, (int)&v140);
          Block[10] = 0;
          Block[11] = 0;
          Block[12] = 0;
          Streame = (FILE *)std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::_M_get_insert_hint_unique_pos(
                              &v109,
                              Streame,
                              (int)(Block + 4));
          if ( v22 )
          {
            Streame = (FILE *)std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::_M_insert_node(
                                &v109,
                                (int)Streame,
                                v22,
                                Block);
          }
          else
          {
            std::vector<std::string>::~vector((void ***)Block + 10, 0);
            std::string::_M_dispose((void **)Block + 4);
            operator delete(Block);
          }
        }
        std::vector<std::string>::operator=((int)&Streame[1]._base, (int *)String);
        std::vector<std::string>::~vector((void ***)String, v23);
        std::string::_M_dispose((void **)&v140);
      }
      std::string::basic_string((void **)&configPathParamName, "ALL");
      v24 = std::map<std::string,std::vector<std::string>>::operator[](&v109, &configPathParamName);
      std::vector<std::string>::operator=((int)v24, &v131);
      std::string::_M_dispose((void **)&configPathParamName);
      std::vector<std::string>::~vector((void ***)&v131, v25);
    }
    v111[1] = 0;
    v111[0] = &v112;
    v113[0] = &v114;
    v112 = 0;
    v113[1] = 0;
    v114 = 0;
    v116 = 0;
    v117 = 0;
    v118 = &v116;
    v119 = &v116;
    v120 = 0;
    if ( v43 )
    {
      v70 = v93;
      for ( Streamg = (FILE *)v92; Streamg != (FILE *)v70; Streamg = (FILE *)((char *)Streamg + 24) )
      {
        if ( *Streamg->_ptr == 46 && Streamg->_ptr[1] == 47 )
        {
          std::string::substr(&configPathParamName, Streamg, 2u, 0xFFFFFFFF);
          std::string::operator=((unsigned __int8 **)Streamg, (int)&configPathParamName);
          std::string::_M_dispose((void **)&configPathParamName);
        }
      }
      v122[0] = 0;
      v122[1] = 0;
      v123 = v122;
      v124 = v122;
      v125 = 0;
      std::string::basic_string((void **)&configPathParamName, "l_");
      std::string::basic_string((void **)&v140, "f_");
      std::string::basic_string((void **)&v137, "$gdwx");
      std::string::basic_string((void **)v136, "boxofchocolate");
      std::string::basic_string(v135, (char *)&byte_5402D0);
      std::string::basic_string((void **)String, "p_");
      std::string::basic_string((void **)&v131, "d_");
      std::string::basic_string(v130, "e_");
      std::string::basic_string(v129, "gg");
      std::string::basic_string(v128, (char *)off_5403C3);
      std::string::basic_string(v127, (char *)&off_5403C3[2]);
      std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::_Rb_tree(
        v126,
        (int)&v109);
      v68 = (int)WXML::Compiler::CompileLazy(
                   &v107,
                   (int *)v111,
                   &v115,
                   &v101,
                   &v121,
                   v126,
                   (int *)&v92,
                   &v105,
                   v53,
                   (int)gwxMark,
                   v60,
                   10,
                   (int *)v127,
                   (int *)v128,
                   (int *)v129,
                   (int *)v130,
                   &v131,
                   (int *)String,
                   (int)v135,
                   (int)v136,
                   (int)&v137,
                   (int *)&v140);
      std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::~_Rb_tree((int)v126);
      std::string::_M_dispose(v127);
      std::string::_M_dispose(v128);
      std::string::_M_dispose(v129);
      std::string::_M_dispose(v130);
      std::string::_M_dispose((void **)&v131);
      std::string::_M_dispose((void **)String);
      std::string::_M_dispose(v135);
      std::string::_M_dispose((void **)v136);
      std::string::_M_dispose((void **)&v137);
      std::string::_M_dispose((void **)&v140);
      std::string::_M_dispose((void **)&configPathParamName);
      std::string::basic_string((void **)&v140, "__COMMON__");
      v61 = v117;
      Streamh = &v116;
      while ( v61 )
      {
        v27 = (unsigned __int8)std::operator<<char>((int)v61 + 16, (int)&v140) == 0;
        v28 = Streamh;
        v29 = (std::ostream::sentry *)*((_DWORD *)v61 + 3);
        if ( v27 )
        {
          v29 = (std::ostream::sentry *)*((_DWORD *)v61 + 2);
          if ( v27 )
            v28 = (int *)v61;
        }
        v61 = v29;
        Streamh = v28;
      }
      if ( Streamh != &v116 )
      {
        v27 = (unsigned __int8)std::operator<<char>((int)&v140, (int)(Streamh + 4)) == 0;
        v30 = &v116;
        if ( v27 )
          v30 = Streamh;
        Streamh = v30;
      }
      std::string::_M_dispose((void **)&v140);
      if ( Streamh == &v116 )
      {
        WXML::Compiler::WXMLHelperCode[abi:cxx11]((void **)&v140);
        std::string::basic_string(
          (void **)&v137,
          "var __wxAppData=__wxAppData||{};var __wxAppCode__=__wxAppCode__||{};var global=global||{};var __WXML_GLOBAL__="
          "__WXML_GLOBAL__||{entrys:{},defines:{},modules:{},ops:[],wxs_nf_init:undefined,total_ops:0};var Component=Comp"
          "onent||function(){};var definePlugin=definePlugin||function(){};var requirePlugin=requirePlugin||function(){};"
          "var Behavior=Behavior||function(){};var __vd_version_info__=__vd_version_info__||{};var __GWX_GLOBAL__=__GWX_G"
          "LOBAL__||{};var __globalThis=(typeof __vd_version_info__!=='undefined'&&typeof __vd_version_info__.globalThis!"
          "=='undefined')?__vd_version_info__.globalThis:(typeof window!=='undefined'?window:globalThis);");
        std::operator+<char>(&configPathParamName, &v137, (unsigned int *)&v140);
        std::string::basic_string((void **)v136, "__COMMON__");
        v33 = (unsigned __int8 **)std::map<std::string,std::string>::operator[](&v115, v136);
        std::string::operator=(v33, (int)&configPathParamName);
        std::string::_M_dispose((void **)v136);
        std::string::_M_dispose((void **)&configPathParamName);
        std::string::_M_dispose((void **)&v137);
      }
      else
      {
        std::string::basic_string((void **)&v140, "__COMMON__");
        Streamm = (FILE *)std::map<std::string,std::string>::operator[](&v115, &v140);
        WXML::Compiler::WXMLHelperCode[abi:cxx11]((void **)v136);
        std::string::basic_string(
          v135,
          "var __wxAppData=__wxAppData||{};var __wxAppCode__=__wxAppCode__||{};var global=global||{};var __WXML_GLOBAL__="
          "__WXML_GLOBAL__||{entrys:{},defines:{},modules:{},ops:[],wxs_nf_init:undefined,total_ops:0};var Component=Comp"
          "onent||function(){};var definePlugin=definePlugin||function(){};var requirePlugin=requirePlugin||function(){};"
          "var Behavior=Behavior||function(){};var __vd_version_info__=__vd_version_info__||{};var __GWX_GLOBAL__=__GWX_G"
          "LOBAL__||{};var __globalThis=(typeof __vd_version_info__!=='undefined'&&typeof __vd_version_info__.globalThis!"
          "=='undefined')?__vd_version_info__.globalThis:(typeof window!=='undefined'?window:globalThis);");
        std::operator+<char>(&v137, v135, (unsigned int *)v136);
        v31 = std::string::append(&v137, (int)Streamm);
        std::string::basic_string(&configPathParamName, v31);
        std::string::basic_string((void **)String, "__COMMON__");
        v32 = (unsigned __int8 **)std::map<std::string,std::string>::operator[](&v115, String);
        std::string::operator=(v32, (int)&configPathParamName);
        std::string::_M_dispose((void **)String);
        std::string::_M_dispose((void **)&configPathParamName);
        std::string::_M_dispose((void **)&v137);
        std::string::_M_dispose(v135);
        std::string::_M_dispose((void **)v136);
      }
      std::string::_M_dispose((void **)&v140);
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream((int)&configPathParamName);
      std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v145, ";var __WXML_DEP__=__WXML_DEP__||{};");
      for ( j = v123; ; j = (int *)std::_Rb_tree_increment((int)Streami) )
      {
        Streami = (FILE *)j;
        if ( j == v122 )
          break;
        if ( j[11] != j[10] )
        {
          v62 = std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v145, "__WXML_DEP__[\"");
          WXML::Rewrite::ToStringCode((int)&v140, &Streami->_file);
          v35 = std::operator<<<char>(v62, (int *)&v140);
          std::operator<<<std::char_traits<char>>(v35, "\"]=[");
          std::string::_M_dispose((void **)&v140);
          flag = (int *)Streami[1]._flag;
          for ( k = (int *)Streami[1]._base; flag != k; k += 6 )
          {
            v57 = std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v145, "\"");
            WXML::Rewrite::ToStringCode((int)&v140, k);
            v36 = std::operator<<<char>(v57, (int *)&v140);
            std::operator<<<std::char_traits<char>>(v36, "\",");
            std::string::_M_dispose((void **)&v140);
          }
          std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v145, "];");
        }
      }
      std::stringbuf::str((int)&v140, (int)v146);
      std::string::basic_string((void **)&v137, "__COMMON__");
      v37 = std::map<std::string,std::string>::operator[](&v115, &v137);
      std::string::append(v37, (int)&v140);
      std::string::_M_dispose((void **)&v137);
      std::string::_M_dispose((void **)&v140);
      if ( v68 )
      {
        Streamn = (FILE *)v111[0];
        v38 = ___acrt_iob_func(2u);
        fprintf(v38, "Error %d: %s\n", v68, (const char *)Streamn);
      }
      else
      {
        Streamj = ___acrt_iob_func(1u);
        if ( FileNamea && *FileNamea )
          Streamj = fopen(FileNamea, "w");
        DictToJsonString((int)v136, (int)&v115);
        DictToJsonString((int)&v137, (int)&v101);
        std::string::basic_string((void **)&v140, " {\"generateFunctionContent\":%s,\"generateFunctionName\":%s} ");
        fprintf(Streamj, v140, v136[0], v137);
        fclose(Streamj);
        std::string::_M_dispose((void **)&v140);
        std::string::_M_dispose((void **)&v137);
        std::string::_M_dispose((void **)v136);
      }
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream((int)&configPathParamName);
      std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::~_Rb_tree((int)&v121);
    }
    else
    {
      std::string::basic_string((void **)&configPathParamName, "l_");
      std::string::basic_string((void **)&v140, "f_");
      std::string::basic_string((void **)&v137, "$gdwx");
      std::string::basic_string((void **)v136, "boxofchocolate");
      std::string::basic_string(v135, (char *)&byte_5402D0);
      std::string::basic_string((void **)String, "p_");
      std::string::basic_string((void **)&v131, "d_");
      std::string::basic_string(v130, "e_");
      std::string::basic_string(v129, "gg");
      std::string::basic_string(v128, (char *)off_5403C3);
      std::string::basic_string(v127, (char *)&off_5403C3[2]);
      std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::_Rb_tree(
        v126,
        (int)&v109);
      v68 = (int)WXML::Compiler::Compile(
                   v3,
                   &v107,
                   (int *)v111,
                   (unsigned __int8 **)v113,
                   v126,
                   &v105,
                   v53,
                   (int *)gwxMark,
                   v60,
                   10,
                   (int *)v127,
                   (int *)v128,
                   (int *)v129,
                   (int *)v130,
                   &v131,
                   (int *)String,
                   (int)v135,
                   (int)v136,
                   (int)&v137,
                   (int *)&v140);
      std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::~_Rb_tree((int)v126);
      std::string::_M_dispose(v127);
      std::string::_M_dispose(v128);
      std::string::_M_dispose(v129);
      std::string::_M_dispose(v130);
      std::string::_M_dispose((void **)&v131);
      std::string::_M_dispose((void **)String);
      std::string::_M_dispose(v135);
      std::string::_M_dispose((void **)v136);
      std::string::_M_dispose((void **)&v137);
      std::string::_M_dispose((void **)&v140);
      std::string::_M_dispose((void **)&configPathParamName);
      if ( v68 )
      {
        Streaml = (FILE *)v111[0];
        v26 = ___acrt_iob_func(2u);
        fprintf(v26, "%s\n", (const char *)Streaml);
      }
      else
      {
        Streamf = ___acrt_iob_func(1u);
        if ( FileNamea && *FileNamea )
          Streamf = fopen(FileNamea, "w");
        fprintf(Streamf, "%s\n", (const char *)v113[0]);
        fclose(Streamf);
      }
    }
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~_Rb_tree((int)&v115);
    std::string::_M_dispose(v113);
    std::string::_M_dispose(v111);
    std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::~_Rb_tree((int)&v109);
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~_Rb_tree((int)&v107);
  }
LABEL_153:
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~_Rb_tree((int)&v105);
  std::string::_M_dispose(blankStr);
  std::string::_M_dispose(gwxMark);
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~_Rb_tree((int)&v101);
  std::vector<std::string>::~vector(&v92, v39);
  std::vector<std::string>::~vector((void ***)&v89, v40);
  std::string::_M_dispose((void **)&configPathData);
  std::string::_M_dispose((void **)&v95);
  std::vector<std::string>::~vector(&v86, v41);
  return v68;
}