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

        this->compile(a3->offset_184);
        // v10 = v7 + v8;
        std::string v4 = "";
        // v4 = v10.append(v9);
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
                if (i >= v3.size())
                    break;
                auto v4 = v3.at(i);
                if (v4->begin() != v4->end())
                {
                    if (
                        v4->size() != 1
                        || (v4->at(0)->offset_0 != night::NS_TYPE_SKIP)
                    )
                    {
                        str += "(\000)\000{"; // 待确认

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
            for (int i = 0; i < a3->offset_224.size(); i++)
            {
                str += "(\000)\000{";
                this->offset_48++;
                auto v12 = a3->offset_224[i];
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
        std::string str = "";
        str += "do";
        // 要确认加的长度是str还是"do"的

        return "";
    }
    std::string NSCompileJs::compile_for(night::ns_node *a3)
    {
        return "";
    }
    std::string NSCompileJs::compile_function(night::ns_node *a3)
    {
        return "";
    }
    std::string NSCompileJs::compile_if(night::ns_node *a3)
    {
        return "";
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
        this->compile(a3->offset_192);
        for (auto i = a3->offset_196->begin(); i != a3->offset_196->end(); i++)
        {
            this->compile(*i);
            // TODO...
        }
        
        return "";
    }
    std::string NSCompileJs::compile_switch(night::ns_node *)
    {
        return "";
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
    std::string NSCompileJs::compile_var(night::ns_node *)
    {
        return "";
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
            result += "(\000)\000{";
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
        a3 = v9;
        return this->offset_0;
    }

}