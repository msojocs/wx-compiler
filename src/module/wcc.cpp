// hello.cc
#include "./config/wcc.hh"
#include "../include/file.h"
#include "../include/night.h"
#include "../include/string_utils.h"
#include "../include/wxml.h"
#include "napi.h"
#include <algorithm>
#include <cstdio>
#include <exception>
#include <string>

namespace wx_compiler {

using std::map;
using std::string;
using std::vector;

Napi::Value compile(Napi::Env &env, WCCOptions &options) {

    int mark = 0;
    if (options.debug) {
      mark |= 2u;
    }
    if (options.debugWXS) {
      mark |= 4u;
    }
    std::map<std::string, std::string> fileContentMap;
    std::map<std::string, std::string> wxsMap;
    for (int i = 0; i < options.files.size(); i++) {
      auto file = options.files[i];
        fileContentMap[file] = options.contents[i];
      if (file.find(".wxs") != std::string::npos) {
        wxsMap[file] = options.contents[i];
      }
    }
    map<string, vector<string>> componentListMap;

    std::string xc_Or_completeCode_Param = options.wxmlCompileConfig;
    if (!xc_Or_completeCode_Param.empty()) {
      string data;
      vector<string> allComponentList;
      data =
          getNextArg(xc_Or_completeCode_Param, options.wxmlCompileConfigSplit);
      unsigned long long count = strtoull(&data[0], 0, 10);
      for (unsigned long long i = 0; i < count; i++) {
        vector<string> componentList;
        string arg1 = getNextArg(xc_Or_completeCode_Param,
                                 options.wxmlCompileConfigSplit);
        data = getNextArg(xc_Or_completeCode_Param,
                          options.wxmlCompileConfigSplit);
        unsigned long long jCount = strtoull(&data[0], 0, 10);
        for (unsigned long long i = 0; i < jCount; i++) {
          string componentName = getNextArg(xc_Or_completeCode_Param,
                                            options.wxmlCompileConfigSplit);
          componentList.push_back(componentName);
          auto it = std::find(allComponentList.begin(), allComponentList.end(),
                              componentName);
          if (it == allComponentList.end()) {
            allComponentList.push_back(componentName);
          }
        }
        auto it = componentListMap.lower_bound(arg1);
        if (it == componentListMap.end() || arg1 < it->first) {
          componentListMap.emplace(arg1, componentList);
        }
      }
      componentListMap["ALL"] = allComponentList;
    }

    if (wxsMap.size())
    {
        std::string wxs;

        for (auto m=wxsMap.begin(); m != wxsMap.end(); m++) {
            auto v152 = m->first;
            auto v156 = m->second;
            std::string v146;
            if ( night::compile_ns_no_wrapper(v152, v156, 1, v146, 0) )
            {
                throw Napi::Error::New(env, "Error: " + v146 + "\n");
            }
            auto v31 = snprintf(0, 0, WXML::GlassEaselWxs::sWrapper.c_str(),
            v146.c_str()) + 1; char *v32 = (char *)operator new[](v31);
            snprintf(v32, v31, WXML::GlassEaselWxs::sWrapper.c_str(),
            v146.c_str()); wxsMap[v152] = v32; delete[] v32;
        }
    }
    if (options.lazyload) {

      // 懒加载
      std::vector<std::string> splitedData;
      split(splitedData, options.lazyloadConfig,
            options.wxmlCompileConfigSplit);
      // 处理文件路径
      for (int i = 0; i < splitedData.size(); i++) {
        string path = splitedData[i];
        if (path[0] == '.' && path[1] == '/') {
          // 以"./"开头，去掉前两个字符
          splitedData[i] = path.substr(2);
        }
      }

      int compilerResult = 0;

      std::map<std::string, std::string> outputContentMap;
      map<string, string> outputFuncMap;
      map<string, vector<string>> dependencyListMap;
      map<string, string> mapData1;
      const char off_5403C3[] = {'s', '\0', 'e', '\0'};
      std::string errMsg;
      compilerResult = WXML::Compiler::CompileLazy(
          fileContentMap, errMsg, outputContentMap,
          outputFuncMap,     // map<string, string>
          dependencyListMap, // std::map<std::string,std::vector<std::string>>
          componentListMap,  // componentListMap
          splitedData, mapData1,
          options.isCut, // isLLA,
          options.genfuncname, mark, 10, &off_5403C3[2], off_5403C3, "gg", "e_",
          "d_", "p_", "\0", "boxofchocolate", "$gdwx", "f_");
      if (outputContentMap.count("__COMMON__") == 0) {
        string helperCode;
        WXML::Compiler::WXMLHelperCode(helperCode);
        string data =
            "var __wxAppData=__wxAppData||{};var "
            "__wxAppCode__=__wxAppCode__||{};var global=global||{};var "
            "__WXML_GLOBAL__="
            "__WXML_GLOBAL__||{entrys:{},defines:{},modules:{},ops:[],wxs_nf_"
            "init:undefined,total_ops:0};var Component=Comp"
            "onent||function(){};var "
            "definePlugin=definePlugin||function(){};var "
            "requirePlugin=requirePlugin||function(){};"
            "var Behavior=Behavior||function(){};var "
            "__vd_version_info__=__vd_version_info__||{};var "
            "__GWX_GLOBAL__=__GWX_G"
            "LOBAL__||{};var __globalThis=(typeof "
            "__vd_version_info__!=='undefined'&&typeof "
            "__vd_version_info__.globalThis!"
            "=='undefined')?__vd_version_info__.globalThis:(typeof "
            "window!=='undefined'?window:globalThis);";
        data = data + helperCode;
        outputContentMap["__COMMON__"] = data;
      } else {
        string helperCode;
        WXML::Compiler::WXMLHelperCode(helperCode);
        string commonData =
            "var __wxAppData=__wxAppData||{};var "
            "__wxAppCode__=__wxAppCode__||{};var global=global||{};var "
            "__WXML_GLOBAL__="
            "__WXML_GLOBAL__||{entrys:{},defines:{},modules:{},ops:[],wxs_nf_"
            "init:undefined,total_ops:0};var Component=Comp"
            "onent||function(){};var "
            "definePlugin=definePlugin||function(){};var "
            "requirePlugin=requirePlugin||function(){};"
            "var Behavior=Behavior||function(){};var "
            "__vd_version_info__=__vd_version_info__||{};var "
            "__GWX_GLOBAL__=__GWX_G"
            "LOBAL__||{};var __globalThis=(typeof "
            "__vd_version_info__!=='undefined'&&typeof "
            "__vd_version_info__.globalThis!"
            "=='undefined')?__vd_version_info__.globalThis:(typeof "
            "window!=='undefined'?window:globalThis);";
        commonData = commonData + helperCode;
        commonData = commonData.append(outputContentMap["__COMMON__"]);

        outputContentMap["__COMMON__"] = commonData;
      }

      std::stringstream dep;
      dep << ";var __WXML_DEP__=__WXML_DEP__||{};";
      // dependencyListMap v121
      for (auto j = dependencyListMap.begin(); j != dependencyListMap.end();
           j++) {

        if (j->second.begin() != j->second.end()) {
          dep << "__WXML_DEP__[\"";
          dep << j->first;
          dep << "\"]=[";
          auto list = j->second;

          for (auto k = list.begin(); k != list.end(); k++) {
            dep << "\"";
            dep << WXML::Rewrite::ToStringCode(*k);
            dep << "\",";
          }

          dep << "];";
        }
      }
      std::string v140 = dep.str();
      outputContentMap["__COMMON__"].append(v140);
      if (compilerResult) {
        throw Napi::Error::New(env, "Error: " + errMsg + "\n");
      }

        auto funcContent = Napi::Object::New(env);
        for (auto content : outputContentMap) {
          funcContent
              .Set(content.first,
                    Napi::String::New(env, content.second));
        }
        auto funcName = Napi::Object::New(env);
        for (auto func : outputFuncMap) {
          funcName
              .Set(func.first,
                    Napi::String::New(env, func.second));
        }

        // 你可以在这里设置对象的属性和方法

        // 创建一个实例
        auto object_instance = Napi::Object::New(env);
        object_instance.Set("generateFunctionName",  funcName);
        object_instance.Set("generateFunctionContent", funcContent);

        return object_instance;
      
      
    } else {
      // 普通

      std::map<std::string, std::string> v105;
      map<string, vector<string>> componentListMap;
      std::string r;
      std::string errMsg;
      int compilerResult =
          WXML::Compiler::Compile(fileContentMap,      // a2
                                  errMsg,              // a3
                                  r,                   // a4
                                  componentListMap,    // a5
                                  v105,                // a6
                                  false,               // a7
                                  options.genfuncname, // a8
                                  mark,                // a9
                                  '\n',                //
                                  "e",                 // off_5403C3[2]
                                  "s",                 // off_5403C3
                                  "gg",                // "gg"  a13
                                  "e_",                // "e_"
                                  "d_",                // "d_"
                                  "p_",                // "p_"
                                  "",                  // '\0'
                                  "boxofchocolate",    // "boxofchocolate"
                                  "$gdwx",             // "$gdwx"
                                  "f_");               // "f_"
      if (compilerResult) {
        // error
        throw Napi::Error::New(env, "Error: " + errMsg + "\n");
      }
      return Napi::String::New(env, r);
    }
}

Napi::Value wcc(const Napi::CallbackInfo &info) {
  auto env = info.Env();

  // Check if the first argument is an object.
  if (info.Length() < 1 || !info[0].IsObject()) {
    throw Napi::Error::New(env, "Argument must be an object");
  }
  Napi::Object obj = info[0].As<Napi::Object>();
  WCCOptions options;
  wcc_options::parse_wcc_options(env, obj, &options);

  try {
    auto result = Napi::Object::New(env);
    return compile(env, options);
  } catch (std::string& err) {
    fprintf(stderr, "Error: %s", err.c_str());
    throw Napi::Error::New(env, err);
  } catch (WXML::DOMLib::ParseException& err) {
    fprintf(stderr, "Error: %s", err.what());
    throw Napi::Error::New(env, err.what());
  } catch (std::exception& err) {
    fprintf(stderr, "Error: %s", err.what());
    throw Napi::Error::New(env, err.what());
  }
  catch (...) {
    fprintf(stderr, "Error: Unknown error");
    throw Napi::Error::New(env, "Unknown error");
  }
}

static Napi::Object Initialize(Napi::Env env, Napi::Object exports) {

  std::string versionInfo;
  WXML::Compiler::GetVersionInfo(versionInfo, "global");

  auto func = Napi::Function::New(env, wcc);
  // Set the 'version' property on the function
  exports.Set("version", Napi::String::New(env, versionInfo));

  return func;
}

NODE_API_MODULE(WCC_MODULE, Initialize)

} // namespace wx_compiler