#include "./wcc.hh"
#include "napi.h"

namespace wcc_options
{

    bool parse_wcc_options(Napi::Env &env, Napi::Object &src, WCCOptions *result)
    {
        if (src.Get("verbose").IsBoolean())
        {
            result->verbose = src.Get("verbose").As<Napi::Boolean>().Value();
        }
        else
        {
            throw Napi::Error::New(env, "verbose must be a boolean");
        }

        if (src.Get("debug").IsBoolean())
        {
            result->debug = src.Get("debug").As<Napi::Boolean>().Value();
        }
        else
        {
            throw Napi::Error::New(env, "debug must be a boolean");
        }

        if (src.Get("debugWXS").IsBoolean())
        {
            result->debugWXS = src.Get("debugWXS").As<Napi::Boolean>().Value();
        }
        else
        {
            throw Napi::Error::New(env, "debugWXS must be a boolean");
        }

        if (src.Get("showNewTree").IsBoolean())
        {
            result->showNewTree = src.Get("showNewTree").As<Napi::Boolean>().Value();
        }
        else
        {
            throw Napi::Error::New(env, "showNewTree must be a boolean");
        }

        if (src.Get("isPlugin").IsBoolean())
        {
            result->isPlugin = src.Get("isPlugin").As<Napi::Boolean>().Value();
        }
        else
        {
            throw Napi::Error::New(env, "isPlugin must be a boolean");
        }

        if (src.Get("addTestAttre").IsBoolean())
        {
            result->addTestAttre = src.Get("addTestAttre").As<Napi::Boolean>().Value();
        }
        else
        {
            throw Napi::Error::New(env, "addTestAttre must be a boolean");
        }

        if (src.Get("independent").IsBoolean())
        {
            result->independent = src.Get("independent").As<Napi::Boolean>().Value();
        }
        else
        {
            throw Napi::Error::New(env, "independent must be a boolean");
        }

        if (src.Get("isCut").IsBoolean())
        {
            result->isCut = src.Get("isCut").As<Napi::Boolean>().Value();
        }
        else
        {
            throw Napi::Error::New(env, "isCut must be a boolean");
        }

        if (src.Get("lazyload").IsBoolean())
        {
            result->lazyload = src.Get("lazyload").As<Napi::Boolean>().Value();
        }
        else
        {
            throw Napi::Error::New(env, "lazyload must be a boolean");
        }
        if (src.Get("genfuncname").IsString())
        {
            result->genfuncname = src.Get("genfuncname").As<Napi::String>().Utf8Value();
        }
        else
        {
            throw Napi::Error::New(env, "genfuncname must be a string");
        }

        if (src.Get("cwd").IsString())
        {
            result->cwd = src.Get("cwd").As<Napi::String>().Utf8Value();
        }
        else
        {
            throw Napi::Error::New(env, "cwd must be a string");
        }
        if (src.Get("wxmlCompileConfig").IsString())
        {
            result->wxmlCompileConfig = src.Get("wxmlCompileConfig").As<Napi::String>().Utf8Value();
        }
        else
        {
            throw Napi::Error::New(env, "wxmlCompileConfig must be a string");
        }

        if (src.Get("wxmlCompileConfigSplit").IsString())
        {
            result->wxmlCompileConfigSplit = src.Get("wxmlCompileConfigSplit").As<Napi::String>().Utf8Value();
        }
        else
        {
            throw Napi::Error::New(env, "wxmlCompileConfigSplit must be a string");
        }

        if (src.Get("lazyloadConfig").IsString())
        {
            result->lazyloadConfig = src.Get("lazyloadConfig").As<Napi::String>().Utf8Value();
        }
        else
        {
            throw Napi::Error::New(env, "lazyloadConfig must be a string");
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
                else
                {
                    throw Napi::Error::New(env, "files must be an array of strings");
                }
            }
        }
        else
        {
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
                else
                {
                    throw Napi::Error::New(env, "contents must be an array of strings");
                }
            }
        }
        else
        {
            throw Napi::Error::New(env, "contents must be an array");
        }
        if (src.Get("replaceContent").IsObject())
        {
            Napi::Object obj = src.Get("replaceContent").As<Napi::Object>();
            Napi::Array keys = obj.GetPropertyNames();
            for (size_t i = 0; i < keys.Length(); i++)
            {
                Napi::Value key = keys[i];
                if (key.IsString())
                {
                    std::string keyStr = key.As<Napi::String>().Utf8Value();
                    Napi::Value value = obj.Get(key);
                    if (value.IsString())
                    {
                        result->replaceContent[keyStr] = value.As<Napi::String>().Utf8Value();
                    }
                    else
                    {
                        throw Napi::Error::New(env, "replaceContent must be a map of strings");
                    }
                }
                else
                {
                    throw Napi::Error::New(env, "replaceContent must be a map of strings");
                }
            }
        }
        else
        {
            throw Napi::Error::New(env, "replaceContent must be a map of strings");
        }
        return true;
    }
}