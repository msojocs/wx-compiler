#include "../../include/night.h"
namespace night
{
    
    NSGod::NSGod(/* args */)
    {
    }
    
    NSGod::~NSGod()
    {
    }
    
    // std::vector<std::vector<night::ns_node *>*>*
    night::NSGod::GodsSon::Offset24 NSGod::gen_girl(std::string a2)
    {
        night::NSGod::GodsSon* node = new night::NSGod::GodsSon();
        
        node->offset_0.assign(a2);
        if (night::std_v_n == a2)
        {
            node->offset_24.vec = new std::vector<night::ns_node *>();
        }
        if (night::std_v_v_n == a2)
        {
            node->offset_24.vec = new std::vector<night::ns_node *>();
        }
        this->offset_0.push_back(node);
        // return node->offset_24_vec; // 审查内存，是一层vector
        return node->offset_24;
    }

    night::ns_node* NSGod::gen_son(std::string a2)
    {
        night::NSGod::GodsSon *v6 = new night::NSGod::GodsSon();
        v6->offset_0.assign(a2);

        night::ns_node *v4 = new night::ns_node();
        v4->offset_0.assign(a2);
        v6->offset_24.node = v4;
        this->offset_0.push_back(v6);
        
        return v4;
    }
    
    void NSGod::hamlet(void)
    {
        for (int i = 0; i < this->offset_0.size(); i++)
        {
            auto v3 = this->offset_0[i];
            if (v3->offset_0 == night::std_v_n)
            {
                auto v4 = v3->offset_24.vec;
                if (v4)
                {
                    delete v4;
                    v3->offset_24.vec = nullptr;
                }
                if (v3->offset_24.node)
                {
                    delete v3->offset_24.node;
                    v3->offset_24.node = nullptr;
                }
            }
            if (v3->offset_0 == night::std_v_v_n)
            {
                auto v4 = v3->offset_24.vec;
                if (v4)
                {
                    delete v4;
                    v3->offset_24.vec = nullptr;
                }
                if (v3->offset_24.node)
                {
                    delete v3->offset_24.node;
                    v3->offset_24.node = nullptr;
                }

            }
            delete v3;
        }
        
    }
} // namespace night
