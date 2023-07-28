#include "../include/night.h"

namespace night
{

    NSASTParse::NSASTParse(/* args */)
    {
    }

    NSASTParse::NSASTParse(std::string a2, night::NSToken *a3, night::NSGod *a4)
    {
        this->offset_0 = a2;
        this->offset_24 = a4;
        this->offset_28 = a3;
        this->offset_36 = 0;
        this->offset_40 = 0;
        this->offset_44 = "";
    }

    NSASTParse::~NSASTParse()
    {
    }

    bool NSASTParse::is_op(std::string const &a2)
    {
        auto v2 = this->offset_28->peek();
        if (v2)
        {
            if (night::NS_TYPE_OP == v2->offset_0)
            {
                if (a2.length() && a2 != v2->offset_60)
                    return 0;
            }
            else
            {
                return 0;
            }
        }
        return true;
    }
    bool NSASTParse::is_op_or_comma(std::string const &a2)
    {
        bool result = this->is_punctuation(",");
        if (!result)
        {
            return this->is_op(a2);
        }
        return result;
    }

    night::ns_node *NSASTParse::ast_obj_block()
    {
        auto v13 = this->offset_24;
        auto v12 = v13->gen_girl(night::std_v_n);
        this->ignore_punc("{");

        auto v25 = v13->gen_son(night::NS_TYPE_PUNC);
        v25->offset_60 = "{";
        v12.vec->push_back(v25);
        auto v15 = this->is_punctuation("}");

        auto v1 = v15 == nullptr;

        LABEL_2:
        if (v1)
        {
            while(true)
            {
                auto v2 = this->offset_28->next();
                if (
                    !v2
                    || night::NS_TYPE_VAR != v2->offset_0
                    && night::NS_TYPE_STR != v2->offset_0
                )
                {
                    std::string msg = "Expected variable|string";
                    this->offset_28->err(msg, 0, 0, false);
                }
                if (night::NS_TYPE_STR == v2->offset_0)
                {
                    std::string v26 = night::nsv_ + v2->offset_60;
                    v2->offset_60 = v26;
                }
                this->ignore_punc(":");
                auto v10 = this->ast_expression_no_comma();
                v25 = this->offset_24->gen_son(night::NS_TYPE_K_V);
                v25->offset_188 = v2;
                v25->offset_192 = v10;
                v12.vec->push_back(v25);

                auto v4 = this->offset_28->peek();
                if (!v4)
                {
                    std::string msg = "Expected variable|string";
                    this->offset_28->err(msg, 0, 0, false);
                }
                if ("}" == v4->offset_60)
                {
                    break;
                }
                if ("," == v4->offset_60)
                {
                    this->offset_28->next();
                    auto v5 = this->offset_28->peek();
                    if (!v5)
                    {
                        std::string msg = "Expected variable|string";
                        this->offset_28->err(msg, 0, 0, false);
                    }
                    v1 = "}" != v5->offset_60;
                    goto LABEL_2;
                }
            }
        }

        this->ignore_punc("}");

        v25 = this->offset_24->gen_son(night::NS_TYPE_PUNC);
        v25->offset_60 = "}";
        v12.vec->push_back(v25);

        v25 = this->offset_24->gen_son(night::NS_TYPE_OBJ_BLOCK);
        v25->offset_228 = v12.vec;
        v25->offset_108 = "";

        auto v7 = this->offset_28->peek();
        if (!v7)
        {
            return this->make_call_or_just_expression(v25);
        }
        if ("[" != v7->offset_60)
        {
            if ("." == v7->offset_60)
            {
                auto v8 = this->ast_obj_dot(v25);
                return this->make_call_or_just_expression(v8);
            }
            return this->make_call_or_just_expression(v25);
        }
        auto v8 = this->ast_obj_op(v25);
        return this->make_call_or_just_expression(v8);

        // throw "not implement";
    }
    night::ns_node *NSASTParse::ast_code_block()
    {
        auto lbp = this->make_list_by_parser("{", "}", ";", "ast_expression", true, -1, "");
        auto v10 = this->offset_24->gen_girl(night::std_v_n);
        auto v15 = this->offset_24->gen_son(night::NS_TYPE_PUNC);
        v15->offset_60 = "{";
        v10.vec->push_back(v15);

        if (lbp->begin() != lbp->end())
        {
            v15 = this->offset_24->gen_son(night::NS_TYPE_PROG);
            v15->offset_228 = lbp;
            v15->offset_108 = "";
            v10.vec->push_back(v15);
        }
        v15 = this->offset_24->gen_son(night::NS_TYPE_PUNC);
        v15->offset_60 = "}";
        v10.vec->push_back(v15);

        v15 = this->offset_24->gen_son(night::NS_TYPE_PROG_NO_SEM);
        v15->offset_228 = v10.vec;
        v15->offset_108 = "";
        
        return this->make_call_or_just_expression(v15);
    }
    night::ns_node *NSASTParse::ast_new_array()
    {
        throw "not implement";
    }

    night::ns_node *NSASTParse::ast_obj_op_self(night::ns_node *a2)
    {
        auto v14 = this->offset_24;
        auto v15 = v14->gen_son(night::NS_TYPE_OBJ_SELF_OP);
        v15->offset_200 = a2 == nullptr;
        v15->offset_156 = "";
        v15->offset_192 = 0;
        auto v2 = this->offset_28->next();
        if (!v2)
        {
            std::string msg = "End of file";
            this->offset_28->err(msg, 0, 0, false);
        }
        auto v3 = v2->offset_60;
        auto v7 = v2->offset_84;
        if (a2)
        {
            v15->offset_192 = a2;
            v15->offset_156.assign(v3);
            v15->offset_84.assign(v7);
        }
        else
        {
            v15->offset_156.assign(v3);
            v15->offset_84.assign(v7);
            auto v12 = this->offset_28->peek();
            if (!v12)
            {
                std::string msg = "End of file";
                this->offset_28->err(msg, 0, 0, false);
            }
            if (night::NS_TYPE_VAR != v12->offset_0)
            {
                std::string msg = "Unexpected token `" + v12->offset_60 + "`";
                this->offset_28->err(msg, 0, 0, false);
            }
            auto v13 = this->ast_expression_no_comma();
            if (night::NS_TYPE_OBJ_SELF_OP == v13->offset_0)
            {
                auto v10 = this->offset_24->gen_son(night::NS_TYPE_OP);
                v10->offset_60.assign(v13->offset_156);
                v10->offset_84.assign(v13->offset_84);
                this->offset_28->push(v10);
                v15->offset_192 = v13->offset_192;
            }
            else
            {
                v15->offset_192 = v13;
            }
        }
        return v15;
    }

    night::ns_node *NSASTParse::ast_op_self()
    {
        throw "not implement";
    }
    night::ns_node *NSASTParse::ast_if()
    {
        throw "not implement";
    }
    night::ns_node *NSASTParse::ast_for()
    {
        throw "not implement";
    }
    night::ns_node *NSASTParse::ast_while()
    {
        throw "not implement";
    }
    night::ns_node *NSASTParse::ast_do_while()
    {
        throw "not implement";
    }
    night::ns_node *NSASTParse::ast_switch()
    {
        throw "not implement";
    }
    bool NSASTParse::is_obj_op_self(bool a3)
    {
        if (a3)
        {
            auto v3 = this->offset_28->peek();
            if (v3)
            {
                if (v3->offset_84.find('\n') != -1)
                {
                    return 0;
                }
            }
        }
        bool result = true;
        if (!this->is_op("++"))
        {
            result = this->is_op("--") != 0;
        }
        return result;
    }
    bool NSASTParse::is_op_self(bool a3)
    {
        auto v3 = this->offset_28->peek();
        if (!v3)
        {
            return false;
        }
        bool v6 = night::NS_TYPE_OP == v3->offset_0;
        if (!v6)
        {
            return false;
        }
        if (v3->offset_60.find_first_not_of(night::NS_BUILTIN_OP_SELF) == -1)
        {
            return v6;
        }
        if (!a3 || night::NS_TYPE_OP != v3->offset_0)
        {
            return false;
        }
        if ("-" != v3->offset_60)
        {
            return "+" == v3->offset_60;
        }
        return v6;
    }
    night::ns_node *NSASTParse::ast_dispatch(bool a3)
    {
        // ast_dispatch - 0
        auto v42 = this->is_punctuation("(");
        if (!v42)
        {
            auto v67 = this->offset_44;
            this->offset_44 = "";
            auto v45 = this->is_punctuation("{");
            if (v45)
            {
                auto v28 = this->offset_28->next();
                auto v37 = this->offset_28->next();
                auto v31 = this->offset_28->next();
                int v46 = 0;
                if (v37)
                {
                    if (night::NS_TYPE_VAR == v37->offset_0 || (v46 = night::NS_TYPE_STR == v37->offset_0))
                    {
                        v46 = 0;
                        if (v31)
                        {
                            v46 = night::NS_TYPE_PUNC == v31->offset_0;
                            if (v46)
                            {
                                v46 = ":" == v31->offset_60;
                            }
                        }
                    }
                    if (night::NS_TYPE_PUNC == v37->offset_0)
                    {
                        if ("}" == v37->offset_0)
                        {
                            v46 = true;
                        }
                    }
                }
                this->offset_28->push(v31);
                this->offset_28->push(v37);
                this->offset_28->push(v28);
                if (v46)
                {
                    auto v11 = this->ast_obj_block();
                LABEL_113:
                    auto v65 = this->make_call_or_just_expression(v11);
                    return v65;
                }
                if (!v67.length() || "op not=" != v67)
                {
                    auto v11 = this->ast_code_block();
                    return this->make_call_or_just_expression(v11);
                }
            }
            auto v47 = this->is_punctuation("[");
            if (v47)
            {
                auto v11 = this->ast_new_array();
                return this->make_call_or_just_expression(v11);
            }
            if (this->is_obj_op_self(false))
            {
                auto v11 = this->ast_obj_op_self(0);
                return this->make_call_or_just_expression(v11);
            }
            if (this->is_op_self(false))
            {
                auto v11 = this->ast_op_self();
                return this->make_call_or_just_expression(v11);
            }
            bool is_op_self = false;
            if (this->is_buildin_keywords("if"))
            {
                auto v11 = this->ast_if();
                return this->make_call_or_just_expression(v11);
            }
            if (this->is_buildin_keywords("for"))
            {
                auto v11 = this->ast_for();
                return this->make_call_or_just_expression(v11);
            }
            if (this->is_buildin_keywords("while"))
            {
                auto v11 = this->ast_while();
                return this->make_call_or_just_expression(v11);
            }
            if (this->is_buildin_keywords("do"))
            {
                auto v11 = this->ast_do_while();
                return this->make_call_or_just_expression(v11);
            }
            if (this->is_buildin_keywords("switch"))
            {
                auto v11 = this->ast_switch();
                return this->make_call_or_just_expression(v11);
            }
            bool v21 = false;
            if (this->is_buildin_keywords("true"))
            {
            }
            else
            {

                if (this->is_buildin_keywords("false"))
                {
                }
                else
                {

                    if (this->is_buildin_keywords("null"))
                    {
                    }
                    else
                    {

                        if (this->is_buildin_keywords("undefined"))
                        {
                        }
                        else
                        {

                            if (this->is_buildin_keywords("NaN"))
                            {
                            }
                            else
                            {

                                if (this->is_buildin_keywords("Infinity"))
                                {
                                }
                                else
                                {

                                    if (this->is_buildin_keywords("return"))
                                    {
                                    }
                                    else
                                    {

                                        if (this->is_buildin_keywords("delete"))
                                        {
                                        }
                                        else
                                        {

                                            if (this->is_buildin_keywords("void"))
                                            {
                                            }
                                            else
                                            {

                                                if (!this->is_buildin_keywords("typeof"))
                                                {

                                                    if (!this->is_buildin_keywords("this"))
                                                    {
                                                        v21 = true;
                                                        if (!this->is_buildin_keywords("arguments"))
                                                        {
                                                            v21 = true;
                                                            if (!this->is_buildin_keywords("break"))
                                                            {
                                                                v21 = this->is_buildin_keywords("continue") != 0;
                                                            }
                                                        }
                                                    }
                                                    else
                                                    {
                                                        is_op_self = true;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } // end check for "true"
            // v21 = false;
            if (v21)
            {
                auto v11 = this->ast_trans_kw();
                return this->make_call_or_just_expression(v11);
            }
            if (this->is_buildin_keywords("require"))
            {
                auto v11 = this->ast_require();
                return this->make_call_or_just_expression(v11);
            }
            if (this->is_buildin_keywords("var"))
            {
                auto v11 = this->ast_var();
                return this->make_call_or_just_expression(v11);
            }
            if (this->is_buildin_keywords("function"))
            {
                auto v11 = this->ast_function();
                return this->make_call_or_just_expression(v11);
            }
            
            if (this->is_punctuation(";"))
            {
                auto v12 = this->offset_24->gen_son(night::NS_TYPE_SKIP);
                return this->make_call_or_just_expression(v12);
            }
            auto v59 = this->offset_28->next();
            if (!v59)
            {
                this->offset_28->err("End of file", 0, 0, false);
            }
            if (
                night::NS_TYPE_VAR != v59->offset_0
                && night::NS_TYPE_NUM != v59->offset_0
                && night::NS_TYPE_STR != v59->offset_0
            )
            {
                auto v39 = v59->offset_60;
                if (night::NS_TYPE_B_TYPE != v59->offset_0)
                {

                }
                if (
                    "Number" != v39
                    && "Math" != v39
                    && "Date" != v39
                )
                {
                    auto v11 = v59;
                    return this->make_call_or_just_expression(v11);
                }
                auto v14 = this->offset_28->peek();
                if (!v14)
                {
                    auto v11 = v59;
                    return this->make_call_or_just_expression(v11);
                }
                auto v41 = v14->offset_60;
                if ("[" != v41)
                {
                    if ("." == v41)
                    {
                        auto v11 = this->ast_obj_dot(v59);
                        return this->make_call_or_just_expression(v11);  
                    }
                    auto v11 = v59;
                    return this->make_call_or_just_expression(v11);
                }
                auto v11 = this->ast_obj_op(v59);
                return this->make_call_or_just_expression(v11);
            }

            auto v13 = this->offset_28->peek();
            if (v13)
            {
                    
                auto v40 = v13->offset_60;
                if ("[" == v40)
                {
                    auto v11 = this->ast_obj_op(v59);
                    return this->make_call_or_just_expression(v11);
                }
                if ("." == v40)
                {
                    auto v11 = this->ast_obj_dot(v59);
                    return this->make_call_or_just_expression(v11);   
                }
            }
            if (this->is_obj_op_self(true))
            {
                auto v11 = this->ast_obj_op_self(v59);
                return this->make_call_or_just_expression(v11);
            }
            auto v11 = v59;
            return this->make_call_or_just_expression(v11);
            
        }
        // ast_dispatch - 5
        auto v43 = this->offset_24;
        auto v44 = v43->gen_girl(night::std_v_n);
        auto v79 = v43->gen_son(night::NS_TYPE_PUNC);
        v79->offset_60 = "(";
        v44.vec->push_back(v79);
        this->offset_28->next();
        auto v80 = this->ast_expression(); // 待确认
        // ast_dispatch - 10
        if (!this->is_exp(v80))
        {
            if (night::NS_TYPE_ASSIGN != v80->offset_0)
            {
                auto v3 = this->offset_28->offset_4;
                auto v61 = this->offset_28;
                int v27 = v3->offset_52;
                int v30 = v3->offset_56;
                std::string v81 = "Unexpected statement[" + v80->offset_0 + "]";
                this->offset_28->err(v81, v27, v30, 1);
            }
        }
        v44.vec->push_back(v80);
        this->ignore_punc(")"); // 参数待确认
        v79 = this->offset_24->gen_son(night::NS_TYPE_PUNC);
        v79->offset_60 = ")";
        v44.vec->push_back(v79);
        v79 = this->offset_24->gen_son(night::NS_TYPE_BRACKET);
        v79->offset_228 = v44.vec;
        v79->offset_108 = "";
        auto v6 = this->offset_28->peek();
        // ast_dispatch - 15
        if (v6)
        {
            auto v64 = v6->offset_60;
            if ("[" == v64)
            {
                auto v7 = this->ast_obj_op(v79);
                return this->make_call_or_just_expression(v7);
            }
            if ("." == v64)
            {

                auto v7 = this->ast_obj_dot(v79);
                return this->make_call_or_just_expression(v7);
            }
        }
        // ast_dispatch - 20
        return this->make_call_or_just_expression(v79);
    }
    
    std::vector<night::ns_node *>* NSASTParse::make_list_by_parser(
        std::string const& a2,
        std::string const& a3,
        std::string const& a4,
        std::string const& a5,
        bool a6,
        int a7,
        std::string a8
        )
    {
        auto v18 = this->offset_24->gen_girl(night::std_v_n);
        this->ignore_punc(a2);
        int v14 = 0;
        for (int i = 1; !this->offset_28->eof() && ! this->is_punctuation(a3); i = 0)
        {
            if (!i)
            {
                if (a6)
                {
                    this->ignore_punc_pass_sem(a4);
                }
                else
                {
                    this->ignore_punc(a4);
                }
                v14++;
            }
            if (this->is_punctuation(a3))
            {
                break;
            }
            if ("ast_expression_no_comma" == a5)
            {
                if ("ast_new_array" == a8)
                {
                    if (this->is_punctuation(a4))
                    {
                        auto v20 = this->offset_24->gen_son(night::NS_TYPE_SKIP);
                        v18.vec->push_back(v20);
                        continue;
                    }
                }
                auto v20 = this->ast_expression_no_comma();
                v18.vec->push_back(v20);
            }
            else if ("ast_expression" == a5)
            {
                auto v20 = this->ast_expression();
                v18.vec->push_back(v20);
            }
            else
            {
                if ("ast_varname" != a5)
                {
                    v18.vec->push_back(nullptr); // TODO...待确认
                    continue;
                }
                auto v20 = this->ast_varname();
                v18.vec->push_back(v20);
            }
        }
        if (a7 != -1 && v14 != a7)
        {
            return 0;
        }
        this->ignore_punc(a3);
        return v18.vec;
        
    }

    night::ns_node *NSASTParse::make_binary_or_just_value(night::ns_node * a2, bool a3)
    {
        bool v21;
        bool v18;
        if (a3)
        {
            v21 = this->is_op("");
            v18 = a3;
        }
        else
        {
            v21 = this->is_op_or_comma("");
            v18 = false;
        }
        
        if (
            v21
            && !this->is_op_self(false)
            && !this->is_obj_op_self(false)
            &&this->is_exp(a2)
        )
        {
            auto v3 = this->offset_28->next();
            auto v4 = this->offset_28->offset_4;
            int v15 = v4->offset_52;
            int v16 = v4->offset_56;
            if ("?" == v3->offset_60)
            {
                auto v19 = this->ast_ternary_expression();
                if (!this->is_exp(v19))
                {
                    this->offset_28->err("Expected exp", v15, v16, 1);
                }
                auto v24 = this->offset_24->gen_son(night::NS_TYPE_BINARY);
                v24->offset_156.assign(v3->offset_60);
                v24->offset_180 = a2;
                v24->offset_184 = v19;
                return this->make_binary_or_just_value(v24, a3);
            }
            else
            {
                bool v6 = "=" == v3->offset_60;
                std::string v8 = "=";
                if (!v6)
                {
                    v8 = "op not=";
                }
                this->offset_44 = v8;
                auto v9 = this->ast_dispatch(0);
                auto bojv = this->make_binary_or_just_value(v9, a3);
                if (!this->is_exp(bojv))
                {
                    this->offset_28->err("Expected exp", v15, v16, 1);
                }
                night::ns_node *v26 = nullptr;
                if (!v6)
                {
                    v26 = this->offset_24->gen_son(night::NS_TYPE_BINARY);
                }
                else
                {
                    v26 = this->offset_24->gen_son(night::NS_TYPE_ASSIGN);
                }
                v26->offset_156.assign(v3->offset_60);
                v26->offset_180 = a2;
                v26->offset_184 = bojv;
                if (
                    ("/" == v26->offset_156 || "/=" == v26->offset_156)
                    && (!this->is_save_for_division(a2) || !this->is_save_for_division(bojv))
                )
                {
                    this->offset_28->err("Expected exp", v15, v16, 1);
                }
            }
        }
        return a2;
    }

    night::ns_node *NSASTParse::make_call_or_just_expression(night::ns_node * a2)
    {
        if (
            night::NS_TYPE_PROG != a2->offset_0
            && night::NS_TYPE_B_TYPE != a2->offset_0
            && night::NS_TYPE_KW != a2->offset_0
            && night::NS_TYPE_FUNC != a2->offset_0
            || a2->offset_132 == ""
            )
        {
            if (this->is_punctuation("("))
            {
                a2 = this->ast_call(a2);
            }
        }
        return a2;
    }

    night::ns_node *NSASTParse::ast_expression()
    {
        auto v1 = this->ast_dispatch(false);
        auto binary_or_just_value = this->make_binary_or_just_value(v1, false);
        auto result = this->make_call_or_just_expression(binary_or_just_value);
        return result;
    }
    night::ns_node *NSASTParse::ast_expression_no_binary()
    {
        auto v1 = this->ast_dispatch(false);
        return this->make_call_or_just_expression(v1);
    }
    
    night::ns_node *NSASTParse::ast_ternary_expression()
    {
        throw "not implement";
    }
    
    night::ns_node *NSASTParse::ast_obj_dot(night::ns_node* a2)
    {
        auto v11 = this->offset_24;
        auto v9 = v11->gen_girl(night::std_v_n);
        auto v10 = v11->gen_son(night::NS_TYPE_OBJ_DOT);
        night::ns_node * v5 = nullptr;

        v10->offset_192 = a2;
        v10->offset_196 = v9.vec;

        do
        {
            this->ignore_punc(".");
            auto v2 = this->offset_28;
            auto v3 = v2->offset_4;
            auto v7 = v3->offset_52;
            auto v8 = v3->offset_56;
            
            auto v13 = v2->peek();
            if (!v13)
            {
                std::string msg = "End of file";
                this->offset_28->err(msg, 0, 0, false);
            }
            if (night::NS_TYPE_VAR != v13->offset_0)
            {
                std::string msg = "Unexpected token `" + v13->offset_60 + "`";
                this->offset_28->err(msg, v7, v8, true);
            }
            auto v18 = this->ast_expression_no_comma();
            v9.vec->push_back(v18);
            v5 = this->offset_28->peek();

        } while (v5 && "." == v5->offset_60);
        return v10;
    }

    night::ns_node *NSASTParse::ast_obj_op(night::ns_node*)
    {
        throw "not implement";
    }

    night::ns_node *NSASTParse::ast_call(night::ns_node* a2)
    {
        auto v10 = this->offset_24->gen_girl(night::std_v_v_n);
        auto v15 = this->offset_24->gen_son(night::NS_TYPE_CALL);
        v15->offset_220 = a2;
        v15->offset_224 = v10.vecVec;

        auto v8 = this->offset_28->peek();
        auto v7 = this->is_punctuation("(");
        if (!v7)
        {
            this->offset_28->err("Unexpected token `" + v8->offset_60 + "`", 0, 0, false);
        }
        auto lbp = this->make_list_by_parser("(", ")", ",", "ast_expression_no_comma", false, -1, "");
        
        std::vector<night::ns_node *> * v19;
        for (auto i = lbp; ; i = v19)
        {
            v10.vecVec->push_back(i);
            if (!this->is_punctuation("("))
            {
                break;
            }
            v19 = this->make_list_by_parser("(", ")", ",", "ast_expression_no_comma", false, -1, "");
        }
        auto v4 = this->offset_28->peek();
        if (v4)
        {
            night::ns_node * v5;
            if ("[" == v4->offset_60)
            {
                this->ast_obj_op(v15);
                v5 = this->is_punctuation("(");
            }
            else
            {
                if ("." != v4->offset_60)
                {
                    return v15;
                }
                v15 = this->ast_obj_dot(v15);
                v5 = this->is_punctuation("(");
            }
            if (v5)
            {
                return this->ast_call(v15);
            }
        }
        return v15;
    }
    night::ns_node *NSASTParse::ast_function()
    {
        auto god = this->offset_24;
        auto son = god->gen_son(night::NS_TYPE_FUNC);
        son->offset_0.assign(night::NS_TYPE_FUNC);
        this->offset_28->next();
        auto v3 = this->offset_28->peek();

        if (v3 && night::NS_TYPE_VAR == v3->offset_0)
        {
            son->offset_132.assign(v3->offset_60);
            son->offset_24.assign(v3->offset_24);
            son->offset_48 = v3->offset_48;
            son->offset_52 = v3->offset_52;
            this->offset_28->next();
        }
        else
        {
            son->offset_132 = "";
        }

        son->offset_244 = this->make_list_by_parser("(", ")", ",", "ast_varname", false, -1, "");
        this->offset_32++;
        son->offset_216 = this->ast_code_block();
        this->offset_32--;
        return son;
    }
    night::ns_node *NSASTParse::ast_expression_no_comma()
    {
        auto v1 = this->ast_dispatch(false);
        auto bojv = this->make_binary_or_just_value(v1, true);
        return this->make_call_or_just_expression(bojv);
    }
    night::ns_node *NSASTParse::ast_var()
    {
        this->offset_28->next();
        auto v17 = this->offset_24;
        auto v16 = v17->gen_girl(night::std_v_n);

        while (true)
        {
            auto v1 = this->offset_28;
            auto v2 = v1->offset_4;
            auto v9 = v2->offset_52;
            auto v11 = v2->offset_56;

            auto v18 = v1->next();
            if (!v18)
            {
                std::string msg = "End of file";
                this->offset_28->err(msg, 0, 0, false);
            }
            if (night::NS_TYPE_VAR != v18->offset_0)
            {
                std::string msg = "Expected variable name";
                this->offset_28->err(msg, v9, v11, true);
            }
            v18->offset_56 = 1;
            auto v3 = this->offset_28->peek();
            if (v3 && "=" == v3->offset_60)
            {
                auto v26 = this->make_binary_or_just_value(v18, true);
                v16.vec->emplace_back(v26);
            }
            else
            {
                v16.vec->push_back(v18);
            }

            auto v4 = this->offset_28;
            auto v5 = v4->offset_4;
            auto v10 = v5->offset_52;
            auto v12 = v5->offset_56;
            auto v14 = v4->peek();
            if (!v14)
            {
                break;
            }
            auto v19 = v14->offset_60;
            if (
                ";" == v19
                || "," != v19 && v14->offset_84.find("\n") != -1
            )
            {
                break;
            }
            if (this->offset_28->eof())
            {
                std::string msg = "End of file";
                this->offset_28->err(msg, 0, 0, false);
            }
            auto v7 = "," != v19;
            if (v7)
            {
                std::string msg = "Unexpected token `" + v19 + "`";
                this->offset_28->err(msg, v10, v12, true);
            }
            this->offset_28->next();
        }
        auto son = this->offset_24->gen_son(night::NS_TYPE_PROG);
        son->offset_228 = v16.vec;
        son->offset_108 = "";
        return son;
        
    }

    night::ns_node *NSASTParse::ast_varname()
    {
        auto v1 = this->offset_28->offset_4;
        auto v4 = v1->offset_52;
        auto v5 = v1->offset_56;
        auto t = this->ast_expression_no_comma();
        if (
            (night::NS_TYPE_ASSIGN != t->offset_0 || night::NS_TYPE_VAR != t->offset_180->offset_0)
            && night::NS_TYPE_VAR != t->offset_0
        )
        {
            this->offset_28->err("Expected variable", v4, v5, true);
        }
        return t;
    }
    /**
     * 未完成
    */
    night::ns_node *NSASTParse::ast_trans_kw()
    {
        auto v1 = this->offset_28;
        auto v2 = v1->offset_4;
        auto v19 = v2->offset_52;
        auto v20 = v2->offset_56;
        auto v24 = v1->next();
        std::string v43 = v24->offset_60;
        night::ns_node *v3;
        
        if ("true" == v43 || "false" == v43)
        {
            v3 = this->offset_24->gen_son(night::NS_TYPE_BOOL);
            goto LABEL_31;
        }
        if (
            "null" == v43
            || "undefined" == v43
            || "NaN" == v43
            || "Infinity" == v43
        )
        {
            auto son = this->offset_24->gen_son(night::NS_TYPE_KW);
            son->offset_24.assign(v24->offset_24);
            son->offset_48 = v24->offset_48;
            son->offset_52 = v24->offset_52;
            son->offset_60.assign(v43);
            return son;
        }
        if (
            "return" == v43
            || "delete" == v43
            || "void" == v43
        )
        {
            if (!v43.compare("return") && this->offset_32 <= 0)
            {
                std::string msg = "Illegal " + v43 + " statement";
                this->offset_28->err(msg, v19, v20, true);
            }
            auto v21 = this->offset_24->gen_son(night::NS_TYPE_VAR);
            v21->offset_60.assign(v43);
            v21->offset_24.assign(v24->offset_24);
            v21->offset_48 = v24->offset_48;
            v21->offset_52 = v24->offset_52;

            auto v25 = this->offset_24->gen_girl(night::std_v_v_n);
            night::ns_node * lt = this->offset_24->gen_son(night::NS_TYPE_CALL);
            lt->offset_220 = v21;
            // lt->offset_224 = v25; // TODO...
            auto v5 = this->offset_28->peek();
            std::vector<night::ns_node *> * v44;
            if (v5 && v5->offset_84.find('\n') == -1)
            {
                v44 = this->offset_24->gen_girl(night::std_v_n).vec;
                auto v45 = this->ast_expression(); // TODO...待确认
                v44->emplace_back(v45);
            }
            else
            {
                v44 = this->offset_24->gen_girl(night::std_v_n).vec;
            }
            // v25->push_back(v44);
            return lt;
        }
        if ("typeof" == v43)
        {
            auto son =this->offset_24->gen_son(night::NS_TYPE_OP_SELF);
            son->offset_156 = v43 + " ";
            auto v8 = this->ast_expression_no_binary();
            son->offset_192 = v8;

            if (!this->is_exp(v8))
            {
                std::string msg = "Unexpected statement[" + v8->offset_0 + "]";
                this->offset_28->err(msg, v19, v20, true);
            }
            return son;
        }
        if ("this" == v43)
        {
            goto LABEL_30;
        }
        if ("arguments" != v43)
        {
            if (v43 != "break" && "continue" != v43)
            {
                std::string msg = "Unexpected token `" + v43 + "`";
                this->offset_28->err(msg, v19, v20, true);
            }
            if (
                !v43.compare("break") && this->offset_36 <= 0
                || !v43.compare("continue") && this->offset_40 <= 0
            )
            {
                std::string msg = "Illegal " + v43 + " statement";
                this->offset_28->err(msg, v19, v20, true);
            }
            bool v18 = this->end_line();
            if (!v18)
            {
                if (!this->is_punctuation(";"))
                {
                    v18 = this->is_punctuation("}") == nullptr;
                }
                if (v18)
                {
                    std::string msg = "Unexpected token after `" + v43 + "`";
                    this->offset_28->err(msg, v19, v20, true);
                }
            }
            
            auto son = this->offset_24->gen_son(night::NS_TYPE_KW);
            son->offset_24.assign(v24->offset_24);
            son->offset_48 = v24->offset_48;
            son->offset_52 = v24->offset_52;
            son->offset_60.assign(v43);
            return son;
        }
        if (this->offset_32 < 0)
        {
            std::string msg = "Illegal " + v43 + " statement";
            this->offset_28->err(msg, v19, v20, true);
        }
        LABEL_30:
        v3 = this->offset_24->gen_son(night::NS_TYPE_KW);
        LABEL_31:
        auto lt = v3;
        lt->offset_60.assign(v43);
        lt->offset_24.assign(v24->offset_24);
        lt->offset_48 = v24->offset_48;
        lt->offset_52 = v24->offset_52;
        auto v11 = this->offset_28->peek();
        if (v11)
        {
            auto v26 = v11->offset_60;
            if ("[" == v26)
            {
                auto v12 = this->ast_obj_op(lt);
                return this->make_call_or_just_expression(v12);
            }
            if ("." == v26)
            {
                auto v12 = this->ast_obj_dot(lt);
                return this->make_call_or_just_expression(v12);
            }
        }
        return lt;
    }

    night::ns_node * NSASTParse::is_punctuation(std::string const &a2)
    {
        auto v2 = this->offset_28->peek();
        if (v2)
        {
            if (night::NS_TYPE_PUNC == v2->offset_0)
            {
                if (a2 != v2->offset_60)
                    return nullptr;
            }
            else
            {
                return nullptr;
            }
        }
        return v2;
    }
    
    bool NSASTParse::is_buildin_keywords(std::string const &a2)
    {
        auto v2 = this->offset_28->peek();
        if (v2)
        {
            if (night::NS_TYPE_KW == v2->offset_0)
            {
                if (a2 != v2->offset_60)
                    return false;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    
    bool NSASTParse::is_save_for_division(night::ns_node *a2)
    {
        bool result = false;
        if (a2->offset_0.length())
        {
            std::string v5 = a2->offset_0;
            if ( v5 != night::NS_TYPE_BOOL
                && v5 != night::NS_TYPE_VAR
                && v5 != night::NS_TYPE_NUM
                && v5 != night::NS_TYPE_B_TYPE
                && v5 != night::NS_TYPE_OP_SELF
                && v5 != night::NS_TYPE_BINARY
                && v5 != night::NS_TYPE_ASSIGN
                && v5 != night::NS_TYPE_TERNARY
                && v5 != night::NS_TYPE_OBJ_DOT
                && v5 != night::NS_TYPE_OBJ_PROPERTY
                && v5 != night::NS_TYPE_OBJ_SELF_OP
                && v5 != night::NS_TYPE_OBJ_BLOCK
                && v5 != night::NS_TYPE_BRACKET
                && v5 != night::NS_TYPE_CALL )
            {
                bool v2 = v5 == night::NS_TYPE_KW;
                if (!v2)
                {
                    return v2;
                }
                auto v3 = this->offset_60;
                if (
                    "null" != v3
                    && "undefined" != v3
                    && "NaN" != v3
                )
                {
                    v2 = "Infinity" == v3;
                    return v2;
                }
            }
            return true;
        }
        return result;
    }

    bool NSASTParse::is_exp(night::ns_node *a2)
    {
        bool result = false;
        if (a2->offset_0.length())
        {
            std::string v5 = a2->offset_0;
            if ( v5 != night::NS_TYPE_BOOL
                && v5 != night::NS_TYPE_VAR
                && v5 != night::NS_TYPE_STR
                && v5 != night::NS_TYPE_NUM
                && v5 != night::NS_TYPE_B_TYPE
                && v5 != night::NS_TYPE_OP_SELF
                && v5 != night::NS_TYPE_BINARY
                && v5 != night::NS_TYPE_ASSIGN
                && v5 != night::NS_TYPE_TERNARY
                && v5 != night::NS_TYPE_OBJ_DOT
                && v5 != night::NS_TYPE_OBJ_PROPERTY
                && v5 != night::NS_TYPE_OBJ_SELF_OP
                && v5 != night::NS_TYPE_OBJ_BLOCK
                && v5 != night::NS_TYPE_ARRAY
                && v5 != night::NS_TYPE_BRACKET
                && v5 != night::NS_TYPE_PROG_NO_SEM_REQUIRE
                && v5 != night::NS_TYPE_FUNC
                && v5 != night::NS_TYPE_CALL )
            {
                bool v2 = v5 == night::NS_TYPE_KW;
                if (!v2)
                {
                    return v2;
                }
                auto v3 = a2->offset_60;
                if (
                    "null" != v3
                    && "undefined" != v3
                    && "NaN" != v3
                )
                {
                    v2 = "Infinity" == v3;
                    return v2;
                }
            }
            return true;
        }
        return result;
    }

    night::ns_node *NSASTParse::top_down()
    {
        auto v6 = this->offset_24->gen_girl(night::std_v_n);
        while (!this->offset_28->eof())
        {
            auto v16 = this->ast_expression();
            v6.vec->push_back(v16);
            auto v7 = this->offset_28;
            auto v1 = v7->offset_4;
            auto v5 = v1->offset_56;
            auto v4 = v1->offset_52;
            if (
                night::NS_TYPE_BOOL == v16->offset_0
                || night::NS_TYPE_VAR == v16->offset_0 
                || night::NS_TYPE_STR == v16->offset_0 
                || night::NS_TYPE_NUM == v16->offset_0 
                || night::NS_TYPE_B_TYPE == v16->offset_0 
                || night::NS_TYPE_KW == v16->offset_0 
                || night::NS_TYPE_OP_SELF == v16->offset_0 
                || night::NS_TYPE_BINARY == v16->offset_0 
                || night::NS_TYPE_ASSIGN == v16->offset_0 
                || night::NS_TYPE_TERNARY == v16->offset_0 
                || night::NS_TYPE_OBJ_DOT == v16->offset_0 
                || night::NS_TYPE_OBJ_PROPERTY == v16->offset_0 
                || night::NS_TYPE_OBJ_SELF_OP == v16->offset_0 
                || night::NS_TYPE_ARRAY == v16->offset_0 
                || night::NS_TYPE_BRACKET == v16->offset_0 
                || night::NS_TYPE_CALL == v16->offset_0)
            {
                night::ns_node *v2 = v7->peek();
                if (v2)
                {
                    if (";" != v2->offset_60 && v2->offset_84.find(10, 0) == -1)
                    {
                        this->offset_28->err("Expected LineFeed", v4, v5, true);
                    }
                }
            }
            while (!this->offset_28->eof())
            {
                if (!this->is_punctuation(";"))
                {
                    break;
                }
                this->offset_28->next();
            }
        }
        auto son = this->offset_24->gen_son(night::NS_TYPE_PROG);
        son->offset_228 = v6.vec;
        son->offset_108 = "";

        return son;
    }

    bool NSASTParse::end_line(void)
    {
        auto v1 = this->offset_28->peek();
        bool v2 = true;
        if (v1)
        {
            v2 = v1->offset_84.find("\n") + 1 != 0;
        }
        return v2;
    }
    night::ns_node *NSASTParse::ast_require()
    {
        auto v17 = this->offset_24->gen_girl(night::std_v_n);
        auto v22 = this->offset_28->next();
        v22->offset_60 = night::nsv_ + v22->offset_60;
        v17.vec->push_back(v22);

        v22 = this->offset_24->gen_son(night::NS_TYPE_PUNC);
        v22->offset_60 = "(";
        v17.vec->push_back(v22);
        this->offset_28->next();
        auto v2 = this->offset_28->offset_4;
        int v8 = v2->offset_52;
        int v9 = v2->offset_56;
        auto v3 = this->offset_28->next();

        if (!v3 || night::NS_TYPE_STR != v3->offset_0)
        {
            this->offset_28->err("Expected string", v8, v9, true);
        }
        std::string v24;
        if (night::str::path_combine(this->offset_0, v3->offset_60, v24))
        {
            this->offset_28->err("Expected wxs file", v8, v9, true);
        }
        std::string v26 = "p_" + v24;
        v3->offset_60 = v26;
        v17.vec->push_back(v3);

        v22 = this->offset_24->gen_son(night::NS_TYPE_PUNC);
        v22->offset_60 = ")\000{";
        v17.vec->push_back(v22);

        this->offset_28->next();
        auto v13 = this->offset_24;
        v22 = v13->gen_son(night::NS_TYPE_PUNC);
        v22->offset_60 = "(";
        v17.vec->push_back(v22);

        auto v14 = this->offset_24;
        v22 = v14->gen_son(night::NS_TYPE_PUNC);
        v22->offset_60 = ")\000{";
        v17.vec->push_back(v22);

        auto v15 = this->offset_24;
        v22 = v15->gen_son(night::NS_TYPE_PROG_NO_SEM_REQUIRE);
        v22->offset_228 = v17.vec;
        v22->offset_108 = "";

        auto v5 = this->offset_28->peek();
        if (!v5)
            return v22;
        auto v18 = v5->offset_60;
        if (v18 != "[")
        {
            if (v18 == ".")
            {
                auto v6 = this->ast_obj_dot(v22);
                return make_call_or_just_expression(v6);
            }
            return v22;
        }
        auto v6 = this->ast_obj_op(v22);
        return this->make_call_or_just_expression(v6);
    }
    
    void NSASTParse::ignore_punc_pass_sem(std::string const& a2)
    {
        std::string v9;
        int v6 = 0;
        if (this->is_punctuation(a2))
        {
            this->offset_28->next();
        }
        else if (";" != a2)
        {
            auto v4 = this->offset_28->peek();
            if (v4)
            {
                auto v3 = v4->offset_60;
                auto v11 = v3.substr(0, 3);
                if (v3.length() > 3 && v11 == night::nsv_)
                {
                    v11 = v3.substr(3);
                    v9 = v11;
                }
                else
                {
                    v9.assign(v3);
                }
                v6 = v9.length();
            }
            else
            {
                v6 = 0;
            }
            std::string msg = "Unexpected identifier `" + v9 + "`";
            this->offset_28->err(msg, 0, v6, false);
        }
    }
    void NSASTParse::ignore_punc(std::string const& a2)
    {
        if (!this->is_punctuation(a2))
        {
            auto node = this->offset_28->peek();
            std::string v11 = " ";
            int code;
            if (node)
            {
                std::string v6 = node->offset_60;
                std::string v13 = v6.substr(0, 3);
                if (
                    node->offset_60.length() > 3
                    && v13 == night::nsv_
                )
                {
                    v11 = v6.substr(3);
                }
                else
                {
                    v11.assign(v6);
                }
                code = v11.length();
            }
            else
            {
                code = 0;
            }
            std::string v13 = "Unexpected identifier `" + v11 + "`";
            this->offset_28->err(v13, 0, code, false);
        }
        this->offset_28->next();
    }
}