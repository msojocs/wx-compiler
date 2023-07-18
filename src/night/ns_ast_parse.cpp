#include "../include/night.h"

namespace night
{
    

    NSASTParse::NSASTParse(/* args */)
    {
    }

    NSASTParse::NSASTParse(std::string a2, night::NSToken * a3, night::NSGod * a4)
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

    void NSASTParse::is_op(std::string const& a2)
    {
        // std::string v2 = this->offset_28->peek();
        // if (v2.length())
        // {
        //     if (night::NS_TYPE_OP == v2)
        //     {
        //         if (a2.length() && a2 != v2->offset_60)
        //             return 0;

        //     }
        //     else
        //     {
        //         return 0;
        //     }
        // }
    }
    void NSASTParse::is_op_or_comma(std::string const&)
    {
        // bool result = this->is_punctuation(",");
        // if (!result)
        // {
        //     return this->is_op(result);
        // }
    }
    
    night::ns_node * NSASTParse::ast_expression()
    {

    }

    bool NSASTParse::is_punctuation(std::string const&)
    {

    }

    night::ns_node* NSASTParse::top_down()
    {
        auto v6 = this->offset_24->gen_girl(night::std_v_n);
        night::ns_node ret;
        while (!this->offset_28->eof())
        {
            auto v16 = this->ast_expression();
            v6.push_back(v16);
            auto v7 = this->offset_28;
            // v7->offset_4;
            // auto v5 = v1.offset_56;
            // auto v4 = v1.offset_52;
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
                || night::NS_TYPE_CALL == v16->offset_0 
            )
            {
                // night::ns_node* v2 = v7->peek();
                // if(v2)
                // {
                //     if (";" != v2->offset_60 && v2->offset_84.find(10, 0) == -1)
                //     {
                //         // this->offset_28->err("Expected LineFeed", , , true);
                //     }
                // }

            }
            while (!this->offset_28->eof())
            {
                if(!this->is_punctuation(";"))
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

    void NSASTParse::ast_require()
    {
        auto v17 = this->offset_24->gen_girl(night::std_v_n);
        auto v22 = this->offset_28->next();
        v22->offset_60 = night::nsv_ + v22->offset_60;
        v17.push_back(v22);
        
        v22 = this->offset_24->gen_son(night::NS_TYPE_PUNC);
        v22->offset_60 = "(\000)\000{";
        v17.push_back(v22);
        this->offset_28->next();
        auto v3 = this->offset_28->next();
    }
}