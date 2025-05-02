#include "./wcsc.hh"
#include "napi.h"

namespace wcsc_options
{
    bool parse_wcsc_options(Napi::Env &env, Napi::Object &src, WCSCOptions *result)
    {
        if (src.Get("debug").IsBoolean())
        {
            result->debug = src.Get("debug").As<Napi::Boolean>().Value();
        }
        else {
            throw Napi::Error::New(env, "debug must be a boolean");
        }

        if (src.Get("lazyload").IsBoolean())
        {
            result->lazyload = src.Get("lazyload").As<Napi::Boolean>().Value();
        }
        else {
            throw Napi::Error::New(env, "lazyload must be a boolean");
        }

        if (src.Get("cwd").IsString())
        {
            result->cwd = src.Get("cwd").As<Napi::String>().Utf8Value();
        }
        else {
            throw Napi::Error::New(env, "cwd must be a string");
        }

        if (src.Get("classPrefix").IsString())
        {
            result->classPrefix = src.Get("classPrefix").As<Napi::String>().Utf8Value();
        }
        else {
            throw Napi::Error::New(env, "classPrefix must be a string");
        }

        if (src.Get("pageCount").IsNumber())
        {
            result->pageCount = src.Get("pageCount").As<Napi::Number>().Int32Value();
        }
        else {
            throw Napi::Error::New(env, "pageCount must be a number");
        }

        if (src.Get("files").IsArray())
        {
            Napi::Array arr = src.Get("files").As<Napi::Array>();
            for (size_t i = 0; i < arr.Length(); i++)
            {
                Napi::Value value = arr[i];
                if (value.IsString())
                {
                    result->files.push_back(value.As<Napi::String>().Utf8Value());
                }
                else {
                    throw Napi::Error::New(env, "files must be an array of strings");
                }
            }
        }
        else {
            throw Napi::Error::New(env, "files must be an array");
        }

        if (src.Get("contents").IsArray())
        {
            Napi::Array arr = src.Get("contents").As<Napi::Array>();
            for (size_t i = 0; i < arr.Length(); i++)
            {
                Napi::Value value = arr[i];
                if (value.IsString())
                {
                    result->contents.push_back(value.As<Napi::String>().Utf8Value());
                }
                else {
                    throw Napi::Error::New(env, "contents must be an array of strings");
                }
            }
        }
        else {
            throw Napi::Error::New(env, "contents must be an array");
        }

        if (src.Get("replaceContent").IsObject())
        {
            Napi::Object obj = src.Get("replaceContent").As<Napi::Object>();
            Napi::Array keys = obj.GetPropertyNames();
            for (size_t i = 0; i < keys.Length(); i++)
            {
                Napi::Value k = keys[i];
                std::string key = k.As<Napi::String>().Utf8Value();
                if (obj.Get(key).IsString())
                {
                    result->replaceContent[key] = obj.Get(key).As<Napi::String>().Utf8Value();
                }
                else {
                    throw Napi::Error::New(env, "replaceContent must be an object of strings");
                }
            }
        }
        else {
            throw Napi::Error::New(env, "replaceContent must be an object");
        }
        return true;
    }
}