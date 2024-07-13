
//----- (00500ED0) --------------------------------------------------------
int main(int argc, const char **argv, const char **envp)
{
  int v3; // ebx
  char **v4; // edi
  int v5; // eax
  bool v6; // dl
  int v7; // edi
  int v8; // ebx
  void **v9; // eax
  _BYTE *v10; // edx
  char v11; // al
  char v12; // al
  void **v13; // eax
  void **v14; // eax
  bool v15; // si
  _BYTE *v16; // edx
  char *v17; // eax
  _DWORD *v18; // eax
  const char **v19; // ecx
  _BYTE *v20; // eax
  void **v21; // esi
  _DWORD *v22; // eax
  char v23; // dl
  void **v24; // ebx
  char *v25; // ecx
  int v26; // edx
  int v27; // edx
  FILE *v28; // ebx
  int JsonDict; // eax
  char **m; // ebx
  int v31; // edi
  char *v32; // esi
  _DWORD *v33; // eax
  const char **v34; // edx
  unsigned int v35; // ebx
  _DWORD *v36; // eax
  _DWORD *v37; // eax
  int v38; // esi
  int v39; // edi
  int v40; // esi
  int *inserted; // ebx
  char *v42; // eax
  void **v43; // edi
  char *v44; // esi
  int insert_hint_unique_pos; // eax
  _DWORD *v46; // edx
  int v47; // edx
  _DWORD *v48; // eax
  int v49; // edx
  FILE *v50; // ebx
  int v51; // edi
  void **j; // ebx
  int *v53; // eax
  int *v54; // esi
  _DWORD *v55; // ebx
  _DWORD *v56; // eax
  _DWORD *v57; // eax
  void **v58; // ecx
  _DWORD *v59; // eax
  int *k; // edi
  std::ostream::sentry *v61; // esi
  std::ostream::sentry *v62; // eax
  int *v63; // ebx
  std::ostream::sentry *v64; // eax
  _DWORD *v65; // eax
  FILE *v66; // ebx
  int v67; // edx
  int v68; // edx
  int v69; // edx
  void (__cdecl *v71)(void *); // [esp-6Ch] [ebp-414h]
  char v72; // [esp+6h] [ebp-3A2h]
  char v73; // [esp+7h] [ebp-3A1h]
  char v74; // [esp+8h] [ebp-3A0h]
  char v75; // [esp+9h] [ebp-39Fh]
  char v76; // [esp+Ah] [ebp-39Eh]
  char v77; // [esp+Bh] [ebp-39Dh]
  const char **v78; // [esp+Ch] [ebp-39Ch]
  char **v79; // [esp+Ch] [ebp-39Ch]
  int v80; // [esp+10h] [ebp-398h]
  int v81; // [esp+10h] [ebp-398h]
  char v82; // [esp+14h] [ebp-394h]
  int *v83; // [esp+14h] [ebp-394h]
  int v84; // [esp+18h] [ebp-390h]
  std::ostream::sentry *i; // [esp+18h] [ebp-390h]
  std::ostream::sentry *v86; // [esp+18h] [ebp-390h]
  bool excb; // [esp+1Ch] [ebp-38Ch]
  int exc; // [esp+1Ch] [ebp-38Ch]
  int exca; // [esp+1Ch] [ebp-38Ch]
  char *FileName; // [esp+28h] [ebp-380h] BYREF
  const char **v91; // [esp+2Ch] [ebp-37Ch] BYREF
  void **v92; // [esp+30h] [ebp-378h]
  int v93; // [esp+34h] [ebp-374h]
  void **v94; // [esp+38h] [ebp-370h] BYREF
  int v95; // [esp+3Ch] [ebp-36Ch]
  int v96; // [esp+40h] [ebp-368h]
  void **v97; // [esp+44h] [ebp-364h] BYREF
  int v98; // [esp+48h] [ebp-360h]
  int v99; // [esp+4Ch] [ebp-35Ch]
  char *v100; // [esp+50h] [ebp-358h] BYREF
  int v101; // [esp+54h] [ebp-354h]
  char v102; // [esp+58h] [ebp-350h] BYREF
  char *v103; // [esp+68h] [ebp-340h] BYREF
  int v104; // [esp+6Ch] [ebp-33Ch]
  char v105; // [esp+70h] [ebp-338h] BYREF
  int v106; // [esp+80h] [ebp-328h] BYREF
  int v107[5]; // [esp+84h] [ebp-324h] BYREF
  int v108[6]; // [esp+98h] [ebp-310h] BYREF
  void *v109[6]; // [esp+B0h] [ebp-2F8h] BYREF
  int v110; // [esp+C8h] [ebp-2E0h] BYREF
  int v111[5]; // [esp+CCh] [ebp-2DCh] BYREF
  int v112; // [esp+E0h] [ebp-2C8h] BYREF
  int v113[5]; // [esp+E4h] [ebp-2C4h] BYREF
  int v114; // [esp+F8h] [ebp-2B0h] BYREF
  int v115[5]; // [esp+FCh] [ebp-2ACh] BYREF
  int v116[2]; // [esp+110h] [ebp-298h] BYREF
  char v117; // [esp+118h] [ebp-290h] BYREF
  void *v118[2]; // [esp+128h] [ebp-280h] BYREF
  char v119; // [esp+130h] [ebp-278h] BYREF
  int v120; // [esp+140h] [ebp-268h] BYREF
  int v121[5]; // [esp+144h] [ebp-264h] BYREF
  int v122; // [esp+158h] [ebp-250h] BYREF
  int v123[5]; // [esp+15Ch] [ebp-24Ch] BYREF
  int v124; // [esp+170h] [ebp-238h] BYREF
  int v125[5]; // [esp+174h] [ebp-234h] BYREF
  int v126; // [esp+188h] [ebp-220h] BYREF
  int v127[5]; // [esp+18Ch] [ebp-21Ch] BYREF
  int v128[6]; // [esp+1A0h] [ebp-208h] BYREF
  int v129[6]; // [esp+1B8h] [ebp-1F0h] BYREF
  int v130[6]; // [esp+1D0h] [ebp-1D8h] BYREF
  int v131[6]; // [esp+1E8h] [ebp-1C0h] BYREF
  int v132[6]; // [esp+200h] [ebp-1A8h] BYREF
  int v133; // [esp+218h] [ebp-190h] BYREF
  int v134; // [esp+21Ch] [ebp-18Ch]
  int v135; // [esp+220h] [ebp-188h]
  int v136; // [esp+230h] [ebp-178h] BYREF
  int v137; // [esp+234h] [ebp-174h]
  int v138; // [esp+238h] [ebp-170h]
  char *String; // [esp+248h] [ebp-160h] BYREF
  int v140; // [esp+24Ch] [ebp-15Ch]
  int v141; // [esp+250h] [ebp-158h] BYREF
  int v142; // [esp+260h] [ebp-148h] BYREF
  char *v143[5]; // [esp+264h] [ebp-144h] BYREF
  char *v144; // [esp+278h] [ebp-130h] BYREF
  int v145[5]; // [esp+27Ch] [ebp-12Ch] BYREF
  int v146; // [esp+290h] [ebp-118h] BYREF
  int v147; // [esp+294h] [ebp-114h]
  char v148[16]; // [esp+298h] [ebp-110h] BYREF
  char *Format; // [esp+2A8h] [ebp-100h] BYREF
  int v150; // [esp+2ACh] [ebp-FCh]
  int v151[4]; // [esp+2B0h] [ebp-F8h] BYREF
  int v152; // [esp+2C0h] [ebp-E8h] BYREF
  int v153; // [esp+2C4h] [ebp-E4h]
  char v154[4]; // [esp+2C8h] [ebp-E0h] BYREF
  int v155[3]; // [esp+2CCh] [ebp-DCh] BYREF
  char v156[192]; // [esp+2D8h] [ebp-D0h] BYREF
  int *p_argc; // [esp+398h] [ebp-10h]

  p_argc = &argc;
  v80 = argc;
  v78 = argv;
  __main();
  FileName = 0;
  v100 = &v102;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v101 = 0;
  v102 = 0;
  v103 = &v105;
  v104 = 0;
  v105 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  std::_Rb_tree_header::_Rb_tree_header(v107);
  std::string::basic_string((void **)v108, "$gwx");
  std::string::basic_string(v109, " ");
  v3 = 1;
  std::_Rb_tree_header::_Rb_tree_header(v111);
  while ( v3 < v80 )
  {
    std::string::basic_string((void **)&v152, "--config-path");
    v4 = (char **)&v78[v3];
    v5 = std::string::compare((int)&v152, *v4);
    v6 = 0;
    if ( !v5 )
      v6 = v3 + 1 < v80;
    excb = v6;
    std::string::_M_dispose((void **)&v152);
    if ( excb )
    {
      std::string::operator=((unsigned int *)&v103, (char *)v78[++v3]);
    }
    else
    {
      std::string::basic_string((void **)&v152, *v4);
      std::vector<std::string>::emplace_back<std::string>(&v94, &v152);
      std::string::_M_dispose((void **)&v152);
    }
    ++v3;
  }
  if ( v104 )
  {
    v147 = 0;
    v146 = (int)v148;
    v148[0] = 0;
    ReadFile(v103, (unsigned int *)&v146);
    while ( v147 )
    {
      std::string::basic_string((void **)&Format, "\n");
      GetNextArg(&v152, &v146, (int)&Format);
      std::vector<std::string>::emplace_back<std::string>(&v94, &v152);
      std::string::_M_dispose((void **)&v152);
      std::string::_M_dispose((void **)&Format);
    }
    std::string::_M_dispose((void **)&v146);
  }
  v7 = 0;
  exc = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v84 = -1431655765 * ((v95 - (int)v94) >> 3);
  v76 = 0;
  v82 = 0;
  v77 = 0;
  while ( v7 < v84 )
  {
    v8 = 6 * v7;
    v9 = &v94[6 * v7];
    v10 = *v9;
    if ( *(_BYTE *)*v9 != 45 )
    {
      std::vector<std::string>::push_back(&v91, (int)v9);
      goto LABEL_90;
    }
    v11 = v10[1];
    switch ( v11 )
    {
      case 'd':
        v12 = v10[2];
        if ( !v12 )
        {
          exc |= 2u;
          goto LABEL_90;
        }
        if ( v12 == 115 )
        {
          exc |= 4u;
          goto LABEL_90;
        }
        break;
      case 's':
        if ( v10[2] == 116 )
        {
          exc |= 8u;
          goto LABEL_90;
        }
        if ( v7 + 1 < v84 )
        {
          v77 = 1;
          std::vector<std::string>::push_back(&v91, (int)&v94[v8 + 6]);
          goto LABEL_90;
        }
        break;
      case 'v':
        if ( v10[2] == 98 )
          exc |= 0x10u;
        else
          v76 = 1;
        goto LABEL_90;
      case 'x':
        if ( v10[2] == 99 && v7 + 1 < v84 )
        {
          v13 = &v94[v8 + 6];
          v82 = 1;
          if ( *(_BYTE *)*v13 != 45 )
          {
            std::string::_M_assign((int)&v100, (int)v13);
            v82 = 1;
            ++v7;
          }
          goto LABEL_90;
        }
        break;
      case 'c':
        if ( v10[2] == 99 && v7 + 1 < v84 )
        {
          v14 = &v94[v8 + 6];
          v82 = 0;
          if ( *(_BYTE *)*v14 != 45 )
          {
            std::string::_M_assign((int)&v100, (int)v14);
            v82 = 0;
            ++v7;
          }
          goto LABEL_90;
        }
        break;
      case 'o':
        if ( v7 + 1 < v84 )
        {
          ++v7;
          FileName = (char *)v94[v8 + 6];
          goto LABEL_90;
        }
        break;
      case 'g':
        if ( v10[2] == 110 && v7 + 1 < v84 )
        {
          std::string::_M_assign((int)v108, (int)&v94[v8 + 6]);
          ++v7;
          goto LABEL_90;
        }
        break;
      case 'p':
        exc |= 0x20u;
        goto LABEL_90;
      case 't':
        exc |= 1u;
        goto LABEL_90;
      case 'i':
        exc |= 0x40u;
        goto LABEL_90;
    }
    std::string::basic_string((void **)&v152, "--split");
    v15 = std::operator==<char>((int)&v94[v8], (int)&v152);
    if ( v15 )
      v15 = v7 + 1 < v84;
    std::string::_M_dispose((void **)&v152);
    if ( v15 )
    {
      ++v7;
      std::string::_M_assign((int)v109, (int)&v94[v8 + 6]);
    }
    else
    {
      v16 = v94[6 * v7];
      if ( v16[1] == 99 && v16[2] == 98 )
      {
        ++v7;
        LOBYTE(v151[0]) = 0;
        Format = (char *)v151;
        v17 = (char *)v94[v8 + 6];
        exc |= 0x80u;
        v150 = 0;
        ReadFile(v17, (unsigned int *)&Format);
        if ( v150 )
        {
          std::string::basic_string((void **)&v152, "life_cycle_callback_content");
          v18 = std::map<std::string,std::string>::operator[](&v110, &v152);
          std::string::_M_assign((int)v18, (int)&Format);
          std::string::_M_dispose((void **)&v152);
        }
        std::string::_M_dispose((void **)&Format);
      }
      else if ( !std::string::compare((int)&v94[v8], "--pm") && v7 + 1 < v84 )
      {
        v21 = &v94[v8 + 6];
        std::string::basic_string((void **)&v152, "plain_text_marker");
        v22 = std::map<std::string,std::string>::operator[](&v110, &v152);
        std::string::_M_assign((int)v22, (int)v21);
        std::string::_M_dispose((void **)&v152);
        ++v7;
      }
      else
      {
        v19 = (const char **)&v94[v8];
        v20 = v94[v8];
        if ( v20[1] == 108/*l*/ && v20[2] == 108/*l*/ )
        {
          v23 = v20[3];
          if ( v23 != 119 )
          {
            if ( v23 != 97 )
            {
              fprintf(&__iob[2], "Error: expected -llw or -lla, but got %s", *v19);
              exca = -1;
              goto LABEL_177;
            }
            v15 = 1;
          }
          if ( !std::string::compare((int)v109, " ") )
            std::string::basic_string((void **)&v152, ",");
          else
            std::string::basic_string(&v152, (int)v109);
          ++v7;
          Split((int)&v133, (int *)&v94[v8 + 6], (int)&v152);
          v24 = (void **)v133;
          v25 = (char *)v97;
          v133 = 0;
          v26 = v98;
          v97 = v24;
          Format = v25;
          v98 = v134;
          v151[0] = v99;
          v150 = v26;
          v99 = v135;
          v134 = 0;
          v135 = 0;
          std::vector<std::string>::~vector((void ***)&Format, v26);
          std::vector<std::string>::~vector((void ***)&v133, v27);
          std::string::_M_dispose((void **)&v152);
          v75 = 1;
          v82 = v15;
        }
        else if ( !std::string::compare((int)v19, "--wxs") )
        {
          v74 = 1;
        }
        else if ( !std::string::compare((int)&v94[v8], "--gdc") )
        {
          v73 = 1;
        }
        else if ( !std::string::compare((int)&v94[v8], "--wxs-env") )
        {
          v72 = 1;
        }
      }
    }
LABEL_90:
    ++v7;
  }
  // version
  if ( v76 )
  {
    std::string::basic_string((void **)&v152, "global");
    WXML::Compiler::GetVersionInfo((int)&Format, &v152);
    std::string::_M_dispose((void **)&v152);
    if ( FileName && *FileName )
      v28 = fopen(FileName, "w");
    else
      v28 = &__iob[1];
    fprintf(v28, "%s\n", Format);
    fclose(v28);
    std::string::_M_dispose((void **)&Format);
  }
  // not wxs
  if ( !v74 )
  {
    v34 = (const char **)&WXML::GlassEaselWxs::sGenFuncDeepCopy;
    // not gdc
    if ( !v73 )
    {
      // not wxs env
      if ( !v72 )
      {
        // empty
        if ( v91 == (const char **)v92 )
        {
          exca = Usage(v80, v78);
        }
        else
        {
          v35 = 0;
          std::_Rb_tree_header::_Rb_tree_header(v113);
          std::_Rb_tree_header::_Rb_tree_header(v115);
          if ( v77 )
          {
            v152 = (int)v154;
            v153 = 0;
            v154[0] = 0;
            ReadFile(0, (unsigned int *)&v152);
            v36 = std::map<std::string,std::string>::operator[](&v112, (int)v91);
            std::string::_M_assign((int)v36, (int)&v152);
            std::string::_M_dispose((void **)&v152);
          }
          else
          {
            while ( v35 < -1431655765 * (((char *)v92 - (char *)v91) >> 3) )
            {
              v154[0] = 0;
              v152 = (int)v154;
              v153 = 0;
              ReadFile((char *)v91[6 * v35], (unsigned int *)&v152);
              v37 = std::map<std::string,std::string>::operator[](&v112, (int)&v91[6 * v35]);
              std::string::_M_assign((int)v37, (int)&v152);
              ++v35;
              std::string::_M_dispose((void **)&v152);
            }
          }
          if ( v101 )
          {
            GetNextArg(&String, (int *)&v100, (int)v109);
            v81 = strtoull(String, 0, 10);
            std::string::_M_dispose((void **)&String);
            v136 = 0;
            v137 = 0;
            v138 = 0;
            for ( i = 0; (int)i < v81; i = (std::ostream::sentry *)((char *)i + 1) )
            {
              v150 = 0;
              Format = (char *)v151;
              LOBYTE(v151[0]) = 0;
              String = 0;
              v140 = 0;
              v141 = 0;
              GetNextArg(&v142, (int *)&v100, (int)v109);
              std::string::operator=(&Format, &v142);
              std::string::_M_dispose((void **)&v142);
              std::__find_if<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
                (int)v91,
                (int)v92,
                (int)&Format);
              GetNextArg(&v144, (int *)&v100, (int)v109);
              v38 = 0;
              v79 = (char **)strtoull(v144, 0, 10);
              std::string::_M_dispose((void **)&v144);
              while ( v38 < (int)v79 )
              {
                v153 = 0;
                v152 = (int)v154;
                v154[0] = 0;
                GetNextArg(&v146, (int *)&v100, (int)v109);
                std::string::operator=(&v152, &v146);
                std::string::_M_dispose((void **)&v146);
                std::vector<std::string>::push_back(&String, (int)&v152);
                v39 = v137;
                if ( v39 == std::__find_if<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
                              v136,
                              v137,
                              (int)&v152) )
                  std::vector<std::string>::push_back(&v136, (int)&v152);
                ++v38;
                std::string::_M_dispose((void **)&v152);
              }
              v40 = v115[1];
              inserted = v115;
              while ( v40 )
              {
                if ( (unsigned __int8)std::operator<<char>(v40 + 16, (int)&Format) )
                {
                  v40 = *(_DWORD *)(v40 + 12);
                }
                else
                {
                  inserted = (int *)v40;
                  v40 = *(_DWORD *)(v40 + 8);
                }
              }
              if ( inserted == v115 || (unsigned __int8)std::operator<<char>((int)&Format, (int)(inserted + 4)) )
              {
                v42 = (char *)operator new((struct type_info *)0x34, v71);
                v43 = (void **)(v42 + 16);
                v44 = v42;
                std::string::basic_string((_DWORD *)v42 + 4, (int)&Format);
                *((_DWORD *)v44 + 10) = 0;
                *((_DWORD *)v44 + 11) = 0;
                *((_DWORD *)v44 + 12) = 0;
                insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::_M_get_insert_hint_unique_pos(
                                           &v114,
                                           inserted,
                                           (int)v43);
                inserted = (int *)insert_hint_unique_pos;
                if ( v46 )
                {
                  inserted = std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::_M_insert_node(
                               &v114,
                               insert_hint_unique_pos,
                               v46,
                               v44);
                }
                else
                {
                  std::vector<std::string>::~vector((void ***)v44 + 10, 0);
                  std::string::_M_dispose(v43);
                  operator delete(v44);
                }
              }
              std::vector<std::string>::operator=((int)(inserted + 10), (int *)&String);
              std::vector<std::string>::~vector((void ***)&String, v47);
              std::string::_M_dispose((void **)&Format);
            }
            std::string::basic_string((void **)&v152, "ALL");
            v48 = std::map<std::string,std::vector<std::string>>::operator[](&v114, &v152);
            std::vector<std::string>::operator=((int)v48, &v136);
            std::string::_M_dispose((void **)&v152);
            std::vector<std::string>::~vector((void ***)&v136, v49);
          }
          v116[1] = 0;
          v116[0] = (int)&v117;
          v117 = 0;
          v118[0] = &v119;
          v118[1] = 0;
          v119 = 0;
          std::_Rb_tree_header::_Rb_tree_header(v121);
          if ( v75 )
          {
            v51 = v98;
            for ( j = v97; (void **)v51 != j; j += 6 )
            {
              if ( *(_BYTE *)*j == 46 && *((_BYTE *)*j + 1) == 47 )
              {
                std::string::substr((void **)&v152, j, 2u, 0xFFFFFFFF);
                std::string::operator=(j, &v152);
                std::string::_M_dispose((void **)&v152);
              }
            }
            std::_Rb_tree_header::_Rb_tree_header(v123);
            std::_Rb_tree_header::_Rb_tree_header(v125);
            std::_Rb_tree_header::_Rb_tree_header(v127);
            std::string::basic_string((void **)&v152, "l_");
            std::string::basic_string((void **)&Format, "f_");
            std::string::basic_string((void **)&v146, "$gdwx");
            std::string::basic_string((void **)&v144, "boxofchocolate");
            std::string::basic_string((void **)&v142, (char *)&byte_5173B0);
            std::string::basic_string((void **)&String, "p_");
            std::string::basic_string((void **)&v136, "d_");
            std::string::basic_string((void **)&v133, "e_");
            std::string::basic_string((void **)v132, "gg");
            std::string::basic_string((void **)v131, (char *)&off_5174F9);
            std::string::basic_string((void **)v130, (_BYTE *)&off_5174F9 + 2);
            std::string::basic_string((void **)v129, (char *)&byte_5173B0);
            std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::_Rb_tree(
              v128,
              (int)&v114);
            exca = WXML::Compiler::CompileLazy(
                     (std::_Rb_tree_header *)&v112,
                     (unsigned int *)v116,
                     &v120,
                     &v106,
                     &v122,
                     (int)&v124,
                     (int)v128,
                     (std::_Rb_tree_header *)&v97,
                     0,
                     v129,
                     (int)&v126,
                     &v110,
                     v82,
                     (int)v108,
                     exc,
                     10,
                     v130,
                     v131,
                     v132,
                     &v133,
                     &v136,
                     (int *)&String,
                     (int)&v142,
                     (int)&v144,
                     (int)&v146,
                     (int *)&Format);
            std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::~_Rb_tree((int)v128);
            std::string::_M_dispose((void **)v129);
            std::string::_M_dispose((void **)v130);
            std::string::_M_dispose((void **)v131);
            std::string::_M_dispose((void **)v132);
            std::string::_M_dispose((void **)&v133);
            std::string::_M_dispose((void **)&v136);
            std::string::_M_dispose((void **)&String);
            std::string::_M_dispose((void **)&v142);
            std::string::_M_dispose((void **)&v144);
            std::string::_M_dispose((void **)&v146);
            std::string::_M_dispose((void **)&Format);
            std::string::_M_dispose((void **)&v152);
            std::string::basic_string((void **)&Format, "__COMMON__");
            v53 = (int *)std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_lower_bound(
                           v121[1],
                           (int)v121,
                           (int)&Format);
            v54 = v53;
            if ( v53 != v121 && (unsigned __int8)std::operator<<char>((int)&Format, (int)(v53 + 4)) )
              v54 = v121;
            std::string::_M_dispose((void **)&Format);
            if ( v54 == v121 )
            {
              WXML::Compiler::WXMLHelperCode[abi:cxx11]((void **)&Format);
              std::string::basic_string(
                (void **)&v146,
                "var __wxAppData=__wxAppData||{};var __wxAppCode__=__wxAppCode__||{};var global=global||{};var __WXML_GLO"
                "BAL__=__WXML_GLOBAL__||{entrys:{},defines:{},modules:{},ops:[],wxs_nf_init:undefined,total_ops:0};var Co"
                "mponent=Component||function(){};var definePlugin=definePlugin||function(){};var requirePlugin=requirePlu"
                "gin||function(){};var Behavior=Behavior||function(){};var __vd_version_info__=__vd_version_info__||{};va"
                "r __GWX_GLOBAL__=__GWX_GLOBAL__||{};var __globalThis=(typeof __vd_version_info__!=='undefined'&&typeof _"
                "_vd_version_info__.globalThis!=='undefined')?__vd_version_info__.globalThis:(typeof window!=='undefined'"
                "?window:globalThis);");
              std::operator+<char>(&v152, &v146, (unsigned int *)&Format);
              std::string::basic_string((void **)&v144, "__COMMON__");
              v59 = std::map<std::string,std::string>::operator[](&v120, &v144);
              std::string::operator=(v59, &v152);
              std::string::_M_dispose((void **)&v144);
              std::string::_M_dispose((void **)&v152);
              v58 = (void **)&v146;
            }
            else
            {
              std::string::basic_string((void **)&Format, "__COMMON__");
              v55 = std::map<std::string,std::string>::operator[](&v120, &Format);
              WXML::Compiler::WXMLHelperCode[abi:cxx11]((void **)&v144);
              std::string::basic_string(
                (void **)&v142,
                "var __wxAppData=__wxAppData||{};var __wxAppCode__=__wxAppCode__||{};var global=global||{};var __WXML_GLO"
                "BAL__=__WXML_GLOBAL__||{entrys:{},defines:{},modules:{},ops:[],wxs_nf_init:undefined,total_ops:0};var Co"
                "mponent=Component||function(){};var definePlugin=definePlugin||function(){};var requirePlugin=requirePlu"
                "gin||function(){};var Behavior=Behavior||function(){};var __vd_version_info__=__vd_version_info__||{};va"
                "r __GWX_GLOBAL__=__GWX_GLOBAL__||{};var __globalThis=(typeof __vd_version_info__!=='undefined'&&typeof _"
                "_vd_version_info__.globalThis!=='undefined')?__vd_version_info__.globalThis:(typeof window!=='undefined'"
                "?window:globalThis);");
              std::operator+<char>(&v146, &v142, (unsigned int *)&v144);
              v56 = std::string::append(&v146, (int)v55);
              std::string::basic_string(&v152, v56);
              std::string::basic_string((void **)&String, "__COMMON__");
              v57 = std::map<std::string,std::string>::operator[](&v120, &String);
              std::string::operator=(v57, &v152);
              std::string::_M_dispose((void **)&String);
              std::string::_M_dispose((void **)&v152);
              std::string::_M_dispose((void **)&v146);
              std::string::_M_dispose((void **)&v142);
              v58 = (void **)&v144;
            }
            std::string::_M_dispose(v58);
            std::string::_M_dispose((void **)&Format);
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream((int)&v152);
            std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v154, ";var __WXML_DEP__=__WXML_DEP__||{};");
            for ( k = (int *)v123[2]; k != v123; k = (int *)std::_Rb_tree_increment((int)k) )
            {
              if ( k[11] != k[10] )
              {
                v61 = std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v154, "__WXML_DEP__[\"");
                WXML::Rewrite::ToStringCode((int)&Format, k + 4);
                v62 = std::operator<<<char>(v61, (int *)&Format);
                std::operator<<<std::char_traits<char>>(v62, "\"]=[");
                std::string::_M_dispose((void **)&Format);
                v63 = (int *)k[10];
                v83 = (int *)k[11];
                while ( v83 != v63 )
                {
                  v86 = std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v154, "\"");
                  WXML::Rewrite::ToStringCode((int)&Format, v63);
                  v64 = std::operator<<<char>(v86, (int *)&Format);
                  std::operator<<<std::char_traits<char>>(v64, "\",");
                  v63 += 6;
                  std::string::_M_dispose((void **)&Format);
                }
                std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v154, "];");
              }
            }
            std::stringbuf::str((int)&Format, v155);
            std::string::basic_string((void **)&v146, "__COMMON__");
            v65 = std::map<std::string,std::string>::operator[](&v120, &v146);
            std::string::operator+=(v65, (int)&Format);
            std::string::_M_dispose((void **)&v146);
            std::string::_M_dispose((void **)&Format);
            if ( exca )
            {
              fprintf(&__iob[2], "Error %d: %s\n", exca, (const char *)v116[0]);
            }
            else
            {
              if ( FileName && *FileName )
                v66 = fopen(FileName, "w");
              else
                v66 = &__iob[1];
              DictToJsonString((int)&v144, (int)&v120);
              DictToJsonString((int)&v146, (int)&v106);
              std::string::basic_string(
                (void **)&Format,
                " {\"generateFunctionContent\":%s,\"generateFunctionName\":%s} ");
              fprintf(v66, Format, v144, v146);
              fclose(v66);
              std::string::_M_dispose((void **)&Format);
              std::string::_M_dispose((void **)&v146);
              std::string::_M_dispose((void **)&v144);
            }
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream((int)&v152);
            std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::~_Rb_tree((int)&v126);
            std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::~_Rb_tree((int)&v124);
            std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::~_Rb_tree((int)&v122);
          }
          else
          {
            std::string::basic_string((void **)&v152, "l_");
            std::string::basic_string((void **)&Format, "f_");
            std::string::basic_string((void **)&v146, "$gdwx");
            std::string::basic_string((void **)&v144, "boxofchocolate");
            std::string::basic_string((void **)&v142, (char *)&byte_5173B0);
            std::string::basic_string((void **)&String, "p_");
            std::string::basic_string((void **)&v136, "d_");
            std::string::basic_string((void **)&v133, "e_");
            std::string::basic_string((void **)v132, "gg");
            std::string::basic_string((void **)v131, (char *)&off_5174F9);
            std::string::basic_string((void **)v130, (_BYTE *)&off_5174F9 + 2);
            std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::_Rb_tree(
              v129,
              (int)&v114);
            exca = WXML::Compiler::Compile(
                     &v112,
                     (unsigned int *)v116,
                     v118,
                     v129,
                     &v110,
                     v82,
                     v108,
                     exc,
                     10,
                     v130,
                     v131,
                     v132,
                     &v133,
                     &v136,
                     (int *)&String,
                     (int)&v142,
                     (int)&v144,
                     (int)&v146,
                     (int *)&Format);
            std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::~_Rb_tree((int)v129);
            std::string::_M_dispose((void **)v130);
            std::string::_M_dispose((void **)v131);
            std::string::_M_dispose((void **)v132);
            std::string::_M_dispose((void **)&v133);
            std::string::_M_dispose((void **)&v136);
            std::string::_M_dispose((void **)&String);
            std::string::_M_dispose((void **)&v142);
            std::string::_M_dispose((void **)&v144);
            std::string::_M_dispose((void **)&v146);
            std::string::_M_dispose((void **)&Format);
            std::string::_M_dispose((void **)&v152);
            if ( exca )
            {
              fprintf(&__iob[2], "%s\n", (const char *)v116[0]);
            }
            else
            {
              if ( FileName && *FileName )
                v50 = fopen(FileName, "w");
              else
                v50 = &__iob[1];
              fprintf(v50, "%s\n", (const char *)v118[0]);
              fclose(v50);
            }
          }
          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~_Rb_tree((int)&v120);
          std::string::_M_dispose(v118);
          std::string::_M_dispose((void **)v116);
          std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::~_Rb_tree((int)&v114);
          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~_Rb_tree((int)&v112);
        }
        goto LABEL_177; // 清理数据
      }
      v34 = (const char **)&WXML::GlassEaselWxs::sWxsEnvInit;
    }
    main::{lambda(std::string const&)#1}::operator()((const char **)&FileName, v34);
    exca = 0;
    goto LABEL_177; // 清理数据
  }
  v140 = 0;
  String = (char *)&v141;
  LOBYTE(v141) = 0;
  std::_Rb_tree_header::_Rb_tree_header(v143);
  std::_Rb_tree_header::_Rb_tree_header(v145);
  if ( ReadFile((char *)*v91, (unsigned int *)&String) )
  {
    fprintf(&__iob[2], "Failed to read input from %s", *v91);
    exca = -1;
  }
  else
  {
    JsonDict = GetJsonDict((int *)&String, (int)&v142);
    exca = JsonDict;
    if ( JsonDict )
    {
      fprintf(&__iob[2], "Failed to read JSON at position %d (%c)", ~JsonDict, String[~JsonDict]);
LABEL_106:
      exca = -2;
    }
    else
    {
      for ( m = (char **)v143[2]; m != v143; m = (char **)std::_Rb_tree_increment((int)m) )
      {
        std::string::basic_string(&v152, (int)(m + 4));
        std::string::basic_string(v156, (int)(m + 10));
        v146 = (int)v148;
        v147 = 0;
        v148[0] = 0;
        if ( night::compile_ns_no_wrapper((int)&v152, (int)v156, 1, (unsigned int *)&v146, 0) )
        {
          fprintf(&__iob[2], "Error in file %s: %s\n", (const char *)v152, (const char *)v146);
          std::string::_M_dispose((void **)&v146);
          std::pair<std::string const,std::string>::~pair((void **)&v152);
          goto LABEL_106;
        }
        v31 = snprintf(0, 0, WXML::GlassEaselWxs::sWrapper, v146) + 1;
        v32 = (char *)operator new[](v31);
        snprintf(v32, v31, WXML::GlassEaselWxs::sWrapper, v146);
        std::string::basic_string((void **)&Format, v32);
        v33 = std::map<std::string,std::string>::operator[](&v144, (int)&v152);
        std::string::operator=(v33, &Format);
        std::string::_M_dispose((void **)&Format);
        operator delete[](v32);
        std::string::_M_dispose((void **)&v146);
        std::pair<std::string const,std::string>::~pair((void **)&v152);
      }
      DictToJsonString((int)&v136, (int)&v144);
      main::{lambda(std::string const&)#1}::operator()((const char **)&FileName, (const char **)&v136);
      std::string::_M_dispose((void **)&v136);
    }
  }
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~_Rb_tree((int)&v144);
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~_Rb_tree((int)&v142);
  std::string::_M_dispose((void **)&String);
LABEL_177:
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~_Rb_tree((int)&v110);
  std::string::_M_dispose(v109);
  std::string::_M_dispose((void **)v108);
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~_Rb_tree((int)&v106);
  std::vector<std::string>::~vector(&v97, v67);
  std::vector<std::string>::~vector(&v94, v68);
  std::string::_M_dispose((void **)&v103);
  std::string::_M_dispose((void **)&v100);
  std::vector<std::string>::~vector((void ***)&v91, v69);
  return exca;
}