// hello.cc
#include "./include/wcc.hh"
#include "../include/file.h"
#include "../include/string_utils.h"
#include "../include/wxml.h"
#include "v8.h"
#include <node.h>
#include <string>
#include <algorithm>

namespace wx_compiler {

using v8::Function;
using v8::FunctionCallbackInfo;
using v8::FunctionTemplate;
using v8::Isolate;
using v8::Local;
using v8::NewStringType;
using v8::Object;
using v8::String;
using v8::Value;

using std::map;
using std::string;
using std::vector;

int compile(Isolate *isolate, WCCOptions &options, Local<Value> &result,
            std::string &errMsg) {
  int mark = 0;
  if (options.debug) {
    mark |= 2u;
  }
  if (options.debugWXS) {
    mark |= 4u;
  }
  std::map<std::string, std::string> fileContentMap;
  for (int i = 0; i < options.files.size(); i++) {
    fileContentMap[options.files[i]] = options.contents[i];
  }
  map<string, vector<string>> componentListMap;
  
  std::string xc_Or_completeCode_Param = options.wxmlCompileConfig;
  if (!xc_Or_completeCode_Param.empty())
  {
      string data;
      vector<string> allComponentList;
      data = getNextArg(xc_Or_completeCode_Param, options.wxmlCompileConfigSplit);
      unsigned long long count = strtoull(&data[0], 0, 10);
      for (unsigned long long i = 0; i < count; i++)
      {
          vector<string> componentList;
          string arg1 = getNextArg(xc_Or_completeCode_Param, options.wxmlCompileConfigSplit);
          data = getNextArg(xc_Or_completeCode_Param, options.wxmlCompileConfigSplit);
          unsigned long long jCount = strtoull(&data[0], 0, 10);
          for (unsigned long long i = 0; i < jCount; i++)
          {
              string componentName = getNextArg(xc_Or_completeCode_Param, options.wxmlCompileConfigSplit);
              componentList.push_back(componentName);
              auto it = std::find(allComponentList.begin(), allComponentList.end(), componentName);
              if (it == allComponentList.end())
              {
                  allComponentList.push_back(componentName);
              }
          }
          auto it = componentListMap.lower_bound(arg1);
          if (it == componentListMap.end() || arg1 < it->first)
          {
              componentListMap.emplace(arg1, componentList);
          }
      }
      componentListMap["ALL"] = allComponentList;
  }

  if (options.lazyload) {
    // 懒加载
    std::vector<std::string> splitedData;
    split(splitedData, options.lazyloadConfig, options.wxmlCompileConfigSplit);
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
          "onent||function(){};var definePlugin=definePlugin||function(){};var "
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
          "onent||function(){};var definePlugin=definePlugin||function(){};var "
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
    if (!compilerResult) {

      v8::Local<v8::Object> funcContent = v8::Object::New(isolate);
      for (auto content : outputContentMap) {
        funcContent
            ->Set(isolate->GetCurrentContext(),
                  String::NewFromUtf8(isolate, content.first.c_str(),
                                      v8::NewStringType::kNormal)
                      .ToLocalChecked(),
                  String::NewFromUtf8(isolate, content.second.c_str(),
                                      v8::NewStringType::kNormal)
                      .ToLocalChecked())
            .Check();
      }
      v8::Local<v8::Object> funcName = v8::Object::New(isolate);
      for (auto func : outputFuncMap) {
        funcName
            ->Set(isolate->GetCurrentContext(),
                  String::NewFromUtf8(isolate, func.first.c_str(),
                                      v8::NewStringType::kNormal)
                      .ToLocalChecked(),
                  String::NewFromUtf8(isolate, func.second.c_str(),
                                      v8::NewStringType::kNormal)
                      .ToLocalChecked())
            .Check();
      }

      // 你可以在这里设置对象的属性和方法

      // 创建一个实例
      v8::Local<v8::Object> object_instance = v8::Object::New(isolate);
      auto _ = object_instance->Set(isolate->GetCurrentContext(),
                           String::NewFromUtf8(isolate, "generateFunctionName",
                                               v8::NewStringType::kNormal)
                               .ToLocalChecked(),
                           funcName);
      _ = object_instance->Set(isolate->GetCurrentContext(),
                           String::NewFromUtf8(isolate,
                                               "generateFunctionContent",
                                               v8::NewStringType::kNormal)
                               .ToLocalChecked(),
                           funcContent);

      result = object_instance;
    }
    return compilerResult;
  } else {
    // 普通

    int compilerResult = 0;
    std::map<std::string, std::string> v105;
    map<string, vector<string>> componentListMap;
    std::string r;
    compilerResult =
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
    result = String::NewFromUtf8(isolate, r.c_str(), NewStringType::kNormal)
                 .ToLocalChecked();
    return compilerResult;
  }
  return 0;
}

void wcc(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  v8::HandleScope scope(isolate); // Ensure we have a proper handle scope.

  // Check if the first argument is an object.
  if (args.Length() < 1 || !args[0]->IsObject()) {
    isolate->ThrowException(String::NewFromUtf8(isolate,
                                                "Argument must be an object",
                                                NewStringType::kNormal)
                                .ToLocalChecked());
    return;
  }

  // Cast the first argument to an Object.
  Local<v8::Context> context = isolate->GetCurrentContext();
  Local<Object> obj = args[0]->ToObject(context).ToLocalChecked();

  WCCOptions options;
  if (!wcc_options::parse_wcc_options(isolate, obj, &options)) {
    // 选项解析失败
    return;
  }

  Local<Value> result;
  std::string errMsg;
  int code = compile(isolate, options, result, errMsg);

  // Convert the "msg" property to a C++ string and return it.
  if (code) {
    // error
    args.GetReturnValue().Set(
        String::NewFromUtf8(isolate, errMsg.c_str(), NewStringType::kNormal)
            .ToLocalChecked());
  } else {
    // ok
    args.GetReturnValue().Set(result);
  }
}

void Initialize(Local<Object> exports, Local<Object> module) {

  Isolate *isolate = exports->GetIsolate();
  auto context = isolate->GetCurrentContext();

  std::string versionInfo;
  WXML::Compiler::GetVersionInfo(versionInfo, "global");

  // Set the module.exports to be a function
  Local<FunctionTemplate> tpl = FunctionTemplate::New(isolate, wcc);
  Local<Function> fn = tpl->GetFunction(context).ToLocalChecked();

  // Set the 'version' property on the function
  fn->Set(context,
          String::NewFromUtf8(isolate, "version", NewStringType::kNormal)
              .ToLocalChecked(),
          String::NewFromUtf8(isolate, versionInfo.c_str(),
                              NewStringType::kNormal)
              .ToLocalChecked())
      .Check();

  module
      ->Set(context,
            String::NewFromUtf8(isolate, "exports", NewStringType::kNormal)
                .ToLocalChecked(),
            fn)
      .Check();
}

NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)

} // namespace wx_compiler