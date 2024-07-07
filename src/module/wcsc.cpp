// hello.cc
#include "./include/wcsc.hh"
#include "../include/file.h"
#include "../include/string_utils.h"
#include "../include/wxss.h"
#include "../include/wxml.h"
#include "v8.h"
#include <algorithm>
#include <node.h>
#include <string>
#include <vector>

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

int compile(Isolate *isolate, WCSCOptions &options, Local<Value> &result,
            std::string &errMsg) {
  /**
    * 文件内容map filename -> fileContent
  */
  std::map<std::string, std::string> v77;
  for (int i=0; i<options.files.size(); i++) {
    v77[options.files[i]] = options.contents[i];
  }
  std::string v76 = "./app.wxss";

  if (options.lazyload) {
    // 懒加载

    std::string v96;

    std::string v94, v75;
    WXSS::XCompiler lt(v77, options.debug, v75);
    // lt.offset_136.erase()
    // lt.offset_136.erase()

    v96.assign(lt.offset_8);
    std::map<std::string, std::string> v92;
    if (!lt.offset_0) {
      std::vector<std::string> v72;
      for (int i=0; i<options.pageCount; i++) {
        v72.push_back(options.files[i]);
      }
      int ret = lt.GetCommHead(v72, v94, true, v76);
      if (ret) {
        fprintf(stderr, "ERR: GetCommHead ret %d", ret);
      }
      for (int i = 0; i < v72.size(); i++) {
        std::string v98;
        std::string cur = v72[i];
        std::string v101 = WXML::Rewrite::ToStringCode(cur);
        ret = lt.GetPageCss(v101, v98, 0);
        if (ret) {
          fprintf(stderr, "INFO: GetPageCss fail ret %d", ret);
        }
        v92.emplace(cur, v98);
      }
      v8::Local<v8::Object> pageWxss = v8::Object::New(isolate);
      for (auto func : v92) {
        pageWxss
            ->Set(isolate->GetCurrentContext(),
                  String::NewFromUtf8(isolate, func.first.c_str(),
                                      v8::NewStringType::kNormal)
                      .ToLocalChecked(),
                  String::NewFromUtf8(isolate, func.second.c_str(),
                                      v8::NewStringType::kNormal)
                      .ToLocalChecked())
            .Check();
      }

      v8::Local<v8::Object> object_instance = v8::Object::New(isolate);
      auto _ = object_instance->Set(isolate->GetCurrentContext(),
                           String::NewFromUtf8(isolate, "common",
                                               v8::NewStringType::kNormal)
                               .ToLocalChecked(),
                           String::NewFromUtf8(isolate, v94.c_str(),
                                               v8::NewStringType::kNormal).ToLocalChecked());
      _ = object_instance->Set(isolate->GetCurrentContext(),
                           String::NewFromUtf8(isolate,
                                               "pageWxss",
                                               v8::NewStringType::kNormal)
                               .ToLocalChecked(),
                           pageWxss);
      result = object_instance;

      if (ret) {
        fprintf(stderr, "ERR: %s\nerror file count: %d\n", "", 0);
        return 1;
      }
      // main - 25 - 9
      return 0;
    }
    std::string ret = "ERR: wxss GetCompiledResult: " + v96 + ", error file count: " + std::to_string(lt.offset_4) + ", ret " + std::to_string(lt.offset_0);
    auto r = String::NewFromUtf8(isolate, ret.c_str(),
                                      v8::NewStringType::kNormal)
                      .ToLocalChecked();
    fprintf(stderr,
            "ERR: wxss GetCompiledResult: %s, error file count: %d, ret %d",
            v96.data(), lt.offset_4, lt.offset_0);
    return 1;
  } else {
    // 普通
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

  WCSCOptions options;
  if (!wcsc_options::parse_wcsc_options(isolate, obj, &options)) {
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
  // TODO
  // WXML::Compiler::GetVersionInfo(versionInfo, "global");

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