#include "../include/night.h"

namespace night
{
    
    NSCompileJs::NSCompileJs(/* args */)
    {
    }
    
    NSCompileJs::~NSCompileJs()
    {
    }
    
    std::string NSCompileJs::compile_assign(night::ns_node * a3)
    {
        return this->compile_binary(a3);
    }
    std::string NSCompileJs::compile_binary(night::ns_node *a3)
    {
        this->compile(a3->offset_180);
        std::string v10 = " " + a3->offset_156;
        std::string v3 = v10.append(" ");
        this->offset_48 += v3.length();

        std::string v7 = this->compile(a3->offset_184);
        std::string v4 = "";
        v4 = v7 + v3;
        // v4.append(v9);
        return v4;
    }
    std::string NSCompileJs::compile_call(night::ns_node *a3)
    {
        std::string str;
        str = this->compile(a3->offset_220); 
        if ("return" == a3->offset_220->offset_60)
        {
            auto v3 = a3->offset_224;
            for (int i = 0; ; i++)
            {
                if (i >= v3->size())
                    break;
                auto v4 = v3->at(i);
                if (v4->begin() != v4->end())
                {
                    if (
                        v4->size() != 1
                        || (v4->at(0)->offset_0 != night::NS_TYPE_SKIP)
                    )
                    {
                        str += "("; // 待确认

                        this->offset_48++;
                        for (int v19 = 0; v19 < v4->size(); v19++)
                        {
                            auto v9 = v4->at(v19);
                            str += this->compile(v9);
                            if (v19 + 1 != v4->size())
                            {
                                str += ",";
                                this->offset_48++;
                            }
                        }
                        str += 5580790; // TODO...待确认
                        this->offset_48++;

                    }
                }
            }
            
        }
        else
        {
            for (int i = 0; i < a3->offset_224->size(); i++)
            {
                str += "(";
                this->offset_48++;
                auto v12 = a3->offset_224->at(i);
                for (int j = 0; j < v12->size(); j++)
                {
                    str += this->compile(v12->at(j));
                    if (j + 1 != v12->size())
                    {
                        str += ",";
                        this->offset_48++;
                    }
                }
                str += 5580790;
                this->offset_48++;
            }
            
        }
        return str;
    }
    std::string NSCompileJs::compile_do_while(night::ns_node *a3)
    {
        std::string result = "";
        result += "do";
        this->offset_48 += 2;
        result += this->compile(a3->offset_216);

        result += "while(";
        this->offset_48 += 6;
        result += this->compile(a3->offset_204);

        result += ");";
        this->offset_48 += 2;

        return result;
    }
    std::string NSCompileJs::compile_for(night::ns_node *a3)
    {
        std::string result = "";
        result += "for(";
        this->offset_48 += 4;

        auto v3 = a3->offset_228;
        if (v3->size() != 3)
        {
            throw "error : sys error for compile_for";
        }
        result += this->compile(v3->at(0));
        result += ";";
        this->offset_48++;

        result += this->compile(v3->at(1));
        result += ";";
        this->offset_48++;

        result += this->compile(v3->at(2));
        result += 5580790;
        this->offset_48++;

        result += this->compile(a3->offset_216);

        return result;
    }
    std::string NSCompileJs::compile_function(night::ns_node *a3)
    {
        // compile_function - 0
        std::string result = "";
        if (a3->offset_132.length())
        {
            result += "function ";
            this->offset_48 += 9;

            night::ns_sourcemap v43;
            v43.offset_0.assign(a3->offset_24);
            v43.offset_24 = a3->offset_48;
            v43.offset_28 = a3->offset_52;
            v43.offset_32.assign(a3->offset_132);
            v43.offset_56 = a3->offset_48;
            v43.offset_60 = this->offset_48;

            this->offset_36.push_back(v43);
            result += a3->offset_132;
            this->offset_48 += a3->offset_132.length();

        }
        else
        {
            result += "(function ";
            this->offset_48 += 10;
        }
        // compile_function - 5
        result += "(";
        this->offset_48++;
        auto v4 = a3->offset_244;
        bool v29 = false;
        for (int i = 0; i < v4->size(); i++)
        {
            auto v5 = v4->at(i);
            if (night::NS_TYPE_VAR == v5->offset_0)
            {
                result += v5->offset_60;
                this->offset_48 += v5->offset_60.length();
            }
            else
            {
                result += v5->offset_180->offset_60;
                v29 = true;
                this->offset_48 += v5->offset_180->offset_60.length();
            }
            if (i + 1 != v4->size())
            {
                result += ",";
                this->offset_48++;
            }
        }
        // compile_function - 10
        result += 5580790;
        this->offset_48++;
        if (v29)
        {
            result += 5580792;
            this->offset_48++;
            auto v10 = a3->offset_244;
            for (int i = 0; i < v10->size(); i++)
            {
                auto cur = v10->at(i);
                if (night::NS_TYPE_ASSIGN == cur->offset_0)
                {
                    std::string v41 = cur->offset_180->offset_60;
                    v41.append("=undefined===");
                    v41.append(v41);
                    v41.append("?");
                    result += v41;
                    this->offset_48 += v41.length();

                    result += this->compile(cur->offset_184);
                    std::string v43 = ":" + cur->offset_180->offset_60;
                    v43.append(";");
                    result += v43;
                    this->offset_48 += v43.length();
                }
            }
            
        }
        // compile_function - 15
        std::string v37 = this->compile(a3->offset_216);
        std::string v38;
        if (v29)
        {
            std::string v38;
            if (v37.find("arguments") != -1)
            {
                std::string v41 = "arguments." + night::nsv_;
                v41.append("length=arguments.length;");
                v38 = v41;
                result += v38;
                this->offset_48 += v38.length();
            }
            result += v37.substr(1);
            this->offset_48--;
            for (int i = 0; i < this->offset_36.size(); i++)
            {
                auto v18 = this->offset_36[i];
                auto v27 = v38.length() + v18.offset_60 - 1;
                v18.offset_60 = v27;
            }

            goto LABEL_31;
        }
        // compile_function - 20
        if (v37.find("arguments") != -1)
        {
            std::string v41 = "{arguments." + night::nsv_;
            v41.append("length=arguments.length;");
            v38 = v41;
            result += v38;
            this->offset_48 += v38.length();

            result += v37.substr(1);
            this->offset_48--;
            for (int i = 0; i < this->offset_36.size(); i++)
            {
                auto v18 = this->offset_36[i];
                auto v27 = v38.length() + v18.offset_60 - 1;
                v18.offset_60 = v27;
            }
            goto LABEL_31;
        }

        // compile_function - 25
        result += v37;
        LABEL_31:
        if (!a3->offset_132.length())
        {
            result += 5580790;
            this->offset_48++;
        }
        return result;
    }
    std::string NSCompileJs::compile_if(night::ns_node *a3)
    {
        std::string result = "";
        result += "if ";
        this->offset_48 += 3;

        result += this->compile(a3->offset_204);
        result += this->compile(a3->offset_208);
        result += a3->offset_108;
        this->offset_48 += a3->offset_108.length();

        if (a3->offset_212)
        {
            std::string v5 = " else ";
            result += v5;
            this->offset_48 += v5.length();
            result += this->compile(a3->offset_212);
        }
        return result;
    }
    std::string NSCompileJs::compile_k_v(night::ns_node * a3)
    {
        std::string result = "";
        result += this->compile(a3->offset_188) + ":";
        this->offset_48++;
        result += this->compile(a3->offset_192) + ",";
        this->offset_48++;
        return result;
    }
    std::string NSCompileJs::compile_obj_dot(night::ns_node * a3)
    {
        std::string result = "";
        result += this->compile(a3->offset_192);
        for (int i = 0; i < a3->offset_196->size(); i++)
        {
            result += ".";
            this->offset_48++;
            auto v3 = a3->offset_196->at(i);
            result += this->compile(v3);
        }
        
        return result;
    }
    std::string NSCompileJs::compile_obj_property(night::ns_node *)
    {
        // TODO...
        return "";
    }
    std::string NSCompileJs::compile_obj_self_op(night::ns_node *a3)
    {
        std::string result = "";
        if (a3->offset_200)
        {
            result += a3->offset_156;
            this->offset_48 += a3->offset_156.length();
            result += this->compile(a3->offset_192);
        }
        else
        {
            std::string v7 = this->compile(a3->offset_192);
            v7.append(a3->offset_156);
            result += v7;
            this->offset_48 += a3->offset_156.length();
        }
        return result;
    }
    std::string NSCompileJs::compile_op_self(night::ns_node *a3)
    {
        std::string result = "";
        result += a3->offset_156;
        this->offset_48 += a3->offset_156.length();
        result += this->compile(a3->offset_192);
        return result;
    }
    std::string NSCompileJs::compile_switch(night::ns_node *a3)
    {
        std::string result = "";
        result += "switch(";
        this->offset_48 += 7;
        result += this->compile(a3->offset_204);
        result += "){";
        this->offset_48 += 2;

        auto v232 = a3->offset_232;
        for (int i = 0; i < v232->size(); i++)
        {
            result += "case ";
            this->offset_48 += 5;
            result += this->compile(v232->at(i));
            result.append(":");
            this->offset_48++;
            auto v6 = a3->offset_236->at(i);
            for (int j = 0; j < v6->size(); j++)
            {
                auto v8 = v6->at(j);
                result += this->compile(v8);
                result += ";";
                this->offset_48++;
            }
        }

        // 240
        for (int i = 0; i < a3->offset_240->size(); i++)
        {
            if (!i)
            {
                result += "default:";
                this->offset_48 += 8;
            }
            auto v10 = a3->offset_240->at(i);
            result += this->compile(v10);
            result.append(";");
            this->offset_48++;
        }
        result += "}";
        this->offset_48++;
        
        return result;
    }
    std::string NSCompileJs::compile_ternary(night::ns_node *a3)
    {
        std::string result = "";
        std::string v6 = this->compile(a3->offset_180);
        v6.append(":");
        result += v6;
        this->offset_48++;
        result += this->compile(a3->offset_184);
        return result;
    }
    std::string NSCompileJs::compile_var(night::ns_node *a3)
    {
        std::string result = "";
        if (a3->offset_56)
        {
            result = "var ";
        }
        this->offset_48 += result.length();
        std::string v11 = a3->offset_60.substr(0, 3);
        bool v6 = false;
        if (
            v11 != night::nsv_
            && "return" != a3->offset_60
            && "delete" != a3->offset_60
        )
        {
            v6 = "void" != a3->offset_60;
        }
        if (v6)
        {
            throw "error : sys error for compile_var `" + a3->offset_60 + "`";
        }
        night::ns_sourcemap _v11;
        _v11.offset_0 = a3->offset_24;
        _v11.offset_24 = a3->offset_48;
        _v11.offset_28 = a3->offset_52;
        _v11.offset_32 = a3->offset_60;
        _v11.offset_56 = a3->offset_48;
        _v11.offset_60 = a3->offset_48;
        this->offset_36.push_back(_v11);

        this->offset_48 += a3->offset_60.length();
        result += a3->offset_60;

        return result;
    }
    std::string NSCompileJs::compile_while(night::ns_node * a3)
    {
        std::string result = "";
        std::string v5 = "while(";
        result += v5;
        this->offset_48 += v5.length();
        result += this->compile(a3->offset_204);
        result += 5580790;
        this->offset_48++;

        result += this->compile(a3->offset_216);
        return result;
    }
    std::string NSCompileJs::compile_prog(night::ns_node *a3)
    {
        std::string result = "";
        std::string v9 = a3->offset_108;
        if (v9.size() == 0)
        {
            v9 = ";";
        }
        auto v4 = a3->offset_228;
        int v6 = 0;
        for (auto i = v4->begin(); i != v4->end(); i++)
        {
            result += this->compile(*i);
            v6++;
            if (v6 != v4->size())
            {
                result += v9;
                this->offset_48 += v9.size();
            }
        }
        return result;
        
    }
    
    std::string NSCompileJs::compile_prog_no_sem(night::ns_node *a3)
    {
        std::string result = "";
        if (night::NS_TYPE_OBJ_BLOCK == a3->offset_0)
        {
            result += "(";
            this->offset_48++;
        }
        for (auto i = a3->offset_228->begin(); i != a3->offset_228->end(); i++)
        {
            result += this->compile(*i);
            
        }
        if (night::NS_TYPE_OBJ_BLOCK == a3->offset_0)
        {
            result += 5580790;
            this->offset_48++;
        }
        return result;
    }
    
    std::string NSCompileJs::compile(night::ns_node * a3)
    {
        if (this->offset_0.size() == 0)
        {
            std::string v9 = a3->offset_0;
            if (night::NS_TYPE_SKIP == v9)
            {
                return "";
            }
            if (v9 != night::NS_TYPE_NUM)
            {
                if (v9 == night::NS_TYPE_BOOL)
                {
                    night::ns_sourcemap v13;
                    v13.offset_0.assign(a3->offset_24);
                    v13.offset_32.assign(a3->offset_60);
                    v13.offset_24 = a3->offset_48;
                    v13.offset_28 = a3->offset_52;
                    v13.offset_56 = a3->offset_48;
                    v13.offset_60 = a3->offset_48;

                    this->offset_36.push_back(v13);
                    std::string v10 = a3->offset_60;
                    this->offset_48 += v10.length();
                    return v10;
                }
                if (v9 == night::NS_TYPE_STR)
                {
                    std::string v13 = a3->offset_108 + a3->offset_60;
                    v13.append(a3->offset_108);
                    this->offset_48 += v13.length();
                    return v13;
                }
                if (v9 != night::NS_TYPE_B_TYPE && v9 != night::NS_TYPE_PUNC)
                {
                    if (v9 != night::NS_TYPE_KW)
                    {
                        std::string result = "";
                        if (v9 == night::NS_TYPE_VAR)
                        {
                            result = this->compile_var(a3);
                        }
                        else if (v9 == night::NS_TYPE_K_V)
                        {
                            result = this->compile_k_v(a3);
                        }
                        else if (v9 == night::NS_TYPE_IF)
                        {
                            result = this->compile_if(a3);
                        }
                        else if (v9 == night::NS_TYPE_FOR)
                        {
                            result = this->compile_for(a3);
                        }
                        else if (v9 == night::NS_TYPE_WHILE)
                        {
                            result = this->compile_while(a3);
                        }
                        else if (v9 == night::NS_TYPE_DO_WHILE)
                        {
                            result = this->compile_do_while(a3);
                        }
                        else if (v9 == night::NS_TYPE_SWITCH)
                        {
                            result = this->compile_switch(a3);
                        }
                        else if (v9 == night::NS_TYPE_OBJ_SELF_OP)
                        {
                            result = this->compile_obj_self_op(a3);
                        }
                        else if (v9 == night::NS_TYPE_OBJ_PROPERTY)
                        {
                            result = this->compile_obj_property(a3);
                        }
                        else if (v9 == night::NS_TYPE_OBJ_DOT)
                        {
                            result = this->compile_obj_dot(a3);
                        }
                        else if (v9 == night::NS_TYPE_OP_SELF)
                        {
                            result = this->compile_op_self(a3);
                        }
                        else if (v9 == night::NS_TYPE_TERNARY)
                        {
                            result = this->compile_ternary(a3);
                        }
                        else if (v9 == night::NS_TYPE_BINARY || v9 == night::NS_TYPE_ASSIGN)
                        {
                            result = this->compile_binary(a3);
                        }
                        else if (v9 == night::NS_TYPE_FUNC)
                        {
                            result = this->compile_function(a3);
                        }
                        else if (v9 == night::NS_TYPE_CALL)
                        {
                            result = this->compile_call(a3);
                        }
                        else if (v9 == night::NS_TYPE_PROG)
                        {
                            result = this->compile_prog(a3);
                        }
                        else if (v9 == night::NS_TYPE_PROG_NO_SEM
                        || v9 == night::NS_TYPE_PROG_NO_SEM_REQUIRE
                        || v9 == night::NS_TYPE_OBJ_BLOCK
                        || v9 == night::NS_TYPE_ARRAY
                        || v9 == night::NS_TYPE_BRACKET)
                        {
                            result = this->compile_prog_no_sem(a3);
                        }
                        else
                        {
                            this->offset_0.assign(a3->offset_0);
                        }
                        return result;
                    }
                    std::string v10;
                    if ("this" == a3->offset_60)
                    {
                        v10 = "(this.constructor===Window?{}:this)";
                        this->offset_48++;
                    }
                    else
                    {
                        v10.assign(a3->offset_60);
                    }
                    night::ns_sourcemap v13;
                    v13.offset_0 = a3->offset_24;
                    std::string v18 = a3->offset_60;
                    this->offset_36.push_back(v13);
                    bool v5 = "this" == a3->offset_60;
                    this->offset_48 = !v5 + v10.size() + this->offset_48 - 1;
                    return v10;
                }
            }
            this->offset_48 += a3->offset_60.size();
            return a3->offset_60;
        }
        return "";
    }

    std::string NSCompileJs::compile_once(std::string &a3, std::vector<std::string> *a4, bool a5)
    {
        this->offset_28 = a4;
        a3 = "";
        night::ns_node* v5 = this->offset_24->top_down();
        if (a5)
        {
            std::string ret = v5->debug_no_space();
            printf("ast :%s\n", ret.data());
        }
        std::string v9 = this->compile(v5);
        a3.assign(v9);
        return this->offset_0;
    }

}