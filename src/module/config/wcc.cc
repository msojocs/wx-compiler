#include "../include/wcc.hh"

namespace wcc_options
{
    using v8::Local;
    using v8::String;
    using v8::Value;

    bool get_boolean_property(v8::Isolate *isolate, v8::Local<v8::Object> &src, const char *property_name, bool &out_value)
    {
        v8::Local<v8::String> key = v8::String::NewFromUtf8(isolate, property_name, v8::NewStringType::kNormal).ToLocalChecked();
        v8::Local<v8::Value> value;
        v8::Local<v8::Context> context = isolate->GetCurrentContext();

        if (!src->Get(context, key).ToLocal(&value))
        {
            isolate->ThrowException(v8::String::NewFromUtf8(isolate, ("Failed to get '" + std::string(property_name) + "' property").c_str(), v8::NewStringType::kNormal).ToLocalChecked());
            return false;
        }
        if (value->IsUndefined())
        {
            out_value = false;
            return true;
        }
        if (!value->IsBoolean())
        {
            isolate->ThrowException(v8::String::NewFromUtf8(isolate, ("The '" + std::string(property_name) + "' property must be a boolean").c_str(), v8::NewStringType::kNormal).ToLocalChecked());
            return false;
        }
        out_value = value->BooleanValue(isolate);
        return true;
    }

    bool get_string_property(v8::Isolate *isolate, v8::Local<v8::Object> &src, const char *property_name, std::string &out_value)
    {
        v8::Local<v8::String> key = v8::String::NewFromUtf8(isolate, property_name, v8::NewStringType::kNormal).ToLocalChecked();
        v8::Local<v8::Value> value;
        v8::Local<v8::Context> context = isolate->GetCurrentContext();

        if (!src->Get(context, key).ToLocal(&value))
        {
            isolate->ThrowException(v8::String::NewFromUtf8(isolate, ("Failed to get '" + std::string(property_name) + "' property").c_str(), v8::NewStringType::kNormal).ToLocalChecked());
            return false;
        }
        if (!value->IsString())
        {
            isolate->ThrowException(v8::String::NewFromUtf8(isolate, ("The '" + std::string(property_name) + "' property must be a string").c_str(), v8::NewStringType::kNormal).ToLocalChecked());
            return false;
        }
        v8::String::Utf8Value utf8Value(isolate, value);
        std::string str(*utf8Value, utf8Value.length());
        out_value = str;
        return true;
    }

    bool get_vector_string_property(v8::Isolate *isolate, v8::Local<v8::Object> &src, const char *property_name, std::vector<std::string> &out_value)
    {
        v8::Local<v8::String> key = v8::String::NewFromUtf8(isolate, property_name, v8::NewStringType::kNormal).ToLocalChecked();
        v8::Local<v8::Value> value;
        v8::Local<v8::Context> context = isolate->GetCurrentContext();

        if (!src->Get(context, key).ToLocal(&value))
        {
            isolate->ThrowException(v8::String::NewFromUtf8(isolate, ("Failed to get '" + std::string(property_name) + "' property").c_str(), v8::NewStringType::kNormal).ToLocalChecked());
            return false;
        }
        if (!value->IsArray())
        {
            isolate->ThrowException(v8::String::NewFromUtf8(isolate, ("The '" + std::string(property_name) + "' property must be a array").c_str(), v8::NewStringType::kNormal).ToLocalChecked());
            return false;
        }
        auto arr = value.As<v8::Array>();
        for (int i=0; i < arr->Length(); i++)
        {
            v8::Local<v8::Value> v;
            if (!arr->Get(context, i).ToLocal(&v))
            {
                isolate->ThrowException(v8::String::NewFromUtf8(isolate, ("Failed to get '" + std::string(property_name) + "' property").c_str(), v8::NewStringType::kNormal).ToLocalChecked());
                return false;
            }
            if (!v->IsString())
            {
                isolate->ThrowException(v8::String::NewFromUtf8(isolate, ("The '" + std::string(property_name) + std::string("[") + std::to_string(i) +"]' property must be a string").c_str(), v8::NewStringType::kNormal).ToLocalChecked());
                return false;
            }
            v8::String::Utf8Value utf8Value(isolate, v);
            std::string str(*utf8Value, utf8Value.length());
            out_value.emplace_back(str);
        }
        return true;
    }

    bool get_map_string_property(v8::Isolate *isolate, v8::Local<v8::Object> &src, const char *property_name, std::map<std::string, std::string> &out_value)
    {
        v8::Local<v8::String> key = v8::String::NewFromUtf8(isolate, property_name, v8::NewStringType::kNormal).ToLocalChecked();
        v8::Local<v8::Value> value;
        v8::Local<v8::Context> context = isolate->GetCurrentContext();

        if (!src->Get(context, key).ToLocal(&value))
        {
            isolate->ThrowException(v8::String::NewFromUtf8(isolate, ("Failed to get '" + std::string(property_name) + "' property").c_str(), v8::NewStringType::kNormal).ToLocalChecked());
            return false;
        }
        if (!value->IsObject())
        {
            isolate->ThrowException(v8::String::NewFromUtf8(isolate, ("The '" + std::string(property_name) + "' property must be a object").c_str(), v8::NewStringType::kNormal).ToLocalChecked());
            return false;
        }
        auto obj = value.As<v8::Object>();
        auto keys = obj->GetPropertyNames(context).ToLocalChecked();

        for (int i = 0; i < keys->Length(); i++)
        {
            // key
            v8::Local<v8::Value> k;
            if (!keys->Get(context, i).ToLocal(&k))
            {
                isolate->ThrowException(v8::String::NewFromUtf8(isolate, ("Failed to get '" + std::string(property_name) + "' property").c_str(), v8::NewStringType::kNormal).ToLocalChecked());
                return false;
            }
            if (!k->IsString())
            {
                isolate->ThrowException(v8::String::NewFromUtf8(isolate, ("The '" + std::string(property_name) + std::string("[") + std::to_string(i) +"]' property must be a string").c_str(), v8::NewStringType::kNormal).ToLocalChecked());
                return false;
            }

            // value
            v8::Local<v8::Value> v;
            if (!obj->Get(context, k).ToLocal(&v))
            {
                isolate->ThrowException(v8::String::NewFromUtf8(isolate, ("Failed to get '" + std::string(property_name) + "' property").c_str(), v8::NewStringType::kNormal).ToLocalChecked());
                return false;
            }
            if (!v->IsString())
            {
                isolate->ThrowException(v8::String::NewFromUtf8(isolate, ("The '" + std::string(property_name) + std::string("[") + std::to_string(i) +"]' property must be a string").c_str(), v8::NewStringType::kNormal).ToLocalChecked());
                return false;
            }
            v8::String::Utf8Value utf8Value(isolate, k);
            std::string kr(*utf8Value, utf8Value.length());
            v8::String::Utf8Value utf8Value2(isolate, v);
            std::string vr(*utf8Value2, utf8Value2.length());
            out_value.emplace(kr, vr);
        }
        
        return true;
    }

    bool parse_wcc_options(v8::Isolate *isolate, v8::Local<v8::Object> &src, WCCOptions *result)
    {
        Local<v8::Context> context = isolate->GetCurrentContext();
        bool ret = get_boolean_property(isolate, src, "verbose", result->verbose) &&
                   get_boolean_property(isolate, src, "debug", result->debug) &&
                   get_boolean_property(isolate, src, "debugWXS", result->debugWXS) &&
                   get_boolean_property(isolate, src, "showNewTree", result->showNewTree) &&
                   get_boolean_property(isolate, src, "isPlugin", result->isPlugin) &&
                   get_boolean_property(isolate, src, "addTestAttre", result->addTestAttre) &&
                   get_boolean_property(isolate, src, "independent", result->independent) &&
                   get_boolean_property(isolate, src, "isCut", result->isCut) &&
                   get_boolean_property(isolate, src, "lazyload", result->lazyload) &&
                   get_string_property(isolate, src, "genfuncname", result->genfuncname) &&
                   get_string_property(isolate, src, "cwd", result->cwd) &&
                   get_string_property(isolate, src, "wxmlCompileConfig", result->wxmlCompileConfig) &&
                   get_string_property(isolate, src, "wxmlCompileConfigSplit", result->wxmlCompileConfigSplit) &&
                   get_string_property(isolate, src, "lazyloadConfig", result->lazyloadConfig) &&
                   get_vector_string_property(isolate, src, "files", result->files) &&
                   get_vector_string_property(isolate, src, "contents", result->contents) &&
                   get_map_string_property(isolate, src, "replaceContent", result->replaceContent);

        return ret;
    }
}