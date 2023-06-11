#define _DWORD unsigned long long
struct _Unwind_Exception * CompileLazy(
        _DWORD *a1,  // fileData
        int *a2,     // 错误信息
        _DWORD *a3,  // 输出1
        _DWORD *a4,    // 输出2
        _DWORD *a5,
        _DWORD *a6,
        int *a7,// splitedData
        _DWORD *a8,// mapData1
        char a9,// isLLA
        int a10,// gwxMark
        int a11,// mark
        char a12,// '\n'
        int *a13,// 'e'
        int *a14,// const char off_5403C3[] = {'s','\0','e','\0'}
        int *a15, // "gg"
        int *a16,// "e_"
        int *a17,// "d_"
        int *a18,// "p_"
        int a19, // '\0'
        int a20, // "boxofchocolate"
        int a21,   // "$gdwx"
        int *a22)  // "f_"
{
  volatile signed __int32 **v22; // eax
  _DWORD *v23; // eax
  int v24; // edx
  _DWORD *v25; // edx
  _DWORD *v26; // eax
  char *v27; // eax
  int v28; // edx
  int insert_hint_unique_pos; // eax
  _DWORD *v30; // edx
  bool v31; // zf
  struct _Unwind_Exception *v32; // eax
  struct _Unwind_Exception *v33; // edx
  _DWORD *v34; // eax
  int k; // eax
  std::ostream::sentry *v36; // eax
  int *m; // eax
  std::ostream::sentry *v38; // eax
  std::ostream::sentry *v39; // eax
  std::ostream::sentry *v40; // eax
  bool v41; // zf
  struct _Unwind_Exception *v42; // eax
  struct _Unwind_Exception *v43; // edx
  struct _Unwind_Exception *v44; // eax
  _DWORD *v45; // eax
  volatile signed __int32 *v46; // edx
  char *v47; // ecx
  volatile signed __int32 **n; // eax
  unsigned int v49; // edx
  int v50; // edx
  int *v51; // eax
  int *v52; // eax
  std::ostream::sentry *v53; // eax
  std::ostream::sentry *v54; // eax
  std::ostream::sentry *v55; // eax
  char *v56; // eax
  std::ostream::sentry *v57; // eax
  std::ostream::sentry *v58; // eax
  std::ostream::sentry *v59; // eax
  std::ostream::sentry *v60; // eax
  std::ostream::sentry *v61; // eax
  _DWORD *v62; // eax
  std::ostream::sentry *v63; // eax
  std::ostream::sentry *v64; // eax
  std::ostream::sentry *v65; // eax
  std::ostream::sentry *v66; // eax
  std::ostream::sentry *v67; // eax
  std::ostream::sentry *v68; // eax
  std::ostream::sentry *v69; // eax
  std::ostream::sentry *v70; // eax
  std::ostream::sentry *v71; // eax
  std::ostream::sentry *v72; // eax
  std::ostream::sentry *v73; // eax
  std::ostream::sentry *v74; // eax
  std::ostream::sentry *v75; // eax
  std::ostream::sentry *v76; // eax
  std::ostream::sentry *v77; // eax
  std::ostream::sentry *v78; // eax
  std::ostream::sentry *v79; // eax
  std::ostream::sentry *v80; // eax
  std::ostream::sentry *v81; // eax
  std::ostream::sentry *v82; // eax
  std::ostream::sentry *v83; // eax
  std::ostream::sentry *v84; // eax
  std::ostream::sentry *v85; // eax
  std::ostream::sentry *v86; // eax
  std::ostream::sentry *v87; // eax
  std::ostream::sentry *v88; // eax
  std::ostream::sentry *v89; // eax
  std::ostream::sentry *v90; // eax
  std::ostream::sentry *v91; // eax
  std::ostream::sentry *v92; // eax
  std::ostream::sentry *v93; // eax
  std::ostream::sentry *v94; // eax
  std::ostream::sentry *v95; // eax
  std::ostream::sentry *v96; // eax
  char *v97; // eax
  std::__cxx11 *v98; // eax
  std::ostream::sentry *v99; // eax
  std::ostream::sentry *v100; // eax
  std::ostream::sentry *v101; // eax
  std::ostream::sentry *v102; // eax
  std::ostream::sentry *v103; // eax
  std::ostream::sentry *v104; // eax
  std::ostream::sentry *v105; // eax
  std::ostream::sentry *v106; // eax
  std::ostream::sentry *v107; // eax
  std::ostream::sentry *v108; // eax
  std::ostream::sentry *v109; // eax
  std::ostream::sentry *v110; // eax
  std::ostream::sentry *v111; // eax
  std::ostream::sentry *v112; // eax
  std::ostream::sentry *v113; // eax
  std::ostream::sentry *v114; // eax
  _DWORD *v115; // eax
  std::ostream::sentry *v116; // eax
  std::ostream::sentry *v117; // eax
  std::ostream::sentry *v118; // eax
  std::ostream::sentry *v119; // eax
  std::ostream::sentry *v120; // eax
  std::ostream::sentry *v121; // eax
  std::ostream::sentry *v122; // eax
  std::ostream::sentry *v123; // eax
  std::ostream::sentry *v124; // eax
  int *mm; // eax
  std::ostream::sentry *v126; // eax
  std::ostream::sentry *v127; // eax
  std::ostream::sentry *v128; // eax
  std::ostream::sentry *v129; // eax
  std::ostream::sentry *v130; // eax
  int *nn; // eax
  std::ostream::sentry *v132; // eax
  char *v133; // eax
  volatile signed __int32 **v134; // ecx
  char *v135; // eax
  char *v136; // eax
  std::ostream::sentry *v137; // eax
  int StrID; // eax
  std::ostream::sentry *v139; // eax
  int *v140; // eax
  unsigned int *v141; // eax
  std::ostream::sentry *v142; // eax
  int v143; // eax
  std::ostream::sentry *v144; // eax
  std::ostream::sentry *v145; // eax
  int v146; // edx
  _DWORD *v147; // eax
  int v148; // eax
  int v149; // eax
  int v150; // edx
  _DWORD *v151; // eax
  int v152; // eax
  int v153; // eax
  std::ostream::sentry *v154; // eax
  std::ostream::sentry *v155; // eax
  std::ostream::sentry *v156; // eax
  std::ostream::sentry *v157; // eax
  std::ostream::sentry *v158; // eax
  std::ostream::sentry *v159; // eax
  std::ostream::sentry *v160; // eax
  std::ostream::sentry *v161; // eax
  std::ostream::sentry *v162; // eax
  std::ostream::sentry *v163; // eax
  std::ostream::sentry *v164; // eax
  std::ostream::sentry *v165; // eax
  std::ostream::sentry *v166; // eax
  std::ostream::sentry *v167; // eax
  std::ostream::sentry *v168; // eax
  std::ostream::sentry *v169; // eax
  std::ostream::sentry *v170; // eax
  std::ostream::sentry *v171; // eax
  std::ostream::sentry *v172; // eax
  std::ostream::sentry *v173; // eax
  std::ostream::sentry *v174; // eax
  std::ostream::sentry *v175; // eax
  std::ostream::sentry *v176; // eax
  std::ostream::sentry *v177; // eax
  std::ostream::sentry *v178; // eax
  std::ostream::sentry *v179; // eax
  std::ostream::sentry *v180; // eax
  std::ostream::sentry *v181; // eax
  std::ostream::sentry *v182; // eax
  std::ostream::sentry *v183; // eax
  std::ostream::sentry *v184; // eax
  std::ostream::sentry *v185; // eax
  std::ostream::sentry *v186; // eax
  std::ostream::sentry *v187; // eax
  std::ostream::sentry *v188; // eax
  std::ostream::sentry *v189; // eax
  std::ostream::sentry *v190; // eax
  std::ostream::sentry *v191; // eax
  char *v192; // eax
  std::ostream::sentry *v193; // eax
  std::ostream::sentry *v194; // eax
  std::ostream::sentry *v195; // eax
  char *v196; // eax
  char *v197; // eax
  char *v198; // eax
  std::ostream::sentry *v199; // eax
  std::ostream::sentry *v200; // eax
  std::ostream::sentry *v201; // eax
  struct _Unwind_Exception *i5; // eax
  char *v203; // eax
  _DWORD *v205; // [esp+60h] [ebp-2C8h]
  _DWORD *v206; // [esp+60h] [ebp-2C8h]
  int v207; // [esp+64h] [ebp-2C4h]
  WXML::NameAllocator *v208; // [esp+68h] [ebp-2C0h]
  bool v209; // [esp+70h] [ebp-2B8h]
  int v210; // [esp+74h] [ebp-2B4h]
  _DWORD *v211; // [esp+74h] [ebp-2B4h]
  int v212; // [esp+74h] [ebp-2B4h]
  _DWORD *v213; // [esp+74h] [ebp-2B4h]
  _DWORD *v214; // [esp+74h] [ebp-2B4h]
  int v215; // [esp+78h] [ebp-2B0h]
  int v216; // [esp+78h] [ebp-2B0h]
  _DWORD *v217; // [esp+78h] [ebp-2B0h]
  int v218; // [esp+78h] [ebp-2B0h]
  char *v219; // [esp+7Ch] [ebp-2ACh]
  char *v220; // [esp+80h] [ebp-2A8h]
  char *v221; // [esp+88h] [ebp-2A0h]
  void *v222; // [esp+8Ch] [ebp-29Ch]
  void *v223; // [esp+90h] [ebp-298h]
  int v224; // [esp+94h] [ebp-294h]
  bool v225; // [esp+ABh] [ebp-27Dh]
  int v226; // [esp+ACh] [ebp-27Ch]
  int v227; // [esp+ACh] [ebp-27Ch]
  int v228; // [esp+ACh] [ebp-27Ch]
  unsigned int *v229; // [esp+ACh] [ebp-27Ch]
  _DWORD *v230; // [esp+ACh] [ebp-27Ch]
  unsigned int v231; // [esp+ACh] [ebp-27Ch]
  unsigned int i3; // [esp+ACh] [ebp-27Ch]
  _DWORD *v233; // [esp+B0h] [ebp-278h]
  int v234; // [esp+B4h] [ebp-274h]
  int v235; // [esp+B4h] [ebp-274h]
  char *v236; // [esp+B8h] [ebp-270h]
  WXML::EXPRLib::Parser *v237; // [esp+BCh] [ebp-26Ch]
  WXML::EXPRLib::Parser *v238; // [esp+BCh] [ebp-26Ch]
  WXML::EXPRLib::Parser *v239; // [esp+BCh] [ebp-26Ch]
  WXML::EXPRLib::Parser *v240; // [esp+BCh] [ebp-26Ch]
  WXML::EXPRLib::Parser *v241; // [esp+BCh] [ebp-26Ch]
  int ii; // [esp+BCh] [ebp-26Ch]
  WXML::EXPRLib::Parser *v243; // [esp+BCh] [ebp-26Ch]
  char *v244; // [esp+C0h] [ebp-268h]
  WXML::NameAllocator *v245; // [esp+C0h] [ebp-268h]
  WXML::NameAllocator *i2; // [esp+C0h] [ebp-268h]
  _DWORD *Block; // [esp+C4h] [ebp-264h]
  int v248; // [esp+C8h] [ebp-260h]
  WXML::DOMLib::Parser *v249; // [esp+CCh] [ebp-25Ch]
  int *v250; // [esp+CCh] [ebp-25Ch]
  std::ostream::sentry *v251; // [esp+CCh] [ebp-25Ch]
  std::ostream::sentry *v252; // [esp+CCh] [ebp-25Ch]
  std::ostream::sentry *v253; // [esp+CCh] [ebp-25Ch]
  std::ostream::sentry *v254; // [esp+CCh] [ebp-25Ch]
  std::ostream::sentry *v255; // [esp+CCh] [ebp-25Ch]
  char *v256; // [esp+CCh] [ebp-25Ch]
  std::ostream::sentry *v257; // [esp+CCh] [ebp-25Ch]
  struct _Unwind_Exception *v258; // [esp+D0h] [ebp-258h]
  char v259; // [esp+D0h] [ebp-258h]
  char *v260; // [esp+D0h] [ebp-258h]
  struct _Unwind_Exception *v261; // [esp+D0h] [ebp-258h]
  void *v262; // [esp+D0h] [ebp-258h]
  char *v263; // [esp+D0h] [ebp-258h]
  volatile signed __int32 *v264; // [esp+D0h] [ebp-258h]
  int *kk; // [esp+D0h] [ebp-258h]
  int *v266; // [esp+D0h] [ebp-258h]
  int *v267; // [esp+D0h] [ebp-258h]
  _DWORD *v268; // [esp+D0h] [ebp-258h]
  WXML::NameAllocator *i1; // [esp+D0h] [ebp-258h]
  _DWORD *v270; // [esp+D0h] [ebp-258h]
  int *v271; // [esp+D0h] [ebp-258h]
  int *i4; // [esp+D0h] [ebp-258h]
  bool v273; // [esp+D0h] [ebp-258h]
  int i; // [esp+D4h] [ebp-254h]
  _DWORD *v275; // [esp+D4h] [ebp-254h]
  struct _Unwind_Exception *v276; // [esp+D4h] [ebp-254h]
  int *v277; // [esp+D4h] [ebp-254h]
  int v278; // [esp+D4h] [ebp-254h]
  void **v279; // [esp+D4h] [ebp-254h]
  int v280; // [esp+D4h] [ebp-254h]
  int v281; // [esp+D4h] [ebp-254h]
  int v282; // [esp+D4h] [ebp-254h]
  struct _Unwind_Exception *lpuexcpt; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcpta; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcpto; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcptb; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcptc; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcptd; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcpte; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcptf; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcptg; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcpth; // [esp+D8h] [ebp-250h]
  char *lpuexcpti; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcptj; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcptp; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcptk; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcptl; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcptm; // [esp+D8h] [ebp-250h]
  struct _Unwind_Exception *lpuexcptn; // [esp+D8h] [ebp-250h]
  int v300[2]; // [esp+118h] [ebp-210h] BYREF
  int v301; // [esp+120h] [ebp-208h] BYREF
  _DWORD v302[2]; // [esp+124h] [ebp-204h] BYREF
  _DWORD *v303; // [esp+12Ch] [ebp-1FCh]
  int v304; // [esp+138h] [ebp-1F0h] BYREF
  _DWORD v305[2]; // [esp+13Ch] [ebp-1ECh] BYREF
  void *v306; // [esp+144h] [ebp-1E4h]
  int v307; // [esp+150h] [ebp-1D8h] BYREF
  _DWORD v308[5]; // [esp+154h] [ebp-1D4h] BYREF
  int v309; // [esp+168h] [ebp-1C0h] BYREF
  _DWORD v310[5]; // [esp+16Ch] [ebp-1BCh] BYREF
  int v311; // [esp+180h] [ebp-1A8h] BYREF
  _DWORD v312[5]; // [esp+184h] [ebp-1A4h] BYREF
  int v313; // [esp+198h] [ebp-190h] BYREF
  _DWORD v314[4]; // [esp+19Ch] [ebp-18Ch] BYREF
  int v315; // [esp+1ACh] [ebp-17Ch]
  int v316; // [esp+1B0h] [ebp-178h] BYREF
  int v317[5]; // [esp+1B4h] [ebp-174h] BYREF
  int v318[6]; // [esp+1C8h] [ebp-160h] BYREF
  int v319; // [esp+1E0h] [ebp-148h] BYREF
  volatile signed __int32 *v320[5]; // [esp+1E4h] [ebp-144h] BYREF
  int v321[6]; // [esp+1F8h] [ebp-130h] BYREF
  void *j; // [esp+210h] [ebp-118h] BYREF
  struct _Unwind_Exception *v323; // [esp+214h] [ebp-114h]
  int v324; // [esp+218h] [ebp-110h]
  int jj; // [esp+228h] [ebp-100h] BYREF
  volatile signed __int32 *v326; // [esp+22Ch] [ebp-FCh] BYREF
  volatile signed __int32 *v327; // [esp+230h] [ebp-F8h]
  int v328; // [esp+240h] [ebp-E8h] BYREF
  volatile signed __int32 *v329; // [esp+244h] [ebp-E4h] BYREF
  char v330[4]; // [esp+248h] [ebp-E0h] BYREF
  volatile signed __int32 **v331; // [esp+24Ch] [ebp-DCh]
  unsigned int v332; // [esp+254h] [ebp-D4h]

  std::_Rb_tree_header::_Rb_tree_header(v302);
  std::_Rb_tree_header::_Rb_tree_header(v305);
  std::_Rb_tree_header::_Rb_tree_header(v308);
  std::_Rb_tree_header::_Rb_tree_header(v310);
  std::_Rb_tree_header::_Rb_tree_header(v312);
  lpuexcpt = (struct _Unwind_Exception *)a1[3];
  v249 = (WXML::DOMLib::Parser *)(a1 + 1);
  while ( lpuexcpt != v249 )
  {
    v258 = WXML::Compiler::ParseSource(
             v249,
             (int *)lpuexcpt + 4,
             (char **)lpuexcpt + 10,
             a12,
             a10,
             a22,
             a1,
             a2,
             &v304,  // map<string, ?>
             &v309,
             &v311,
             (a11 & 4) != 0,
             (a11 & 0x20) != 0);
    // 源码解析失败，LABEL_187 -> return v258
    if ( v258 )
      goto LABEL_187;
    lpuexcpt = (struct _Unwind_Exception *)std::_Rb_tree_increment((int)lpuexcpt);
  }
  v223 = operator new(0xD0u);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream((int)v223);
  zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>::shared_ptr(&jj, (int)v223);
  std::string::basic_string((void **)&v328, "__COMMON__");
  v22 = (volatile signed __int32 **)std::map<std::string,zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>>::operator[](
                                      &v301,
                                      &v328);
  // v22 = v301["__COMMON__"]
  *v22 = (volatile signed __int32 *)jj;
  // v301["__COMMON__"] = jj
  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::operator=(v22 + 1, v326);
  std::string::_M_dispose((void **)&v328);
  std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v326);
  jj = 0;
  v326 = 0;
  v327 = 0;
  std::string::basic_string((void **)&v328, "__COMMON__");
  v23 = std::map<std::string,std::vector<std::string>>::operator[](&v307, &v328);
  // v23 = v307["__COMMON__"]
  std::vector<std::string>::operator=(v23, &jj);
  // v307["__COMMON__"] = jj
  std::string::_M_dispose((void **)&v328);
  std::vector<std::string>::~vector((void ***)&jj, v24);
  std::string::basic_string((void **)&v328, "__COMMON__");
  v226 = *std::map<std::string,zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>>::operator[](
            &v301,
            &v328);
  // v226 = v301["__COMMON__"]
  std::string::_M_dispose((void **)&v328);
  v237 = (WXML::EXPRLib::Parser *)a7[1];
  for ( i = *a7; (WXML::EXPRLib::Parser *)i != v237; i += 24 )
  {
    v222 = operator new(0xD0u);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream((int)v222);
    zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>::shared_ptr(
      &v328,
      (int)v222);
    lpuexcpta = (struct _Unwind_Exception *)std::_Rb_tree<std::string,std::pair<std::string const,zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>>,std::_Select1st<std::pair<std::string const,zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>>>>::lower_bound(
                                              &v301,
                                              i);
    if ( lpuexcpta == (struct _Unwind_Exception *)v302 || (unsigned __int8)std::operator<<char>(i, (int)lpuexcpta + 16) )
    {
      Block = operator new(0x30u);
      std::string::basic_string((char *)Block + 16, i);
      Block[10] = 0;
      Block[11] = 0;
      lpuexcpta = (struct _Unwind_Exception *)std::_Rb_tree<std::string,std::pair<std::string const,zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>>,std::_Select1st<std::pair<std::string const,zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>>>>::_M_get_insert_hint_unique_pos(
                                                &v301,
                                                lpuexcpta,
                                                (int)(Block + 4));
      if ( v25 )
      {
        lpuexcpta = (struct _Unwind_Exception *)std::_Rb_tree<std::string,std::pair<std::string const,zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>>,std::_Select1st<std::pair<std::string const,zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>>>>::_M_insert_node(
                                                  &v301,
                                                  (int)lpuexcpta,
                                                  v25,
                                                  Block);
      }
      else
      {
        std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count((volatile signed __int32 **)Block + 11);
        std::string::_M_dispose((void **)Block + 4);
        operator delete(Block);
      }
    }
    *((_DWORD *)lpuexcpta + 10) = v328;
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::operator=((volatile signed __int32 **)lpuexcpta + 11, v329);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v329);
    std::operator+<char>((int)&jj, "./", i);
    v26 = std::string::append(&jj, ".wxml");
    std::string::basic_string(&v328, v26);
    j = 0;
    v323 = 0;
    v324 = 0;
    j = std::_Vector_base<std::string>::_M_allocate(1u);
    lpuexcpto = (struct _Unwind_Exception *)((char *)j + 24);
    v324 = (int)j + 24;
    std::string::basic_string((char *)j, (int)&v328);
    v323 = lpuexcpto;
    v27 = std::map<std::string,std::vector<std::string>>::operator[](&v307, i);
    std::vector<std::string>::operator=(v27, (int *)&j);
    std::vector<std::string>::~vector((void ***)&j, v28);
    std::string::_M_dispose((void **)&v328);
    std::string::_M_dispose((void **)&jj);
  }
  v238 = (WXML::EXPRLib::Parser *)a7[1];
  lpuexcptb = (struct _Unwind_Exception *)*a7;
  std::_Rb_tree_header::_Rb_tree_header(v314);
  while ( v238 != lpuexcptb )
  {
    insert_hint_unique_pos = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_get_insert_hint_unique_pos(
                               &v313,
                               v314,
                               (int)lpuexcptb);
    v275 = v30;
    if ( v30 )
    {
      v259 = v30 == v314 || insert_hint_unique_pos != 0;
      if ( !v259 )
        v259 = std::operator<<char>((int)lpuexcptb, (int)(v30 + 4));
      v221 = (char *)operator new(0x28u);
      std::string::basic_string(v221 + 16, (int)lpuexcptb);
      std::_Rb_tree_insert_and_rebalance(v259, v221, v275, v314);
      ++v315;
    }
    lpuexcptb = (struct _Unwind_Exception *)((char *)lpuexcptb + 24);
  }
  for ( j = v306;
        j != v305;
        std::_Rb_tree_iterator<std::pair<std::string const,zcc::shared_ptr<WXML::DOMLib::WXMLDom>>>::operator++((int *)&j) )
  {
    v260 = (char *)j + 16;
    std::string::substr(&jj, (_DWORD *)j + 4, 2u, *((_DWORD *)j + 5) - 7);
    lpuexcptc = (struct _Unwind_Exception *)v314[1];
    v276 = (struct _Unwind_Exception *)v314;
    while ( lpuexcptc )
    {
      v31 = (unsigned __int8)std::operator<<char>((int)lpuexcptc + 16, (int)&jj) == 0;
      v32 = v276;
      v33 = (struct _Unwind_Exception *)*((_DWORD *)lpuexcptc + 3);
      if ( v31 )
      {
        v33 = (struct _Unwind_Exception *)*((_DWORD *)lpuexcptc + 2);
        if ( v31 )
          v32 = lpuexcptc;
      }
      lpuexcptc = v33;
      v276 = v32;
    }
    if ( v276 == (struct _Unwind_Exception *)v314 || (unsigned __int8)std::operator<<char>((int)&jj, (int)v276 + 16) )
    {
      std::string::basic_string((void **)&v328, "__COMMON__");
      v34 = std::map<std::string,std::vector<std::string>>::operator[](&v307, &v328);
      std::vector<std::string>::push_back((int)v34, (int)v260);
      std::string::_M_dispose((void **)&v328);
    }
    std::string::_M_dispose((void **)&jj);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream((int)&v328);
  std::operator<<<std::char_traits<char>>(
    (std::ostream::sentry *)v330,
    "WXML::Compiler::CompileLazy: file name to paths:\n");
  std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v330, "  all files: [ ");
  for ( k = a1[3]; ; k = std::_Rb_tree_increment((int)lpuexcptd) )
  {
    lpuexcptd = (struct _Unwind_Exception *)k;
    if ( (WXML::DOMLib::Parser *)k == v249 )
      break;
    v36 = std::operator<<<char>((std::ostream::sentry *)v330, (int *)(k + 16));
    std::operator<<<std::char_traits<char>>(v36, " ");
  }
  std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v330, "];\n");
  for ( m = (int *)v308[2]; ; m = (int *)std::_Rb_tree_increment((int)v277) )
  {
    v277 = m;
    if ( m == v308 )
      break;
    v38 = std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v330, "  ");
    v39 = std::operator<<<char>(v38, v277 + 4);
    std::operator<<<std::char_traits<char>>(v39, ": [ ");
    v239 = (WXML::EXPRLib::Parser *)v277[11];
    v250 = (int *)v277[10];
    while ( 1 )
    {
      v234 = (int)v250;
      if ( v239 == (WXML::EXPRLib::Parser *)v250 )
        break;
      v40 = std::operator<<<char>((std::ostream::sentry *)v330, v250);
      std::operator<<<std::char_traits<char>>(v40, " ");
      v261 = (struct _Unwind_Exception *)v305[1];
      lpuexcpte = (struct _Unwind_Exception *)v305;
      while ( v261 )
      {
        v41 = (unsigned __int8)std::operator<<char>((int)v261 + 16, (int)v250) == 0;
        v42 = lpuexcpte;
        v43 = (struct _Unwind_Exception *)*((_DWORD *)v261 + 3);
        if ( v41 )
        {
          v43 = (struct _Unwind_Exception *)*((_DWORD *)v261 + 2);
          if ( v41 )
            v42 = v261;
        }
        v261 = v43;
        lpuexcpte = v42;
      }
      if ( lpuexcpte != (struct _Unwind_Exception *)v305 )
      {
        v31 = (unsigned __int8)std::operator<<char>((int)v250, (int)lpuexcpte + 16) == 0;
        v44 = (struct _Unwind_Exception *)v305;
        if ( v31 )
          v44 = lpuexcpte;
        lpuexcpte = v44;
      }
      v250 += 6;
      if ( lpuexcpte == (struct _Unwind_Exception *)v305 )
      {
        std::operator+<char>((int)&jj, "WXML file not found: ", v234);
        std::string::operator=((unsigned __int8 **)a2, (int)&jj);
        std::string::_M_dispose((void **)&jj);
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream((int)&v328);
        v258 = (struct _Unwind_Exception *)-1152;
        goto LABEL_186;
      }
    }
    std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v330, "];\n");
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream((int)&v328);
  for ( j = v306;
        ;
        std::_Rb_tree_iterator<std::pair<std::string const,zcc::shared_ptr<WXML::DOMLib::WXMLDom>>>::operator++((int *)&j) )
  {
    lpuexcptf = (struct _Unwind_Exception *)j;
    if ( j == v305 )
      break;
    std::_Rb_tree_header::_Rb_tree_header(&v329);
    v262 = (char *)lpuexcptf + 16;
    WXML::DOMLib::recurseDependencies((int *)lpuexcptf + 10, (int *)lpuexcptf + 4, &v328);
    lpuexcptg = (struct _Unwind_Exception *)v332;
    if ( v332 > 0x5555555 )
      std::__throw_length_error((std::length_error *)"cannot create std::vector larger than max_size()");
    jj = 0;
    v326 = 0;
    v327 = 0;
    v45 = std::_Vector_base<std::string>::_M_allocate(v332);
    v278 = (int)v45;
    jj = (int)v45;
    v46 = &v45[6 * (_DWORD)lpuexcptg];
    v327 = v46;
    while ( lpuexcptg )
    {
      v47 = (char *)(v45 + 2);
      v45[1] = 0;
      v45 += 6;
      *(v45 - 6) = v47;
      *((_BYTE *)v45 - 16) = 0;
      lpuexcptg = (struct _Unwind_Exception *)((char *)lpuexcptg - 1);
    }
    v326 = v46;
    for ( n = v331; ; n = (volatile signed __int32 **)std::_Rb_tree_increment((int)lpuexcpth) )
    {
      lpuexcpth = (struct _Unwind_Exception *)n;
      if ( n == &v329 )
        break;
      std::string::_M_assign(v278, (int)(n + 4));
      v278 += 24;
    }
    lpuexcpti = std::map<std::string,std::vector<std::string>>::operator[](a5, (int)v262);
    if ( lpuexcpti != (char *)&jj )
    {
      v240 = (WXML::EXPRLib::Parser *)v326;
      v263 = (char *)jj;
      v279 = *(void ***)lpuexcpti;
      v251 = (std::ostream::sentry *)((char *)v326 - jj);
      v49 = *((_DWORD *)lpuexcpti + 2) - *(_DWORD *)lpuexcpti;
      v235 = -1431655765 * (((int)v326 - jj) >> 3);
      if ( v49 >= (unsigned int)v326 - jj )
      {
        v241 = (WXML::EXPRLib::Parser *)*((_DWORD *)lpuexcpti + 1);
        if ( (unsigned int)v251 > v241 - (WXML::EXPRLib::Parser *)v279 )
        {
          for ( ii = -1431655765 * ((v241 - (WXML::EXPRLib::Parser *)v279) >> 3); ii > 0; --ii )
          {
            std::string::_M_assign((int)v279, (int)v263);
            v263 += 24;
            v279 += 6;
          }
          v264 = v326;
          v281 = jj + *((_DWORD *)lpuexcpti + 1) - *(_DWORD *)lpuexcpti;
          v219 = (char *)*((_DWORD *)lpuexcpti + 1);
          while ( v264 != (volatile signed __int32 *)v281 )
          {
            std::string::basic_string(v219, v281);
            v281 += 24;
            v219 += 24;
          }
        }
        else
        {
          while ( v235 > 0 )
          {
            std::string::_M_assign((int)v279, (int)v263);
            v263 += 24;
            v279 += 6;
            --v235;
          }
          while ( v241 != (WXML::EXPRLib::Parser *)v279 )
          {
            std::string::_M_dispose(v279);
            v279 += 6;
          }
        }
      }
      else
      {
        v236 = (char *)std::_Vector_base<std::string>::_M_allocate(-1431655765 * (((int)v326 - jj) >> 3));
        v280 = (int)v263;
        v220 = v236;
        while ( v240 != (WXML::EXPRLib::Parser *)v280 )
        {
          std::string::basic_string(v220, v280);
          v220 += 24;
          v280 += 24;
        }
        std::_Destroy_aux<false>::__destroy<std::string *>(v50, *(void ***)lpuexcpti, *((void ***)lpuexcpti + 1));
        if ( *(_DWORD *)lpuexcpti )
          operator delete(*(void **)lpuexcpti);
        *(_DWORD *)lpuexcpti = v236;
        *((_DWORD *)lpuexcpti + 2) = (char *)v251 + (_DWORD)v236;
      }
      *((_DWORD *)lpuexcpti + 1) = (char *)v251 + *(_DWORD *)lpuexcpti;
    }
    std::vector<std::string>::~vector((void ***)&jj, v49);
    std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::~_Rb_tree((int)&v328);
  }
  std::_Rb_tree_header::_Rb_tree_header(v317);
  for ( jj = (int)v306;
        ;
        std::_Rb_tree_iterator<std::pair<std::string const,zcc::shared_ptr<WXML::DOMLib::WXMLDom>>>::operator++(&jj) )
  {
    lpuexcptj = (struct _Unwind_Exception *)jj;
    if ( (_DWORD *)jj == v305 )
      break;
    WXML::DOMLib::WXMLDom::RewriteTree(*(_DWORD *)(jj + 40));
    v282 = *((_DWORD *)lpuexcptj + 10);
    std::string::basic_string((void **)&v328, (char *)off_550B3F);
    v51 = std::map<std::string,std::vector<std::string>>::operator[](a6, &v328);
    WXML::DOMLib::WXMLDom::MarkIfHasDescendant(v282, v51);
    std::string::_M_dispose((void **)&v328);
    if ( a9 )
    {
      lpuexcptp = (struct _Unwind_Exception *)*((_DWORD *)lpuexcptj + 10);
      std::string::basic_string((void **)&v328, (char *)off_550B3F);
      v52 = std::map<std::string,std::vector<std::string>>::operator[](a6, &v328);
      WXML::DOMLib::WXMLDom::CutDomsForCustomComponent(lpuexcptp, v52);
      std::string::_M_dispose((void **)&v328);
    }
  }
  lpuexcptk = (struct _Unwind_Exception *)(v226 + 8);
  if ( a9 )
    std::string::basic_string((void **)&jj, "global");
  else
    std::string::basic_string((void **)&jj, "__globalThis");
  WXML::Compiler::GetVersionInfo((int)&v328, &jj);
  v53 = std::operator<<<char>(lpuexcptk, &v328);
  std::ostream::operator<<(v53, (int (__cdecl *)(void *))std::endl<char,std::char_traits<char>>);
  std::string::_M_dispose((void **)&v328);
  std::string::_M_dispose((void **)&jj);
  WXML::NameAllocator::NameAllocator(&v328, a19, a20);
  v54 = std::operator<<<std::char_traits<char>>(lpuexcptk, "var $gwxc");
  std::operator<<<std::char_traits<char>>(v54, a12);
  v55 = std::operator<<<std::char_traits<char>>(lpuexcptk, "var $gaic={}");
  std::operator<<<std::char_traits<char>>(v55, a12);
  if ( !a9 )
    std::operator<<<std::char_traits<char>>(
      lpuexcptk,
      "var outerGlobal=typeof __globalThis==='undefined'?window:__globalThis;");
  v224 = 0;
  v233 = v303;
  v209 = (a11 & 2) != 0;
  while ( v233 != v302 )
  {
    v243 = (WXML::EXPRLib::Parser *)v233[10];
    v248 = (int)(v233 + 4);
    v225 = std::operator==<char>((int)(v233 + 4), "__COMMON__");
    if ( v225 )
    {
      std::string::basic_string((char *)v318, a10);
    }
    else
    {
      std::to_string((std::__cxx11 *)&jj, v224);
      std::operator+<char>((char *)&j, a10, "_XC_");
      std::operator+<char>(v318, &j, (unsigned int *)&jj);
      std::string::_M_dispose(&j);
      std::string::_M_dispose((void **)&jj);
      ++v224;
    }
    v56 = std::map<std::string,std::string>::operator[](a4, v248);
    std::string::_M_assign((int)v56, (int)v318);
    lpuexcptl = (WXML::EXPRLib::Parser *)((char *)v243 + 8);
    if ( (a11 & 2) != 0 )
    {
      v57 = std::operator<<<std::char_traits<char>>((WXML::EXPRLib::Parser *)((char *)v243 + 8), "var cs = cs || [];");
      std::operator<<<std::char_traits<char>>(v57, a12);
    }
    v58 = std::operator<<<char>(lpuexcptl, v318);
    v59 = std::operator<<<std::char_traits<char>>(
            v58,
            "=function(_,_v,_n,_p,_s,_wp,_wl,$gwn,$gwl,$gwh,wh,$gstack,$gwrt,gra,grb,TestTest,wfor,_ca,_da,_r,_rz,_o,_oz,"
            "_1,_1z,_2,_2z,_m,_mz,nv_getDate,nv_getRegExp,nv_console,nv_parseInt,nv_parseFloat,nv_isNaN,nv_isFinite,nv_de"
            "codeURI,nv_decodeURIComponent,nv_encodeURI,nv_encodeURIComponent,$gdc,nv_JSON,_af,_gv,_ai,_grp,_gd,_gapi,$ix"
            "c,_ic,_w,_ev,_tsd){");
    v60 = std::operator<<<std::char_traits<char>>(v59, "return function(path,global){");
    std::operator<<<std::char_traits<char>>(v60, a12);
    std::operator<<<std::char_traits<char>>(
      lpuexcptl,
      "if(typeof global==='undefined'){if (typeof __GWX_GLOBAL__==='undefined')global={};else global=__GWX_GLOBAL__;}");
    std::operator<<<std::char_traits<char>>(lpuexcptl, "if(typeof __WXML_GLOBAL__ === 'undefined') {");
    v61 = std::operator<<<std::char_traits<char>>(lpuexcptl, "__WXML_GLOBAL__={};");
    std::operator<<<std::char_traits<char>>(v61, a12);
    if ( (a11 & 0x80) != 0 )
    {
      std::string::basic_string((void **)&jj, "life_cycle_callback_content");
      v252 = (std::ostream::sentry *)std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::find(
                                       a8,
                                       (int)&jj);
      std::string::_M_dispose((void **)&jj);
      if ( a8 + 1 != (_DWORD *)v252 )
      {
        std::string::basic_string((void **)&jj, "life_cycle_callback_content");
        v62 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::find(
                a8,
                (int)&jj);
        std::operator<<<char>(lpuexcptl, v62 + 10);
        std::string::_M_dispose((void **)&jj);
      }
    }
    std::operator<<<std::char_traits<char>>(lpuexcptl, "}");
    v63 = std::operator<<<std::char_traits<char>>(lpuexcptl, "__WXML_GLOBAL__.modules = __WXML_GLOBAL__.modules || {};");
    std::operator<<<std::char_traits<char>>(v63, a12);
    if ( v225 && !std::operator==<char>(a10, "$gwx") && (a11 & 0x60) == 0 )
    {
      v64 = std::operator<<<std::char_traits<char>>(lpuexcptl, "$gwx('init', global);");
      std::operator<<<std::char_traits<char>>(v64, a12);
    }
    v65 = std::operator<<<std::char_traits<char>>(lpuexcptl, "var ");
    v66 = std::operator<<<char>(v65, a16);
    v67 = std::operator<<<std::char_traits<char>>(v66, "={}");
    std::operator<<<std::char_traits<char>>(v67, a12);
    v68 = std::operator<<<std::char_traits<char>>(lpuexcptl, "if(typeof(global.entrys)==='undefined')global.entrys={};");
    v69 = std::operator<<<char>(v68, a16);
    v70 = std::operator<<<std::char_traits<char>>(v69, "=global.entrys;");
    std::operator<<<std::char_traits<char>>(v70, a12);
    v71 = std::operator<<<std::char_traits<char>>(lpuexcptl, "var ");
    v72 = std::operator<<<char>(v71, a17);
    v73 = std::operator<<<std::char_traits<char>>(v72, "={}");
    std::operator<<<std::char_traits<char>>(v73, a12);
    v74 = std::operator<<<std::char_traits<char>>(
            lpuexcptl,
            "if(typeof(global.defines)==='undefined')global.defines={};");
    v75 = std::operator<<<char>(v74, a17);
    v76 = std::operator<<<std::char_traits<char>>(v75, "=global.defines;");
    std::operator<<<std::char_traits<char>>(v76, a12);
    v77 = std::operator<<<std::char_traits<char>>(lpuexcptl, "var ");
    v78 = std::operator<<<char>(v77, a22);
    v79 = std::operator<<<std::char_traits<char>>(v78, "={}");
    std::operator<<<std::char_traits<char>>(v79, a12);
    v80 = std::operator<<<std::char_traits<char>>(
            lpuexcptl,
            "if(typeof(global.modules)==='undefined')global.modules={};");
    v81 = std::operator<<<char>(v80, a22);
    v82 = std::operator<<<std::char_traits<char>>(v81, "=global.modules || {};");
    std::operator<<<std::char_traits<char>>(v82, a12);
    v83 = std::operator<<<std::char_traits<char>>(lpuexcptl, "var ");
    v84 = std::operator<<<char>(v83, a18);
    v85 = std::operator<<<std::char_traits<char>>(v84, "={}");
    std::operator<<<std::char_traits<char>>(v85, a12);
    if ( (a11 & 2) != 0 )
    {
      v86 = std::operator<<<std::char_traits<char>>(lpuexcptl, "var cs = cs || [];");
      std::operator<<<std::char_traits<char>>(v86, a12);
    }
    v87 = std::operator<<<std::char_traits<char>>(
            lpuexcptl,
            "__WXML_GLOBAL__.ops_cached = __WXML_GLOBAL__.ops_cached || {}");
    std::operator<<<std::char_traits<char>>(v87, a12);
    v88 = std::operator<<<std::char_traits<char>>(lpuexcptl, "__WXML_GLOBAL__.ops_set = __WXML_GLOBAL__.ops_set || {};");
    std::operator<<<std::char_traits<char>>(v88, a12);
    v89 = std::operator<<<std::char_traits<char>>(
            lpuexcptl,
            "__WXML_GLOBAL__.ops_init = __WXML_GLOBAL__.ops_init || {};");
    std::operator<<<std::char_traits<char>>(v89, a12);
    v90 = std::operator<<<std::char_traits<char>>(lpuexcptl, "var z=__WXML_GLOBAL__.ops_set.");
    v91 = std::operator<<<char>(v90, v318);
    v92 = std::operator<<<std::char_traits<char>>(v91, " || [];");
    std::operator<<<std::char_traits<char>>(v92, a12);
    if ( (a11 & 4) != 0 )
    {
      v93 = std::operator<<<std::char_traits<char>>(
              lpuexcptl,
              "__WXML_GLOBAL__.debuginfo_set = __WXML_GLOBAL__.debuginfo_set || {};");
      std::operator<<<std::char_traits<char>>(v93, a12);
      v94 = std::operator<<<std::char_traits<char>>(lpuexcptl, "var debugInfo=__WXML_GLOBAL__.debuginfo_set.");
      v95 = std::operator<<<char>(v94, v318);
      v96 = std::operator<<<std::char_traits<char>>(v95, " || [];");
      std::operator<<<std::char_traits<char>>(v96, a12);
    }
    v97 = std::map<std::string,std::vector<std::string>>::operator[](&v307, v248);
    v253 = 0;
    v227 = *((_DWORD *)v97 + 1);
    for ( kk = *(int **)v97; kk != (int *)v227; kk += 6 )
    {
      v244 = std::map<std::string,zcc::shared_ptr<WXML::DOMLib::WXMLDom>>::operator[](&v304, (int)kk);
      std::_Rb_tree_header::_Rb_tree_header(v320);
      v253 = (std::ostream::sentry *)((char *)v253 + 1);
      v300[1] = 0;
      v300[0] = 0;
      std::to_string(v98, (unsigned int)v253);
      std::operator+<char>((char *)&j, (int)v318, "_");
      std::operator+<char>(v321, &j, (unsigned int *)&jj);
      std::string::_M_dispose(&j);
      std::string::_M_dispose((void **)&jj);
      std::operator+<char>((int)&j, "gz", (int)v321);
      v99 = std::operator<<<std::char_traits<char>>(lpuexcptl, "function ");
      v100 = std::operator<<<char>(v99, (int *)&j);
      v101 = std::operator<<<std::char_traits<char>>(v100, "(){");
      std::operator<<<std::char_traits<char>>(v101, a12);
      v102 = std::operator<<<std::char_traits<char>>(lpuexcptl, "if( __WXML_GLOBAL__.ops_cached.");
      v103 = std::operator<<<char>(v102, v321);
      std::operator<<<std::char_traits<char>>(v103, ")");
      v104 = std::operator<<<std::char_traits<char>>(lpuexcptl, "return __WXML_GLOBAL__.ops_cached.");
      v105 = std::operator<<<char>(v104, v321);
      std::operator<<<std::char_traits<char>>(v105, a12);
      v106 = std::operator<<<std::char_traits<char>>(lpuexcptl, "__WXML_GLOBAL__.ops_cached.");
      v107 = std::operator<<<char>(v106, v321);
      v108 = std::operator<<<std::char_traits<char>>(v107, "=[];");
      std::operator<<<std::char_traits<char>>(v108, a12);
      std::operator<<<std::char_traits<char>>(lpuexcptl, "(function(z){var a=11;");
      if ( (a11 & 4) != 0 )
        v109 = std::operator<<<std::char_traits<char>>(
                 lpuexcptl,
                 "function Z(ops,debugLine){z.push(['11182016',ops,debugLine])}");
      else
        v109 = std::operator<<<std::char_traits<char>>(lpuexcptl, "function Z(ops){z.push(ops)}");
      std::operator<<<std::char_traits<char>>(v109, a12);
      WXML::DOMLib::WXMLDom::RenderAllOpsAndRecord(
        *(_DWORD **)v244,
        kk,
        (unsigned int *)a2,
        v243,
        &v319,
        v300,
        (a11 & 4) != 0,
        (int)a8);
      v110 = std::operator<<<std::char_traits<char>>(lpuexcptl, "})(__WXML_GLOBAL__.ops_cached.");
      v111 = std::operator<<<char>(v110, v321);
      std::operator<<<std::char_traits<char>>(v111, ");");
      v112 = std::operator<<<std::char_traits<char>>(lpuexcptl, "return __WXML_GLOBAL__.ops_cached.");
      v113 = std::operator<<<char>(v112, v321);
      std::operator<<<std::char_traits<char>>(v113, a12);
      v114 = std::operator<<<std::char_traits<char>>(lpuexcptl, "}");
      std::operator<<<std::char_traits<char>>(v114, a12);
      std::string::basic_string((void **)&jj, "get_page_z_name");
      v115 = std::map<std::string,std::string>::operator[]((_DWORD *)(*(_DWORD *)v244 + 272), &jj);
      std::string::_M_assign((int)v115, (int)&j);
      std::string::_M_dispose((void **)&jj);
      std::string::_M_dispose(&j);
      std::string::_M_dispose((void **)v321);
      std::_Rb_tree<std::string,std::pair<std::string const,WXML::DOMLib::RVMOpCodePosition>,std::_Select1st<std::pair<std::string const,WXML::DOMLib::RVMOpCodePosition>>,std::less<std::string>,std::allocator<std::pair<std::string const,WXML::DOMLib::RVMOpCodePosition>>>::~_Rb_tree((int)&v319);
    }
    v116 = std::operator<<<std::char_traits<char>>(lpuexcptl, "__WXML_GLOBAL__.ops_set.");
    v117 = std::operator<<<char>(v116, v318);
    v118 = std::operator<<<std::char_traits<char>>(v117, "=z;");
    std::operator<<<std::char_traits<char>>(v118, a12);
    v119 = std::operator<<<std::char_traits<char>>(lpuexcptl, "__WXML_GLOBAL__.ops_init.");
    v120 = std::operator<<<char>(v119, v318);
    v121 = std::operator<<<std::char_traits<char>>(v120, "=true;");
    std::operator<<<std::char_traits<char>>(v121, a12);
    if ( (a11 & 4) != 0 )
    {
      v122 = std::operator<<<std::char_traits<char>>(lpuexcptl, "__WXML_GLOBAL__.debuginfo_set.");
      v123 = std::operator<<<char>(v122, v318);
      v124 = std::operator<<<std::char_traits<char>>(v123, "=debugInfo;");
      std::operator<<<std::char_traits<char>>(v124, a12);
    }
    if ( v225 )
    {
      std::operator<<<std::char_traits<char>>(lpuexcptl, "var nv_require=function(){var nnm={");
      for ( mm = (int *)v312[2]; ; mm = (int *)std::_Rb_tree_increment((int)v266) )
      {
        v266 = mm;
        if ( mm == v312 )
          break;
        v254 = std::operator<<<std::char_traits<char>>(lpuexcptl, 34);
        WXML::Rewrite::ToStringCode((int)&jj, v266 + 4);
        v126 = std::operator<<<char>(v254, &jj);
        v127 = std::operator<<<std::char_traits<char>>(v126, 34);
        std::operator<<<std::char_traits<char>>(v127, ":np_");
        v128 = (std::ostream::sentry *)std::ostream::operator<<(v266[10]);
        std::operator<<<std::char_traits<char>>(v128, ",");
        std::string::_M_dispose((void **)&jj);
      }
      std::operator<<<std::char_traits<char>>(lpuexcptl, "};var nom={};return function(n){");
      std::operator<<<std::char_traits<char>>(
        lpuexcptl,
        "if(n[0]==='p'&&n[1]==='_'&&f_[n.slice(2)])return f_[n.slice(2)];");
      std::operator<<<std::char_traits<char>>(lpuexcptl, "return function(){if(!nnm[n]) return undefined;");
      std::operator<<<std::char_traits<char>>(lpuexcptl, "try{if(!nom[n])nom[n]=nnm[n]();return nom[n];}");
      std::operator<<<std::char_traits<char>>(lpuexcptl, "catch(e){");
      std::operator<<<std::char_traits<char>>(lpuexcptl, "e.message=e.message.replace(/nv_/g,'');");
      std::operator<<<std::char_traits<char>>(lpuexcptl, "var tmp = e.stack.substring(0,e.stack.lastIndexOf(n));");
      std::operator<<<std::char_traits<char>>(lpuexcptl, "e.stack = tmp.substring(0,tmp.lastIndexOf('\\n'));");
      std::operator<<<std::char_traits<char>>(lpuexcptl, "e.stack = e.stack.replace(/\\snv_/g,' ');");
      std::operator<<<std::char_traits<char>>(lpuexcptl, "e.stack = $gstack(e.stack);");
      v129 = std::operator<<<std::char_traits<char>>(
               lpuexcptl,
               "e.stack += '\\n    at ' + n.substring(2);console.error(e);}");
      std::operator<<<std::char_traits<char>>(v129, a12);
      v130 = std::operator<<<std::char_traits<char>>(lpuexcptl, "}}}()");
      std::operator<<<std::char_traits<char>>(v130, a12);
      for ( nn = (int *)v310[2]; ; nn = (int *)std::_Rb_tree_increment((int)v267) )
      {
        v267 = nn;
        if ( nn == v310 )
          break;
        v132 = std::operator<<<char>(lpuexcptl, nn + 10);
        std::operator<<<std::char_traits<char>>(v132, a12);
      }
    }
    v268 = operator new(0x24u);
    std::_Rb_tree_header::_Rb_tree_header(v268 + 1);
    v268[6] = 0;
    v268[7] = 0;
    v268[8] = 0;
    zcc::shared_ptr<WXML::DOMLib::StrCache>::shared_ptr(v268);
    v133 = std::map<std::string,std::vector<std::string>>::operator[](&v307, v248);
    v245 = (WXML::NameAllocator *)*((_DWORD *)v133 + 1);
    for ( i1 = *(WXML::NameAllocator **)v133; ; i1 = (WXML::NameAllocator *)((char *)i1 + 24) )
    {
      v255 = (std::ostream::sentry *)v319;
      if ( i1 == v245 )
        break;
      std::string::basic_string((char *)&jj, (int)i1);
      WXML::DOMLib::StrCache::Insert(v255, (int)&jj);
      std::string::_M_dispose((void **)&jj);
      v134 = (volatile signed __int32 **)(*(_DWORD *)std::map<std::string,zcc::shared_ptr<WXML::DOMLib::WXMLDom>>::operator[](
                                                       &v304,
                                                       (int)i1)
                                        + 252);
      *(v134 - 1) = (volatile signed __int32 *)v319;
      std::__shared_count<(__gnu_cxx::_Lock_policy)2>::operator=(v134, v320[0]);
      v135 = std::map<std::string,zcc::shared_ptr<WXML::DOMLib::WXMLDom>>::operator[](&v304, (int)i1);
      WXML::DOMLib::WXMLDom::RecordAllPath(*(_DWORD **)v135);
    }
    WXML::DOMLib::StrCache::RenderPathDefine((_DWORD *)v319, (int)v243);
    v136 = std::map<std::string,std::vector<std::string>>::operator[](&v307, v248);
    v228 = 0;
    v208 = (WXML::NameAllocator *)*((_DWORD *)v136 + 1);
    for ( i2 = *(WXML::NameAllocator **)v136; v208 != i2; i2 = (WXML::NameAllocator *)((char *)i2 + 24) )
    {
      v256 = std::map<std::string,zcc::shared_ptr<WXML::DOMLib::WXMLDom>>::operator[](&v304, (int)i2);
      v137 = std::operator<<<char>(lpuexcptl, a17);
      std::operator<<<std::char_traits<char>>(v137, (char *)off_55101C);
      v270 = (_DWORD *)v319;
      std::string::basic_string((char *)&jj, (int)i2);
      StrID = WXML::DOMLib::StrCache::GetStrID(v270, (int)&jj);
      std::ostream::operator<<(StrID);
      std::string::_M_dispose((void **)&jj);
      v139 = std::operator<<<std::char_traits<char>>(lpuexcptl, "]]={}");
      std::operator<<<std::char_traits<char>>(v139, a12);
      std::string::basic_string((void **)&jj, "get_page_z_name");
      v140 = std::map<std::string,std::string>::operator[]((_DWORD *)(*(_DWORD *)v256 + 272), &jj);
      v258 = WXML::Compiler::RenderDefine(
               (unsigned int **)v256,
               i2,
               &v316,
               (int)a2,
               (int)v243,
               (int)a8,
               v209,
               a11,
               a12,
               a13,
               a14,
               a15,
               a10,
               a16,
               a17,
               a18,
               a19,
               a20,
               a21,
               v140);
      std::string::_M_dispose((void **)&jj);
      if ( v258 )
        goto LABEL_180;
      v207 = v228 + 1;
      std::to_string((std::__cxx11 *)&jj, v228);
      v141 = std::string::insert((unsigned int *)&jj, 0, "m");
      std::string::basic_string(v321, v141);
      std::string::_M_dispose((void **)&jj);
      v229 = *(unsigned int **)v256;
      std::string::basic_string(&j, "get_page_z_name");
      v271 = std::map<std::string,std::string>::operator[]((_DWORD *)(*(_DWORD *)v256 + 272), &j);
      std::string::basic_string((void **)&jj, "r");
      v258 = (struct _Unwind_Exception *)WXML::DOMLib::WXMLDom::RenderMeAsFunction(
                                           v229,
                                           (int *)i2,
                                           a16,
                                           (int)a2,
                                           v321,
                                           (int)v243,
                                           &v328,
                                           a13,
                                           a14,
                                           a15,
                                           &jj,
                                           a17,
                                           a12,
                                           a18,
                                           0,
                                           v209,
                                           a11,
                                           v271);
      std::string::_M_dispose((void **)&jj);
      std::string::_M_dispose(&j);
      if ( v258 )
      {
        std::string::_M_dispose((void **)v321);
LABEL_180:
        std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v320);
        std::string::_M_dispose((void **)v318);
        goto LABEL_185;
      }
      v142 = std::operator<<<char>(lpuexcptl, a16);
      std::operator<<<std::char_traits<char>>(v142, (char *)off_55101C);
      v230 = (_DWORD *)v319;
      std::string::basic_string((char *)&jj, (int)i2);
      v143 = WXML::DOMLib::StrCache::GetStrID(v230, (int)&jj);
      std::ostream::operator<<(v143);
      std::string::_M_dispose((void **)&jj);
      v144 = std::operator<<<std::char_traits<char>>(lpuexcptl, "]]={f:");
      v145 = std::operator<<<char>(v144, v321);
      std::operator<<<std::char_traits<char>>(v145, ",j:[],i:[],ti:[");
      v231 = 0;
      v215 = 0;
      while ( 1 )
      {
        v146 = *(_DWORD *)(*(_DWORD *)v256 + 72);
        if ( (*(_DWORD *)(*(_DWORD *)v256 + 76) - v146) >> 3 <= v231 )
          break;
        if ( std::operator==<char>(*(_DWORD *)(v146 + 8 * v231), "import") )
        {
          v210 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v256 + 72) + 8 * v231);
          v205 = (_DWORD *)(v210 + 52);
          std::string::basic_string((void **)&jj, (char *)off_547B7D);
          v211 = std::_Rb_tree<std::string,std::pair<std::string const,WXML::DOMLib::Token>,std::_Select1st<std::pair<std::string const,WXML::DOMLib::Token>>,std::less<std::string>,std::allocator<std::pair<std::string const,WXML::DOMLib::Token>>>::find(
                   (_DWORD *)(v210 + 48),
                   (int)&jj);
          std::string::_M_dispose((void **)&jj);
          if ( v211 != v205 )
          {
            if ( v215 )
              std::operator<<<std::char_traits<char>>(lpuexcptl, ",");
            std::operator<<<std::char_traits<char>>(lpuexcptl, "x[");
            v206 = (_DWORD *)v319;
            v212 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v256 + 72) + 8 * v231);
            std::string::basic_string(&j, (char *)off_547B7D);
            v147 = std::_Rb_tree<std::string,std::pair<std::string const,WXML::DOMLib::Token>,std::_Select1st<std::pair<std::string const,WXML::DOMLib::Token>>,std::less<std::string>,std::allocator<std::pair<std::string const,WXML::DOMLib::Token>>>::find(
                     (_DWORD *)(v212 + 48),
                     (int)&j);
            v148 = WXML::DOMLib::Token::ToAttrContent[abi:cxx11]((int)(v147 + 10));
            std::string::basic_string((char *)&jj, v148);
            v149 = WXML::DOMLib::StrCache::GetStrID(v206, (int)&jj);
            std::ostream::operator<<(v149);
            std::string::_M_dispose((void **)&jj);
            std::string::_M_dispose(&j);
            std::operator<<<std::char_traits<char>>(lpuexcptl, "]");
            ++v215;
          }
        }
        ++v231;
      }
      std::operator<<<std::char_traits<char>>(lpuexcptl, "],ic:[");
      for ( i3 = 0; ; ++i3 )
      {
        v150 = *(_DWORD *)(*(_DWORD *)v256 + 72);
        if ( (*(_DWORD *)(*(_DWORD *)v256 + 76) - v150) >> 3 <= i3 )
          break;
        if ( std::operator==<char>(*(_DWORD *)(v150 + 8 * i3), "include") )
        {
          v216 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v256 + 72) + 8 * i3);
          v213 = (_DWORD *)(v216 + 52);
          std::string::basic_string((void **)&jj, (char *)off_547B7D);
          v217 = std::_Rb_tree<std::string,std::pair<std::string const,WXML::DOMLib::Token>,std::_Select1st<std::pair<std::string const,WXML::DOMLib::Token>>,std::less<std::string>,std::allocator<std::pair<std::string const,WXML::DOMLib::Token>>>::find(
                   (_DWORD *)(v216 + 48),
                   (int)&jj);
          std::string::_M_dispose((void **)&jj);
          if ( v217 != v213 )
          {
            if ( v258 )
              std::operator<<<std::char_traits<char>>(lpuexcptl, ",");
            std::operator<<<std::char_traits<char>>(lpuexcptl, "x[");
            v214 = (_DWORD *)v319;
            v218 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v256 + 72) + 8 * i3);
            std::string::basic_string(&j, (char *)off_547B7D);
            v151 = std::_Rb_tree<std::string,std::pair<std::string const,WXML::DOMLib::Token>,std::_Select1st<std::pair<std::string const,WXML::DOMLib::Token>>,std::less<std::string>,std::allocator<std::pair<std::string const,WXML::DOMLib::Token>>>::find(
                     (_DWORD *)(v218 + 48),
                     (int)&j);
            v152 = WXML::DOMLib::Token::ToAttrContent[abi:cxx11]((int)(v151 + 10));
            std::string::basic_string((char *)&jj, v152);
            v153 = WXML::DOMLib::StrCache::GetStrID(v214, (int)&jj);
            std::ostream::operator<<(v153);
            std::string::_M_dispose((void **)&jj);
            std::string::_M_dispose(&j);
            std::operator<<<std::char_traits<char>>(lpuexcptl, "]");
            v258 = (struct _Unwind_Exception *)((char *)v258 + 1);
          }
        }
      }
      v154 = std::operator<<<std::char_traits<char>>(lpuexcptl, "]}");
      std::operator<<<std::char_traits<char>>(v154, a12);
      std::string::_M_dispose((void **)v321);
      v228 = v207;
    }
    v155 = std::operator<<<std::char_traits<char>>(lpuexcptl, "if(path&&");
    v156 = std::operator<<<char>(v155, a16);
    v157 = std::operator<<<std::char_traits<char>>(v156, "[path]){");
    std::operator<<<std::char_traits<char>>(v157, a12);
    if ( !a9 )
    {
      v158 = std::operator<<<std::char_traits<char>>(lpuexcptl, "outerGlobal.__wxml_comp_version__=0.02");
      std::operator<<<std::char_traits<char>>(v158, a12);
    }
    v159 = std::operator<<<std::char_traits<char>>(
             lpuexcptl,
             "return function(env,dd,global){$gwxc=0;var root={\"tag\":\"wx-page\"};root.children=[]");
    std::operator<<<std::char_traits<char>>(v159, a12);
    v160 = std::operator<<<std::char_traits<char>>(lpuexcptl, ";g=\"");
    v161 = std::operator<<<char>(v160, v318);
    std::operator<<<std::char_traits<char>>(v161, "\";");
    v162 = std::operator<<<std::char_traits<char>>(lpuexcptl, "var main=");
    v163 = std::operator<<<char>(v162, a16);
    v164 = std::operator<<<std::char_traits<char>>(v163, "[path].f");
    std::operator<<<std::char_traits<char>>(v164, a12);
    if ( (a11 & 2) != 0 )
    {
      v165 = std::operator<<<std::char_traits<char>>(lpuexcptl, "cs=[]");
      std::operator<<<std::char_traits<char>>(v165, a12);
    }
    if ( (a11 & 0x10) != 0 )
    {
      v166 = std::operator<<<std::char_traits<char>>(lpuexcptl, "console.log(path+': benv:\\n'+JSON.stringify(env))");
      std::operator<<<std::char_traits<char>>(v166, a12);
    }
    std::operator<<<std::char_traits<char>>(lpuexcptl, "if (typeof global===\"undefined\")global={};");
    v167 = std::operator<<<std::char_traits<char>>(lpuexcptl, "global.f=$gdc(");
    v168 = std::operator<<<char>(v167, a22);
    v169 = std::operator<<<std::char_traits<char>>(v168, "[path],\"\",1);");
    std::operator<<<std::char_traits<char>>(v169, a12);
    if ( !a9 )
    {
      v170 = std::operator<<<std::char_traits<char>>(
               lpuexcptl,
               "if(typeof(outerGlobal.__webview_engine_version__)!='undefined'&&outerGlobal.__webview_engine_version__+1e"
               "-6>=0.02+1e-6&&outerGlobal.__mergeData__)");
      std::operator<<<std::char_traits<char>>(v170, a12);
      v171 = std::operator<<<std::char_traits<char>>(lpuexcptl, "{");
      std::operator<<<std::char_traits<char>>(v171, a12);
      v172 = std::operator<<<std::char_traits<char>>(lpuexcptl, "env=outerGlobal.__mergeData__(env,dd);");
      std::operator<<<std::char_traits<char>>(v172, a12);
      v173 = std::operator<<<std::char_traits<char>>(lpuexcptl, "}");
      std::operator<<<std::char_traits<char>>(v173, a12);
    }
    v174 = std::operator<<<std::char_traits<char>>(lpuexcptl, "try{");
    std::operator<<<std::char_traits<char>>(v174, a12);
    if ( (a11 & 0x10) != 0 )
    {
      v175 = std::operator<<<std::char_traits<char>>(
               lpuexcptl,
               "console.log(path+': aenv:\\n'+JSON.stringify(env)+', '+JSON.stringify(dd))");
      std::operator<<<std::char_traits<char>>(v175, a12);
    }
    if ( (a11 & 0x80) != 0 )
    {
      std::operator<<<std::char_traits<char>>(lpuexcptl, "if(__WXML_GLOBAL__.before_calculate)");
      v176 = std::operator<<<std::char_traits<char>>(lpuexcptl, "__WXML_GLOBAL__.before_calculate(path, env)");
      std::operator<<<std::char_traits<char>>(v176, a12);
    }
    v177 = std::operator<<<std::char_traits<char>>(lpuexcptl, "main(env,{},root,global);");
    std::operator<<<std::char_traits<char>>(v177, a12);
    if ( (a11 & 0x80) != 0 )
    {
      std::operator<<<std::char_traits<char>>(lpuexcptl, "if(__WXML_GLOBAL__.after_calculate)");
      v178 = std::operator<<<std::char_traits<char>>(lpuexcptl, "__WXML_GLOBAL__.after_calculate(path, root)");
      std::operator<<<std::char_traits<char>>(v178, a12);
    }
    v179 = std::operator<<<std::char_traits<char>>(lpuexcptl, "_tsd(root)");
    std::operator<<<std::char_traits<char>>(v179, a12);
    if ( !a9 )
    {
      v180 = std::operator<<<std::char_traits<char>>(
               lpuexcptl,
               "if(typeof(outerGlobal.__webview_engine_version__)=='undefined'|| outerGlobal.__webview_engine_version__+1"
               "e-6<0.01+1e-6){return _ev(root);}");
      std::operator<<<std::char_traits<char>>(v180, a12);
    }
    v181 = std::operator<<<std::char_traits<char>>(lpuexcptl, "}catch(err){");
    std::operator<<<std::char_traits<char>>(v181, a12);
    if ( (a11 & 2) != 0 )
    {
      v182 = std::operator<<<std::char_traits<char>>(lpuexcptl, "console.log(cs, env);");
      std::operator<<<std::char_traits<char>>(v182, a12);
    }
    v183 = std::operator<<<std::char_traits<char>>(lpuexcptl, "console.log(err)");
    std::operator<<<std::char_traits<char>>(v183, a12);
    if ( (a11 & 2) != 0 )
    {
      v184 = std::operator<<<std::char_traits<char>>(lpuexcptl, "throw err");
      std::operator<<<std::char_traits<char>>(v184, a12);
    }
    v185 = std::operator<<<std::char_traits<char>>(lpuexcptl, "}");
    std::operator<<<std::char_traits<char>>(v185, a12);
    if ( (a11 & 0x10) != 0 )
    {
      v186 = std::operator<<<std::char_traits<char>>(lpuexcptl, "console.log(path+': resp:\\n'+JSON.stringify(root))");
      std::operator<<<std::char_traits<char>>(v186, a12);
    }
    v187 = std::operator<<<std::char_traits<char>>(lpuexcptl, ";g=\"\";");
    std::operator<<<std::char_traits<char>>(v187, a12);
    v188 = std::operator<<<std::char_traits<char>>(lpuexcptl, "return root;");
    std::operator<<<std::char_traits<char>>(v188, a12);
    v189 = std::operator<<<std::char_traits<char>>(lpuexcptl, "}");
    std::operator<<<std::char_traits<char>>(v189, a12);
    v190 = std::operator<<<std::char_traits<char>>(lpuexcptl, "}");
    std::operator<<<std::char_traits<char>>(v190, a12);
    v191 = std::operator<<<std::char_traits<char>>(lpuexcptl, "}");
    std::operator<<<std::char_traits<char>>(v191, a12);
    std::operator<<<std::char_traits<char>>(
      lpuexcptl,
      "}(__g.a,__g.b,__g.c,__g.d,__g.e,__g.f,__g.g,__g.h,__g.i,__g.j,__g.k,__g.l,__g.m,__g.n,__g.o,__g.p,__g.q,__g.r,__g."
      "s,__g.t,__g.u,__g.v,__g.w,__g.x,__g.y,__g.z,__g.A,__g.B,__g.C,__g.D,__g.E,__g.F,__g.G,__g.H,__g.I,__g.J,__g.K,__g."
      "L,__g.M,__g.N,__g.O,__g.P,__g.Q,__g.R,__g.S,__g.T,__g.U,__g.V,__g.W,__g.X,__g.Y,__g.Z,__g.aa);");
    if ( (a11 & 8) != 0 )
    {
      v192 = std::map<std::string,std::vector<std::string>>::operator[](&v307, v248);
      v257 = (std::ostream::sentry *)*((_DWORD *)v192 + 1);
      for ( i4 = *(int **)v192; i4 != (int *)v257; i4 += 6 )
      {
        v193 = std::operator<<<std::char_traits<char>>(lpuexcptl, "//");
        v194 = std::operator<<<char>(v193, i4);
        v195 = std::operator<<<std::char_traits<char>>(v194, ":");
        std::operator<<<std::char_traits<char>>(v195, a12);
        v196 = std::map<std::string,zcc::shared_ptr<WXML::DOMLib::WXMLDom>>::operator[](&v304, (int)i4);
        WXML::DOMLib::WXMLDom::Print(*(_DWORD **)v196, 0, "//", (char *)v243);
      }
    }
    v197 = std::map<std::string,std::vector<std::string>>::operator[](&v307, v248);
    v273 = v225 || *((_DWORD *)v197 + 1) == *(_DWORD *)v197;
    lpuexcptm = std::operator<<<std::char_traits<char>>(lpuexcptl, "if(__vd_version_info__.delayedGwx||");
    v198 = "true";
    if ( !v273 )
      v198 = "false";
    std::string::basic_string((void **)&jj, v198);
    v199 = std::operator<<<char>(lpuexcptm, &jj);
    v200 = std::operator<<<std::char_traits<char>>(v199, ")");
    v201 = std::operator<<<char>(v200, v318);
    std::operator<<<std::char_traits<char>>(v201, "();");
    std::string::_M_dispose((void **)&jj);
    std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(v320);
    std::string::_M_dispose((void **)v318);
    v233 = (_DWORD *)std::_Rb_tree_increment((int)v233);
  }
  for ( i5 = (struct _Unwind_Exception *)v303; ; i5 = (struct _Unwind_Exception *)std::_Rb_tree_increment((int)lpuexcptn) )
  {
    lpuexcptn = i5;
    if ( i5 == (struct _Unwind_Exception *)v302 )
      break;
    std::stringbuf::str((int)&jj, *((_DWORD *)i5 + 10) + 12);
    v203 = std::map<std::string,std::string>::operator[](a3, (int)lpuexcptn + 16);
    std::string::operator=((unsigned __int8 **)v203, (int)&jj);
    std::string::_M_dispose((void **)&jj);
  }
  v258 = 0;
LABEL_185:
  WXML::NameAllocator::~NameAllocator((int)&v328);
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~_Rb_tree((int)&v316);
LABEL_186:
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::~_Rb_tree((int)&v313);
LABEL_187:
  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::~_Rb_tree((int)&v311);
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~_Rb_tree((int)&v309);
  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<std::string>>,std::_Select1st<std::pair<std::string const,std::vector<std::string>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<std::string>>>>::_M_erase(v308[1]);
  std::_Rb_tree<std::string,std::pair<std::string const,zcc::shared_ptr<WXML::DOMLib::WXMLDom>>,std::_Select1st<std::pair<std::string const,zcc::shared_ptr<WXML::DOMLib::WXMLDom>>>,std::less<std::string>,std::allocator<std::pair<std::string const,zcc::shared_ptr<WXML::DOMLib::WXMLDom>>>>::~_Rb_tree((int)&v304);
  std::_Rb_tree<std::string,std::pair<std::string const,zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>>,std::_Select1st<std::pair<std::string const,zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,zcc::shared_ptr<std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>>>>>::_M_erase(v302[1]);
  return v258;
}