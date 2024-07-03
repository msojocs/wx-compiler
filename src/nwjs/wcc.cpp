// hello.cc
#include <node.h>
#include "../include/wxml.h"
#include "./include/wcc.hh"

namespace wx_compiler
{

    using v8::Function;
    using v8::FunctionCallbackInfo;
    using v8::FunctionTemplate;
    using v8::Isolate;
    using v8::Local;
    using v8::NewStringType;
    using v8::Object;
    using v8::String;
    using v8::Value;


    void Compiler(const FunctionCallbackInfo<Value> &args)
    {
        Isolate *isolate = args.GetIsolate();
        v8::HandleScope scope(isolate); // Ensure we have a proper handle scope.

        // Check if the first argument is an object.
        if (args.Length() < 1 || !args[0]->IsObject())
        {
            isolate->ThrowException(String::NewFromUtf8(isolate, "Argument must be an object", NewStringType::kNormal).ToLocalChecked());
            return;
        }

        // Cast the first argument to an Object.
        Local<v8::Context> context = isolate->GetCurrentContext();
        Local<Object> obj = args[0]->ToObject(context).ToLocalChecked();

        WCCOptions options;
        if(!parse_wcc_options(isolate, obj, &options))
        {
            // 选项解析失败
            return;
        }

        // TODO: 解析成功，开始编译

        // Convert the "msg" property to a C++ string and return it.
        // String::Utf8Value utf8(isolate, value);
        // args.GetReturnValue().Set(String::NewFromUtf8(isolate, *utf8, NewStringType::kNormal).ToLocalChecked());
    }

    void Initialize(Local<Object> exports, Local<Object> module)
    {

        Isolate *isolate = exports->GetIsolate();
        auto context = isolate->GetCurrentContext();

        std::string versionInfo;
        WXML::Compiler::GetVersionInfo(versionInfo, "global");

        // Set the module.exports to be a function
        Local<FunctionTemplate> tpl = FunctionTemplate::New(isolate, Compiler);
        Local<Function> fn = tpl->GetFunction(context).ToLocalChecked();

        // Set the 'version' property on the function
        fn->Set(context, String::NewFromUtf8(isolate, "version", NewStringType::kNormal).ToLocalChecked(),
                String::NewFromUtf8(isolate, versionInfo.c_str(), NewStringType::kNormal).ToLocalChecked())
            .Check();

        module->Set(context, String::NewFromUtf8(isolate, "exports", NewStringType::kNormal).ToLocalChecked(), fn).Check();
    }

    NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)

} // namespace demo