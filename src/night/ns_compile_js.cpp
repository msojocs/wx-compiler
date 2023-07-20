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
        // this->offset_48 = 
        this->compile(a3->offset_184);
        // v10 = v7 + v8;
        std::string v4 = "";
        // v4 = v10.append(v9);
        return v4;
    }
    std::string NSCompileJs::compile_call(night::ns_node *a3)
    {
        return "";
    }
    std::string NSCompileJs::compile_do_while(night::ns_node *a3)
    {
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
    std::string NSCompileJs::compile_k_v(night::ns_node *)
    {
        return "";
    }
    std::string NSCompileJs::compile_obj_dot(night::ns_node *)
    {
        return "";
    }
    std::string NSCompileJs::compile_obj_property(night::ns_node *)
    {
        return "";
    }
    std::string NSCompileJs::compile_obj_self_op(night::ns_node *)
    {
        return "";
    }
    std::string NSCompileJs::compile_op_self(night::ns_node *a3)
    {
        this->compile(a3->offset_192);
        for (auto i = a3->offset_196->begin(); i != a3->offset_196->end(); i++)
        {
            this->compile(*i);
        }
        
        return "";
    }
    std::string NSCompileJs::compile_switch(night::ns_node *)
    {
        return "";
    }
    std::string NSCompileJs::compile_ternary(night::ns_node *a3)
    {
        std::string v6 = this->compile(a3->offset_180);
        v6.append(":");
        // += v7
        this->offset_48++;
        this->compile(a3->offset_184);
        // += v7
        return "";
    }
    std::string NSCompileJs::compile_var(night::ns_node *)
    {
        return "";
    }
    std::string NSCompileJs::compile_while(night::ns_node *)
    {
        return "";
    }
    std::string NSCompileJs::compile_prog(night::ns_node *a3)
    {
        std::string v9 = a3->offset_108;
        if (v9.size() == 0)
        {
            v9 = ";";
        }
        auto v4 = a3->offset_228;
        int v6 = 0;
        for (auto i = v4->begin(); i != v4->end(); i++)
        {
            this->compile(*i);
            v6++;
            if (v6 != v4->size())
            {
                // +=
                this->offset_48 += v9.size();
            }
        }
        return "";
        
    }
    
    std::string NSCompileJs::compile_prog_no_sem(night::ns_node *a3)
    {
        if (night::NS_TYPE_OBJ_BLOCK == a3->offset_0)
        {
            // +=
            this->offset_48++;
        }
        for (auto i = a3->offset_228->begin(); i != a3->offset_228->end(); i++)
        {
            this->compile(*i);
            // +=
        }
        if (night::NS_TYPE_OBJ_BLOCK == a3->offset_0)
        {
            // +=
            this->offset_48++;
        }
        return "";
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
                    // TODO...
                    return "";
                }
                if (v9 == night::NS_TYPE_STR)
                {
                    // TODO...
                    return "";
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