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
            bool isEnd = this->offset_4.eof();
            if (!isEnd)
            {
                this->skip_comment(v14);
            }
            if ( isEnd
                || (this->offset_4.eof())
            )
            {
                v7 = 0;
            }
            else
            {
                auto v13 = this->offset_4.peek();
                this->read_string(v13, v14);
                // TODO...
                
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
        this->offset_4.next();
    }

    void NSToken::skip_comment(std::string &a2)
    {
        while (true)
        {
            if (this->offset_4.eof())
            {
                break;
            }
            auto v5 = this->offset_4.peek();
            if (v5 != '/')
            {
                break;
            }
            if (this->offset_4.eof_2())
            {
                break;
            }
            v5 = this->offset_4.peek_2();
            if (v5 == '/')
            {
                v5 = this->offset_4.next();
                v5 = this->offset_4.next();
                this->read_comment_method_1();
            }
            else
            {
                v5 = this->offset_4.peek_2();
                if (v5 == '*')
                    return;
                v5 = this->offset_4.next();
                v5 = this->offset_4.next();
                this->read_comment_method_2();
            }
            a2 = this->read_while(night::NSToken::tk_is_whitespace, 0);
        
        }
        
    }

    night::ns_node * NSToken::read_string(char a2, std::string const& a3)
    {
        auto v12 = this->offset_4.next();
        std::string v10 = "";
        char v4;
        for (int i = 0; ; i = v4)
        {
            v4 = this->offset_4.eof();
            if (v4)
            {
                break;
            }
            auto v9 = this->offset_4.eof();
            if ( v9 == '\n')
            {
                if (!i)
                {
                    this->offset_4.err("Unexpected `\\n`", 0, 0, false);
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
        auto son = this->offset_0.gen_son(night::NS_TYPE_STR);
        
        son->offset_60 = WXML::Rewrite::ToStringCode(v10);
        son->offset_108.replace(0, son->offset_108.length(), 1, a2);
        son->offset_84.assign(a3);
        return son;

    }

    std::string NSToken::read_while(bool (*a3)(char,void *), void *a4)
    {
        std::string result = "";
        while (!this->offset_4.eof())
        {
            auto v6 = this->offset_4.peek();
            if (!a3(v6, a4))
            {
                break;
            }
            v6 = this->offset_4.next();
            result.push_back(v6);
        }
        return result;
    }

    void NSToken::err(std::string const& a2, int a3, int a4, bool a5)
    {
        this->offset_4.err(a2, a3, a4, a5);
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
    bool NSToken::tk_is_comment2(char ch, void * t)
    {
        night::NSStream *a2 = (night::NSStream *)t;
        auto v3 = a2->peek();
        if (v3 != '*')
        {
            return 1;
        }
        v3 = a2->peek_2();
        if (v3 != '/')
        {
            return 1;
        }
        a2->next();
        return 0;
    }
}