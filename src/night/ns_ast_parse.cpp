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
        this->offset_52 = 0;
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
    }
    night::ns_node *NSASTParse::ast_code_block()
    {
    }
    night::ns_node *NSASTParse::ast_new_array()
    {
    }
    night::ns_node *NSASTParse::ast_obj_op_self(night::ns_node *)
    {
    }
    night::ns_node *NSASTParse::ast_op_self()
    {
    }
    night::ns_node *NSASTParse::ast_if()
    {
    }
    night::ns_node *NSASTParse::ast_for()
    {
    }
    night::ns_node *NSASTParse::ast_while()
    {
    }
    night::ns_node *NSASTParse::ast_do_while()
    {
    }
    night::ns_node *NSASTParse::ast_switch()
    {
    }
    bool NSASTParse::is_obj_op_self(bool)
    {
    }
    bool NSASTParse::is_op_self(bool)
    {
    }
    night::ns_node *NSASTParse::ast_dispatch(bool a3)
    {
        // ast_dispatch - 0
        auto v42 = this->is_punctuation("(\000)\000{");
        if (!v42)
        {
            auto v67 = this->offset_44;
            this->offset_44 = "";
            const char asc_5527F4[] = "(\000)\000{";
            auto v45 = this->is_punctuation("[");
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
            v21 = true;
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
        v79->offset_60 = "(\000)\000{";
        v44->push_back(v79);
        this->offset_28->next();
        auto v80 = this->ast_expression(); // 待确认
        // ast_dispatch - 10
        if (!this->is_exp(v80))
        {
            if (night::NS_TYPE_ASSIGN != v80->offset_0)
            {
                auto v3 = this->offset_28->offset_4;
                auto v61 = this->offset_28;
                int v27;
                int v30;
                std::string v81 = "Unexpected statement[" + v80->offset_0 + "]";
                this->offset_28->err(v81, v27, v30, 1);
            }
        }
        v44->push_back(v80);
        this->ignore_punc(")\000{"); // 参数待确认
        v79 = this->offset_24->gen_son(night::NS_TYPE_PUNC);
        v79->offset_60 = ")\000{";
        v44->push_back(v79);
        v79 = this->offset_24->gen_son(night::NS_TYPE_BRACKET);
        v79->offset_228 = v44;
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

    night::ns_node *NSASTParse::make_binary_or_just_value(night::ns_node * a2, bool a3)
    {
        bool v21;
        bool v18;
        if (a3)
        {
            v21 = this->is_op("\0");
            v18 = a3;
        }
        else
        {
            v21 = this->is_op_or_comma("\0");
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
            int v15 = v4.offset_52;
            int v16 = v4.offset_56;
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
            if (this->is_punctuation("(\000)\000{"))
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
        return this->make_call_or_just_expression(binary_or_just_value);
    }
    
    night::ns_node *NSASTParse::ast_ternary_expression()
    {
    }
    
    night::ns_node *NSASTParse::ast_obj_dot(night::ns_node*)
    {
    }

    night::ns_node *NSASTParse::ast_obj_op(night::ns_node*)
    {
    }

    night::ns_node *NSASTParse::ast_call(night::ns_node*)
    {
    }
    night::ns_node *NSASTParse::ast_function()
    {
    }
    night::ns_node *NSASTParse::ast_var()
    {
    }
    night::ns_node *NSASTParse::ast_trans_kw()
    {
    }

    bool NSASTParse::is_punctuation(std::string const &a2)
    {
        auto v2 = this->offset_28->peek();
        if (v2)
        {
            if (night::NS_TYPE_PUNC == v2->offset_0)
            {
                if (a2 != v2->offset_60)
                    return 0;
            }
            else
            {
                return 0;
            }
        }
        return true;
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
    }
    bool NSASTParse::is_exp(night::ns_node *a2)
    {
    }

    night::ns_node *NSASTParse::top_down()
    {
        auto v6 = this->offset_24->gen_girl(night::std_v_n);
        night::ns_node ret;
        while (!this->offset_28->eof())
        {
            auto v16 = this->ast_expression();
            v6->push_back(v16);
            auto v7 = this->offset_28;
            // v7->offset_4;
            // auto v5 = v1.offset_56;
            // auto v4 = v1.offset_52;
            if (
                night::NS_TYPE_BOOL == v16->offset_0 || night::NS_TYPE_VAR == v16->offset_0 || night::NS_TYPE_STR == v16->offset_0 || night::NS_TYPE_NUM == v16->offset_0 || night::NS_TYPE_B_TYPE == v16->offset_0 || night::NS_TYPE_KW == v16->offset_0 || night::NS_TYPE_OP_SELF == v16->offset_0 || night::NS_TYPE_BINARY == v16->offset_0 || night::NS_TYPE_ASSIGN == v16->offset_0 || night::NS_TYPE_TERNARY == v16->offset_0 || night::NS_TYPE_OBJ_DOT == v16->offset_0 || night::NS_TYPE_OBJ_PROPERTY == v16->offset_0 || night::NS_TYPE_OBJ_SELF_OP == v16->offset_0 || night::NS_TYPE_ARRAY == v16->offset_0 || night::NS_TYPE_BRACKET == v16->offset_0 || night::NS_TYPE_CALL == v16->offset_0)
            {
                night::ns_node *v2 = v7->peek();
                if (v2)
                {
                    if (";" != v2->offset_60 && v2->offset_84.find(10, 0) == -1)
                    {
                        // this->offset_28->err("Expected LineFeed", , , true);
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
        son->offset_108 = "";

        return son;
    }

    night::ns_node *NSASTParse::ast_require()
    {
        auto v17 = this->offset_24->gen_girl(night::std_v_n);
        auto v22 = this->offset_28->next();
        v22->offset_60 = night::nsv_ + v22->offset_60;
        v17->push_back(v22);

        v22 = this->offset_24->gen_son(night::NS_TYPE_PUNC);
        v22->offset_60 = "(\000)\000{";
        v17->push_back(v22);
        this->offset_28->next();
        auto v3 = this->offset_28->next();
    }
    
    void NSASTParse::ignore_punc(std::string const&)
    {
        
    }
}