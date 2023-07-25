#include "../include/night.h"
#include "../include/wxml.h"

namespace night
{
    NSToken::NSToken(/* args */)
    {
    }
    
    NSToken::~NSToken()
    {
    }

    night::ns_node* NSToken::peek(void)
    {
        auto result = this->offset_8;
        if (!result)
        {
            result = this->read_next();
            this->offset_8 = result;
        }
        return result;
    }

    night::ns_node* NSToken::read_next(void)
    {
        night::ns_node* v7 = nullptr;
        if (this->offset_12.begin() == this->offset_12.end())
        {
            auto v14 = this->read_while(night::NSToken::tk_is_whitespace, 0);
            bool isEnd = this->offset_4->eof();
            if (!isEnd)
            {
                this->skip_comment(v14);
            }
            if ( isEnd
                || (this->offset_4->eof())
            )
            {
                v7 = 0;
            }
            else
            {
                auto v13 = this->offset_4->peek();
                if (v13.data == '"' || v13.data == '\'')
                {
                    v7 = this->read_string(v13.data, v14);
                }
                else if (v13.data - '0' > 9)
                {
                    if (!night::NSToken::tk_is_var_start(v13.data, 0))
                    {
                        int pos = night::NS_BUILTIN_PUNC.find(v13.data, 0);
                        if (pos == -1)
                        {
                            int pos2 = night::NS_BUILTIN_OP.find(v13.data, 0);
                            if (pos2 == -1)
                            {
                                std::string msg = "Unexpected token `";
                                msg.append(std::string(1, v13.data));
                                msg.append("`");
                                this->offset_4->err(msg, 0, 0, false);
                            }
                            std::string v15;
                            auto v17 = this->read_while(night::NSToken::tk_is_valid_op_str, (void *)&v15);
                            auto v7 = this->offset_0->gen_son(night::NS_TYPE_OP);

                        }
                        else
                        {
                            auto v7 = this->offset_0->gen_son(night::NS_TYPE_PUNC);
                            auto v19 = this->offset_4->next();
                            std::string v15(1, v19.data);
                            v7->offset_60 = v15;
                        }
                        // goto LABEL_19;
                    }
                    else
                    {
                        v7 = this->read_var(v14);
                    }
                }
                else
                {
                    v7 = this->read_number(v14);
                }
                
            }
            return v7;
        }
        auto ret = this->offset_12.back();
        this->offset_12.pop_back();
        return ret;
    }

    night::ns_node* NSToken::next(void)
    {
        auto result = this->offset_8;
        this->offset_8 = 0;
        if (!result)
        {
            return this->read_next();
        }
        return result;
    }

    bool NSToken::eof(void)
    {
        return this->peek() == 0;
    }

    void NSToken::push(night::ns_node* a2)
    {
        if (this->offset_8)
        {
            this->offset_12.push_back(this->offset_8);
            this->offset_8 = nullptr;
        }
        if (a2)
        {
            this->offset_12.push_back(a2);
        }
    }

    void NSToken::read_comment_method_1()
    {
        this->read_while(night::NSToken::tk_is_not_line_break, 0);
    }
    void NSToken::read_comment_method_2()
    {
        this->read_while(night::NSToken::tk_is_comment2, &this->offset_4);
        this->offset_4->next();
    }

    void NSToken::skip_comment(std::string &a2)
    {
        while (true)
        {
            if (this->offset_4->eof())
            {
                break;
            }
            auto v5 = this->offset_4->peek();
            if (v5.data != '/')
            {
                break;
            }
            if (this->offset_4->eof_2())
            {
                break;
            }
            v5 = this->offset_4->peek_2();
            if (v5.data == '/')
            {
                v5 = this->offset_4->next();
                v5 = this->offset_4->next();
                this->read_comment_method_1();
            }
            else
            {
                v5 = this->offset_4->peek_2();
                if (v5.data == '*')
                    return;
                v5 = this->offset_4->next();
                v5 = this->offset_4->next();
                this->read_comment_method_2();
            }
            a2 = this->read_while(night::NSToken::tk_is_whitespace, 0);
        
        }
        
    }

    night::ns_node * NSToken::read_string(char a2, std::string const& a3)
    {
        auto v12 = this->offset_4->next();
        std::string v10 = "";
        char v4;
        for (int i = 0; ; i = v4)
        {
            v4 = this->offset_4->eof();
            if (v4)
            {
                break;
            }
            auto v9 = this->offset_4->eof();
            if ( v9 == '\n')
            {
                if (!i)
                {
                    this->offset_4->err("Unexpected `\\n`", 0, 0, false);
                }
                v10.push_back('\n');
            }
            else
            {
                if (!i)
                {
                    if (v9 == '\\')
                    {
                        v4 = 1;
                        v10.push_back('\\');
                        continue;
                    }
                    if (v9 == a2)
                    {
                        break;
                    }
                }
                v10.push_back(v9);
            }
        }
        auto son = this->offset_0->gen_son(night::NS_TYPE_STR);
        
        son->offset_60 = WXML::Rewrite::ToStringCode(v10);
        son->offset_108.replace(0, son->offset_108.length(), 1, a2);
        son->offset_84.assign(a3);
        return son;

    }

    night::ns_node * NSToken::read_number(std::string const& a2)
    {
        int v8;
        auto v9 = this->read_while(night::NSToken::rw_cb_number, &v8);
        auto v13 = this->offset_4->peek();
        if (night::NSToken::tk_is_var_start(v13.data, nullptr))
        {
            std::string msg = "Unexpected token `";
            msg.append(std::string(1, v13.data));
            msg.append("`");
            this->offset_4->err(msg, 0, 0, false);
        }
        auto son = this->offset_0->gen_son(night::NS_TYPE_NUM);
        son->offset_60 = v9;
        son->offset_84 = a2;
        return son;
    }

    std::string NSToken::read_while(bool (*a3)(char,void *), void *a4)
    {
        std::string result = "";
        while (!this->offset_4->eof())
        {
            auto v6 = this->offset_4->peek();
            if (!a3(v6.data, a4))
            {
                break;
            }
            v6 = this->offset_4->next();
            result.push_back(v6.data);
        }
        return result;
    }

    night::ns_node *NSToken::read_var(std::string const & a2)
    {
        auto v12 = this->offset_4->peek();
        auto v13 = this->read_while(night::NSToken::tk_is_var, 0);
        std::string v16 = " " + v13 + " ";
        int pos = night::NS_BUILTIN_TYPE.find(v16, 0);
        night::ns_node *son = nullptr;
        if (pos == -1)
        {
            int v6 = night::NS_BUILTIN_KW.find(v16, 0);
            auto v4 = night::NS_TYPE_KW;
            if (v6 == -1)
            {
                v4 = night::NS_TYPE_VAR;
            }
            son = this->offset_0->gen_son(v4);
            if (v6 == -1)
            {
                v16 = night::nsv_ + v13;
            }
            else
            {
                v16 = v13;
            }
            son->offset_60 = v16;
            son->offset_24.assign(v13);
            son->offset_84 = a2;
            son->offset_48 = v12.offset_4;
            son->offset_52 = v12.offset_8;
            if (!this->offset_24[v13])
            {
                this->offset_24[v13] = this->offset_24.size();
            }
        }
        else
        {
            son = this->offset_0->gen_son(night::NS_TYPE_B_TYPE);
            son->offset_60 = v13;
            son->offset_84 = a2;
        }
        return son;
    }

    void NSToken::err(std::string const& a2, int a3, int a4, bool a5)
    {
        this->offset_4->err(a2, a3, a4, a5);
    }
    bool NSToken::rw_cb_number(char ch, void *t)
    {
        int *a2 = (int *)t;
        if(ch != '.')
        {
            return ch - '0' <= 9u;
        }
        bool result = false;
        if (!*a2)
        {
            *a2 = 1;
            return true;
        }
        return result;
    }

    bool NSToken::tk_is_whitespace(char ch, void *)
    {
        auto v1 = night::NS_BUILTIN_SPACE.find(ch, 0);
        return v1 != -1;
    }
    bool NSToken::tk_is_not_line_break(char ch, void *)
    {
        return ch != 10;
    }
    bool NSToken::tk_is_valid_op_str(char ch, void *t)
    {
        std::string * a2 = (std::string *)t;
        std::string v6;
        v6.assign(*a2);
        v6.replace(v6.length(), 0, 1, ch);
        bool result = false;
        if (
            night::NS_BUILTIN_OP.find(ch, 0) == -1
            || (
                night::NS_BUILTIN_ALL_OP.find(v6, 0) == -1
            )
        )
        {
            result = false;
        }
        else
        {
            a2->assign(v6);
            result = true;
        }
        return result;
    }
    bool NSToken::tk_is_comment2(char ch, void * t)
    {
        night::NSStream *a2 = (night::NSStream *)t;
        auto v3 = a2->peek();
        if (v3.data != '*')
        {
            return 1;
        }
        v3 = a2->peek_2();
        if (v3.data != '/')
        {
            return 1;
        }
        a2->next();
        return 0;
    }
    bool NSToken::tk_is_var(char ch, void * t)
    {
        bool result = night::NSToken::tk_is_var_start(ch, t);
        if (!result)
        {
            uint8_t v4 = ch - '0';
            return (ch == '_') | (v4 <= 9u);
        }
        return result;
    }
    bool NSToken::tk_is_var_start(char ch, void * t)
    {
        uint8_t v1 = (ch & 0xFFFFFFDF) - 'A';
        return (v1 <= 0x19u) | (ch == '_');
    }
}