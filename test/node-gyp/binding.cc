// hello.cc
#include <node.h>
// #include "../include/wxml.h"

namespace demo
{

    using v8::FunctionCallbackInfo;
    using v8::FunctionTemplate;
    using v8::Isolate;
    using v8::Local;
    using v8::Object;
    using v8::NewStringType;
    using v8::String;
    using v8::Value;

    void MsgMethod(const FunctionCallbackInfo<Value> &args) {
          Isolate *isolate = args.GetIsolate();
        v8::HandleScope scope(isolate); // Ensure we have a proper handle scope.

        // Check if the first argument is an object.
        if (args.Length() < 1 || !args[0]->IsObject()) {
            isolate->ThrowException(String::NewFromUtf8(isolate, "Argument must be an object", NewStringType::kNormal).ToLocalChecked());
            return;
        }

        // Cast the first argument to an Object.
        Local<v8::Context> context = isolate->GetCurrentContext();
        Local<Object> obj = args[0]->ToObject(context).ToLocalChecked();

        // Get the "msg" property from the object.
        Local<String> key = String::NewFromUtf8(isolate, "msg", NewStringType::kNormal).ToLocalChecked();
        Local<Value> value;
        if (!obj->Get(context, key).ToLocal(&value)) {
            isolate->ThrowException(String::NewFromUtf8(isolate, "Failed to get 'msg' property", NewStringType::kNormal).ToLocalChecked());
            return;
        }

        if (!value->IsString()) {
            isolate->ThrowException(String::NewFromUtf8(isolate, "The 'msg' property must be a string", NewStringType::kNormal).ToLocalChecked());
            return;
        }

        // Now we can safely check if value is a string and print the message.
        printf("get msg2\n");
        printf("get msg3 %d\n", value->IsString());

        // Convert the "msg" property to a C++ string and return it.
        String::Utf8Value utf8(isolate, value);
        args.GetReturnValue().Set(String::NewFromUtf8(isolate, *utf8, NewStringType::kNormal).ToLocalChecked());
    }

    void Initialize(Local<Object> exports, Local<Object> module)
    {
        
        Isolate* isolate = exports->GetIsolate();
        auto context = isolate->GetCurrentContext();

        
        // std::string versionInfo;
        // WXML::Compiler::GetVersionInfo(versionInfo, "global");
        module->Set(context, String::NewFromUtf8(isolate, "exports", NewStringType::kNormal).ToLocalChecked(),
               FunctionTemplate::New(isolate, MsgMethod)->GetFunction(context).ToLocalChecked()).Check();
        auto _ = exports->Set(context, String::NewFromUtf8(isolate, "version", NewStringType::kNormal).ToLocalChecked(),
                 String::NewFromUtf8(isolate, "v1.0.0", NewStringType::kNormal).ToLocalChecked());
    }

    NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)

} // namespace demo