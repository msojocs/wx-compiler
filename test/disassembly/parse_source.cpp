
//----- (00405522) --------------------------------------------------------
struct _Unwind_Exception *__usercall WXML::Compiler::ParseSource@<eax>(
        WXML::DOMLib::Parser *a1@<edi>,
        int *a2,   // 文件名
        char **a3,
        char a4,  // '\n'
        int a5, // gwxMark
        int *a6, // "f_"
        _DWORD *a7, // fileData
        int *a8, // 错误信息
        _DWORD *a9, // map<string, ?>
        _DWORD *a10,// ???
        _DWORD *a11,// ???
        int a12, // bool
        char a13) // bool
{
  char *v13; // eax
  std::ostream::sentry *v14; // eax
  std::ostream::sentry *v15; // eax
  std::ostream::sentry *v16; // eax
  std::ostream::sentry *v17; // eax
  std::ostream::sentry *v18; // eax
  std::ostream::sentry *v19; // eax
  std::ostream::sentry *v20; // eax
  std::ostream::sentry *v21; // eax
  std::ostream::sentry *v22; // eax
  std::ostream::sentry *v23; // eax
  std::ostream::sentry *v24; // eax
  std::ostream::sentry *v25; // eax
  std::ostream::sentry *v26; // eax
  std::ostream::sentry *v27; // eax
  std::ostream::sentry *v28; // eax
  std::ostream::sentry *v29; // eax
  std::ostream::sentry *v30; // eax
  std::ostream::sentry *v31; // eax
  void **v32; // ecx
  _DWORD *v33; // eax
  _DWORD *v34; // eax
  _DWORD *v35; // eax
  _DWORD *v36; // eax
  std::ostream::sentry *v37; // eax
  std::ostream::sentry *v38; // eax
  std::ostream::sentry *v39; // eax
  char *v40; // eax
  std::ostream::sentry *v41; // eax
  std::ostream::sentry *v42; // eax
  std::ostream::sentry *v43; // eax
  std::ostream::sentry *v44; // eax
  std::ostream::sentry *v45; // eax
  std::ostream::sentry *v46; // eax
  char *v47; // eax
  WXML::DOMLib::Parser *v49; // [esp+0h] [ebp-478h]
  unsigned int i; // [esp+2Ch] [ebp-44Ch]
  std::ostream::sentry *v51; // [esp+30h] [ebp-448h]
  bool v52; // [esp+30h] [ebp-448h]
  std::ostream::sentry *v53; // [esp+30h] [ebp-448h]
  std::ostream::sentry *v54; // [esp+30h] [ebp-448h]
  int v55; // [esp+34h] [ebp-444h]
  std::ostream::sentry *v56; // [esp+34h] [ebp-444h]
  std::ostream::sentry *v57; // [esp+34h] [ebp-444h]
  std::ostream::sentry *v58; // [esp+34h] [ebp-444h]
  std::ostream::sentry *v59; // [esp+34h] [ebp-444h]
  std::ostream::sentry *v60; // [esp+34h] [ebp-444h]
  std::ostream::sentry *v61; // [esp+34h] [ebp-444h]
  std::ostream::sentry *v62; // [esp+34h] [ebp-444h]
  bool lpuexcpta; // [esp+38h] [ebp-440h]
  struct _Unwind_Exception *lpuexcpt; // [esp+38h] [ebp-440h]
  int v65; // [esp+70h] [ebp-408h] BYREF
  int **v66; // [esp+74h] [ebp-404h] BYREF
  int **v67; // [esp+78h] [ebp-400h]
  int v68; // [esp+7Ch] [ebp-3FCh]
  char *v69; // [esp+80h] [ebp-3F8h] BYREF
  int v70; // [esp+84h] [ebp-3F4h]
  char v71; // [esp+88h] [ebp-3F0h] BYREF
  int v72[2]; // [esp+98h] [ebp-3E0h] BYREF
  char v73; // [esp+A0h] [ebp-3D8h] BYREF
  void *v74[2]; // [esp+B0h] [ebp-3C8h] BYREF
  char v75; // [esp+B8h] [ebp-3C0h] BYREF
  int v76; // [esp+C8h] [ebp-3B0h] BYREF
  int v77; // [esp+CCh] [ebp-3ACh]
  char v78; // [esp+D0h] [ebp-3A8h] BYREF
  void *v79[2]; // [esp+E0h] [ebp-398h] BYREF
  char v80; // [esp+E8h] [ebp-390h] BYREF
  int v81[2]; // [esp+F8h] [ebp-380h] BYREF
  char v82; // [esp+100h] [ebp-378h] BYREF
  void *v83[6]; // [esp+110h] [ebp-368h] BYREF
  int v84[2]; // [esp+128h] [ebp-350h] BYREF
  char v85; // [esp+130h] [ebp-348h] BYREF
  int v86[6]; // [esp+140h] [ebp-338h] BYREF
  int v87[6]; // [esp+158h] [ebp-320h] BYREF
  int v88[2]; // [esp+170h] [ebp-308h] BYREF
  char v89[4]; // [esp+178h] [ebp-300h] BYREF
  char v90[196]; // [esp+17Ch] [ebp-2FCh] BYREF
  int v91; // [esp+240h] [ebp-238h] BYREF
  volatile signed __int32 *v92; // [esp+244h] [ebp-234h] BYREF
  char v93[4]; // [esp+248h] [ebp-230h] BYREF
  char v94[196]; // [esp+24Ch] [ebp-22Ch] BYREF
  int v95[2]; // [esp+310h] [ebp-168h] BYREF
  char v96[4]; // [esp+318h] [ebp-160h] BYREF
  char v97[348]; // [esp+31Ch] [ebp-15Ch] BYREF

  // copy from param
      WXML::DOMLib::Parser *a1@<edi>,
        int *a2,   // 文件名
        char **a3,
        char a4,  // '\n'
        int a5, // gwxMark
        int *a6, // "f_"
        _DWORD *a7, // fileData
        int *a8, // 错误信息
        _DWORD *a9, // map<string, ?>
        _DWORD *a10,// ???
        _DWORD *a11,// ???
        int a12, // bool
        char a13; // bool
  // copy from param

    // 判断文件拓展名是否为 wxml
  std::string::substr(v95, a2, a2[1] - 5, 0xFFFFFFFF);
  lpuexcpta = std::operator==<char>((int)v95, ".wxml");
  std::string::_M_dispose((void **)v95);
  if ( lpuexcpta )
  {
    // wxml文件
    v66 = 0;
    v67 = 0;
    v68 = 0;
    WXML::DOMLib::Parser::Parser(v49);
    lpuexcpt = (struct _Unwind_Exception *)WXML::DOMLib::Parser::Parse(
            (int)v95, // 存放结果？
            a1,  // 源码？
            *a3,  // ？
            (int)a8,// 错误信息
            (int)a2, // 文件名
            &v66
            );
    // Parse返回值0，正常
    if ( !lpuexcpt )
    {
      WXML::DOMLib::Parser::GetParsed(&v91, (WXML::DOMLib::Parser *)v95);
      // v91 = v95.GetParsed()

      // a2 文件名？
      v13 = std::map<std::string,zcc::shared_ptr<WXML::DOMLib::WXMLDom>>::operator[](a9, (int)a2);
      // a9[a2]  a9[fileName]
      *(_DWORD *)v13 = v91;
      // a9[a2]  a9[fileName] = v91
      std::__shared_count<(__gnu_cxx::_Lock_policy)2>::operator=((volatile signed __int32 **)v13 + 1, v92);
      std::__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count(&v92);
      v70 = 0;
      v69 = &v71;
      v71 = 0;
      v72[0] = (int)&v73;
      v72[1] = 0;
      v73 = 0;
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream((int)v88);
      if ( v66 != v67 )
      {
        v51 = std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v89, "f_['");
        WXML::Rewrite::ToStringCode((int)&v91, a2);
        v14 = std::operator<<<char>(v51, &v91);
        v15 = std::operator<<<std::char_traits<char>>(v14, "']={};");
        std::operator<<<std::char_traits<char>>(v15, a4);
        std::string::_M_dispose((void **)&v91);
      }
      for ( i = 0; -1227133513 * (((char *)v67 - (char *)v66) >> 4) > i; ++i )
      {
        v74[1] = 0;
        v79[0] = &v80;
        v81[0] = (int)&v82;
        v74[0] = &v75;
        v76 = (int)&v78;
        v75 = 0;
        v77 = 0;
        v78 = 0;
        v79[1] = 0;
        v80 = 0;
        v81[1] = 0;
        v82 = 0;
        v55 = WXML::Compiler::DealWxsTag((int)a2, &v66[28 * i], v74, (int)&v76, (int)v79, &v65, a8);
        if ( v55 )
          goto LABEL_20;
          
//   // copy from param
//       WXML::DOMLib::Parser *a1@<edi>,
//         int *a2,   // 文件名
//         char **a3,
//         char a4,  // '\n'
//         int a5, // gwxMark
//         int *a6, // "f_"
//         _DWORD *a7, // fileData
//         int *a8, // 错误信息
//         _DWORD *a9, // map<string, ?>
//         _DWORD *a10,// ???
//         _DWORD *a11,// ???
//         int a12, // bool
//         char a13; // bool
//   // copy from param

        v16 = std::operator<<<char>((std::ostream::sentry *)v89, a6);
        v56 = std::operator<<<std::char_traits<char>>(v16, "['");
        WXML::Rewrite::ToStringCode((int)v87, a2);
        v17 = std::operator<<<char>(v56, v87);
        v57 = std::operator<<<std::char_traits<char>>(v17, "']['");
        WXML::Rewrite::ToStringCode((int)&v91, (int *)v74);
        v18 = std::operator<<<char>(v57, &v91);
        std::operator<<<std::char_traits<char>>(v18, "'] =");
        std::string::_M_dispose((void **)&v91);
        std::string::_M_dispose((void **)v87);
        if ( v77 )
        {
          MMBizWxaAppComm::PathCombine(a2, &v76, (unsigned int *)v81);
          if ( *(_BYTE *)v81[0] == '/' /*47*/ )
          {
            std::operator+<char>((int)v86, '.'/*46*/, (int)v81);
            std::string::operator=((unsigned __int8 **)v81, (int)v86);
            std::string::_M_dispose((void **)v86);
          }
          if ( a7 + 1 == std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::find(
                           a7,
                           (int)v81)
            && (std::operator==<char>(a5, "$gwx") || a13) )
          {
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream((int)&v91);
            v19 = std::operator<<<char>((std::ostream::sentry *)v93, a2);
            std::operator<<<std::char_traits<char>>(v19, ":");
            v20 = (std::ostream::sentry *)std::ostream::operator<<(v65);
            std::operator<<<std::char_traits<char>>(v20, ":");
            v21 = (std::ostream::sentry *)std::ostream::operator<<(v66[28 * i + 3]);
            v22 = std::operator<<<std::char_traits<char>>(v21, ":");
            v23 = std::operator<<<char>(v22, &v76);
            v24 = std::operator<<<std::char_traits<char>>(v23, " not found from ");
            // a2 fileName
            std::operator<<<char>(v24, a2);
            std::stringbuf::str((int)v87, (int)v94);
            // v87.str(v94)
            // a8 errorMessage
            std::string::operator=((unsigned __int8 **)a8, (int)v87);
            std::string::_M_dispose((void **)v87);
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream((int)&v91);
            v55 = 1;
LABEL_20:
            std::string::_M_dispose((void **)v81);
            std::string::_M_dispose(v79);
            std::string::_M_dispose((void **)&v76);
            std::string::_M_dispose(v74);
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream((int)v88);
            std::string::_M_dispose((void **)v72);
            std::string::_M_dispose((void **)&v69);
            lpuexcpt = (struct _Unwind_Exception *)v55;
            goto LABEL_24;
          }
          v58 = std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v89, "f_['");
          WXML::Rewrite::ToStringCode((int)&v91, v81);
          v25 = std::operator<<<char>(v58, &v91);
          std::operator<<<std::char_traits<char>>(v25, "'] || ");
          std::string::_M_dispose((void **)&v91);
          v59 = std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v89, "nv_require(\"");
          std::operator+<char>((int)v87, "p_", (int)v81);
          WXML::Rewrite::ToStringCode((int)&v91, v87);
          v26 = std::operator<<<char>(v59, &v91);
          v27 = std::operator<<<std::char_traits<char>>(v26, "\");");
          // lineEnd '\n'
          std::operator<<<std::char_traits<char>>(v27, a4);
          std::string::_M_dispose((void **)&v91);
          std::string::_M_dispose((void **)v87);
          v28 = std::operator<<<char>((std::ostream::sentry *)v89, a6);
          v60 = std::operator<<<std::char_traits<char>>(v28, "['");
          WXML::Rewrite::ToStringCode((int)v87, a2);
          v29 = std::operator<<<char>(v60, v87);
          v61 = std::operator<<<std::char_traits<char>>(v29, "']['");
          WXML::Rewrite::ToStringCode((int)&v91, (int *)v74);
          v30 = std::operator<<<char>(v61, &v91);
          v31 = std::operator<<<std::char_traits<char>>(v30, "']();");
          std::operator<<<std::char_traits<char>>(v31, a4);
          std::string::_M_dispose((void **)&v91);
          v32 = (void **)v87;
        }
        else
        {
            
//   // copy from param
//       WXML::DOMLib::Parser *a1@<edi>,
//         int *a2,   // 文件名
//         char **a3,
//         char a4,  // '\n'
//         int a5, // gwxMark
//         int *a6, // "f_"
//         _DWORD *a7, // fileData
//         int *a8, // 错误信息
//         _DWORD *a9, // map<string, ?>
//         _DWORD *a10,// ???
//         _DWORD *a11,// ???
//         int a12, // bool
//         char a13; // bool
//   // copy from param
          std::operator+<char>((int)v86, "m_", (int)a2);
          v33 = std::string::append(v86, ":");
          std::string::basic_string(v87, v33);
          v34 = std::string::append(v87, (int)v74);
          std::string::basic_string(&v91, v34);
          WXML::Compiler::GetFuncId(v83, a11, (int)&v91);
          std::string::_M_dispose((void **)&v91);
          std::string::_M_dispose((void **)v87);
          std::string::_M_dispose((void **)v86);
          v55 = night::compile_ns((int)a2, (int)v83, (int)v79, v65, (unsigned int *)v72, 0);
          if ( v55 )
          {
            std::string::_M_assign((int)a8, (int)v72);
            std::string::_M_dispose(v83);
            goto LABEL_20;
          }
          v62 = std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v89, "nv_require(\"");
          std::operator+<char>((int)v84, "m_", (int)a2);
          v35 = std::string::append(v84, ":");
          std::string::basic_string(v86, v35);
          v36 = std::string::append(v86, (int)v74);
          std::string::basic_string(v87, v36);
          WXML::Rewrite::ToStringCode((int)&v91, v87);
          v37 = std::operator<<<char>(v62, &v91);
          v38 = std::operator<<<std::char_traits<char>>(v37, "\");");
          std::operator<<<std::char_traits<char>>(v38, a4);
          std::string::_M_dispose((void **)&v91);
          std::string::_M_dispose((void **)v87);
          std::string::_M_dispose((void **)v86);
          std::string::_M_dispose((void **)v84);
          v39 = std::operator<<<char>((std::ostream::sentry *)v89, v72);
          std::operator<<<std::char_traits<char>>(v39, a4);
          v32 = v83;
        }
        std::string::_M_dispose(v32);
        std::string::_M_dispose((void **)v81);
        std::string::_M_dispose(v79);
        std::string::_M_dispose((void **)&v76);
        std::string::_M_dispose(v74);
      }
      std::stringbuf::str((int)&v91, (int)v90);
      // v90 = v91.str()
      std::string::operator=((unsigned __int8 **)&v69, (int)&v91);
      std::string::_M_dispose((void **)&v91);
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream((int)v88);
      std::string::_M_dispose((void **)v72);
      if ( v70 )
      {
        v40 = std::map<std::string,std::string>::operator[](a10, (int)a2);
        std::string::_M_assign((int)v40, (int)&v69);
      }
      std::string::_M_dispose((void **)&v69);
    }
LABEL_24:
    WXML::DOMLib::Parser::~Parser((int)v95);
    std::vector<WXML::DOMLib::Token>::~vector((void **)&v66);
  }
  else
  {
    std::string::substr(v95, a2, a2[1] - 4, 0xFFFFFFFF);
    v52 = std::operator==<char>((int)v95, ".wxs");
    std::string::_M_dispose((void **)v95);
    lpuexcpt = 0;
    if ( v52 )
    {
//   // copy from param
//       WXML::DOMLib::Parser *a1@<edi>,
//         int *a2,   // 文件名
//         char **a3,
//         char a4,  // '\n'
//         int a5, // gwxMark
//         int *a6, // "f_"
//         _DWORD *a7, // fileData
//         int *a8, // 错误信息
//         _DWORD *a9, // map<string, ?>
//         _DWORD *a10,// ???
//         _DWORD *a11,// ???
//         int a12, // bool
//         char a13; // bool
//   // copy from param
      v84[0] = (int)&v85;
      v84[1] = 0;
      v85 = 0;
      std::operator+<char>((int)v95, "p_", (int)a2);
      WXML::Compiler::GetFuncId((void **)v86, a11, (int)v95);
      std::string::_M_dispose((void **)v95);
      lpuexcpt = (struct _Unwind_Exception *)night::compile_ns((int)a2, (int)v86, (int)a3, 1, (unsigned int *)v84, 0);
      if ( lpuexcpt )
      {
        std::string::_M_assign((int)a8, (int)v84);
      }
      else
      {
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream((int)v95);
        v53 = std::operator<<<std::char_traits<char>>((std::ostream::sentry *)v96, "f_['");
        WXML::Rewrite::ToStringCode((int)v87, a2);
        v41 = std::operator<<<char>(v53, v87);
        v42 = std::operator<<<std::char_traits<char>>(v41, "'] = nv_require(");
        v54 = std::operator<<<std::char_traits<char>>(v42, '"'/*34*/);
        std::operator+<char>((int)v88, "p_", (int)a2);
        WXML::Rewrite::ToStringCode((int)&v91, v88);
        v43 = std::operator<<<char>(v54, &v91);
        v44 = std::operator<<<std::char_traits<char>>(v43, '"'/*34*/);
        v45 = std::operator<<<std::char_traits<char>>(v44, ");");
        std::operator<<<std::char_traits<char>>(v45, a4);
        std::string::_M_dispose((void **)&v91);
        std::string::_M_dispose((void **)v88);
        std::string::_M_dispose((void **)v87);
        // v84 compile_ns结果？
        v46 = std::operator<<<char>((std::ostream::sentry *)v96, v84);
        std::operator<<<std::char_traits<char>>(v46, a4);
        std::stringbuf::str((int)&v91, (int)v97);
        v47 = std::map<std::string,std::string>::operator[](a10, (int)a2);
        std::string::operator=((unsigned __int8 **)v47, (int)&v91);
        std::string::_M_dispose((void **)&v91);
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream((int)v95);
      }
      std::string::_M_dispose((void **)v86);
      std::string::_M_dispose((void **)v84);
    }
  }
  return lpuexcpt;
}
// 40561E: variable 'v49' is possibly undefined