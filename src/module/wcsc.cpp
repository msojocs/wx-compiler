// hello.cc
#include "./config/wcsc.hh"
#include "../include/file.h"
#include "../include/string_utils.h"
#include "../include/wxss.h"
#include "../include/wxml.h"
#include "napi.h"
#include <algorithm>
#include <cstdio>
#include <stdexcept>
#include <string>
#include <vector>

namespace wx_compiler {
using std::map;
using std::string;
using std::vector;

Napi::Value compile(const Napi::Env &env, WCSCOptions &options) {
  /**
    * 文件内容map filename -> fileContent
  */
  std::map<std::string, std::string> v77;
  for (int i=0; i<options.files.size(); i++) {
    v77[options.files[i]] = options.contents[i];
  }
  std::string v76 = "./app.wxss";
  std::vector<std::string> v72;
  std::string v75;
  for (int i=0; i<options.pageCount; i++) {
    v72.push_back(options.files[i]);
  }
  std::string errMsg;
  if (options.lazyload) {
    // 懒加载

    std::string v96;

    std::string v94;
    WXSS::XCompiler lt(v77, options.debug, v75);
    // lt.offset_136.erase()
    // lt.offset_136.erase()

    v96.assign(lt.offset_8);
    std::map<std::string, std::string> v92;
    if (!lt.offset_0) {
      int ret = lt.GetCommHead(v72, v94, true, v76);
      if (ret) {
        fprintf(stderr, "ERR: GetCommHead ret %d", ret);
        throw Napi::Error::New(env, "ERR: GetCommHead ret " + std::to_string(ret));
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
      auto pageWxss = Napi::Object::New(env);
      for (auto func : v92) {
        pageWxss.Set(
          Napi::String::New(env, func.first),
          Napi::String::New(env, func.second)
        );
      }
      auto result = Napi::Object::New(env);
      result.Set(Napi::String::New(env, "common"), Napi::String::New(env, v94));
      result.Set(Napi::String::New(env, "pageWxss"), pageWxss);

      if (ret) {
        fprintf(stderr, "ERR: %s\nerror file count: %d\n", "", 0);
        throw Napi::Error::New(env, "ERR: \nerror file count: " + std::to_string(0));
      }
      // main - 25 - 9
      return result;
    }
    std::string ret = "ERR: wxss GetCompiledResult: " + v96 + ", error file count: " + std::to_string(lt.offset_4) + ", ret " + std::to_string(lt.offset_0);
    auto r = Napi::String::New(env, ret);
    fprintf(stderr,
            "ERR: wxss GetCompiledResult: %s, error file count: %d, ret %d",
            v96.data(), lt.offset_4, lt.offset_0);
    throw Napi::Error::New(env, ret);
  } else {
    // 普通
    std::string v88;
    int ret = WXSS::NewLintAndParseCSSList(v77, v72, v88, errMsg, 0, options.debug, v75, v76);
    if (ret)
    {
      throw Napi::Error::New(env, "ERR: wxss GetCompiledResult: " + errMsg + ", error file count: " + std::to_string(ret));
    }
    return Napi::String::New(env, v88);
  }
  
}

Napi::Value wcsc(const Napi::CallbackInfo &info) {
  auto env = info.Env();

  // Check if the first argument is an object.
  if (info.Length() < 1 || !info[0].IsObject()) {
    throw Napi::Error::New(env, Napi::String::New(env, "Argument must be an object"));
  }

  // Cast the first argument to an Object.
  auto obj = info[0].As<Napi::Object>();

  WCSCOptions options;
  try {
    wcsc_options::parse_wcsc_options(env, obj, &options);
    Napi::Object result;
    std::string errMsg;
    return compile(env, options);
  }
  catch (std::string& err) {
    fprintf(stderr, "Error: %s", err.c_str());
    throw Napi::Error::New(env, err);
  }catch (std::runtime_error &err) {
    fprintf(stderr, "Runtime error: %s",err.what());
    throw Napi::Error::New(env, err.what());
  } catch (std::exception& err) {
    fprintf(stderr, "Exception: %s", err.what());
    throw Napi::Error::New(env, err.what());
  }
  catch (...) {
    fprintf(stderr, "Error: Unknown error");
    throw Napi::Error::New(env, "Unknown error");
  }

}

static Napi::Object Initialize(Napi::Env env, Napi::Object exports) {

  return Napi::Function::New(env, wcsc);
}

NODE_API_MODULE(WCSC_MODULE, Initialize)

} // namespace wx_compiler