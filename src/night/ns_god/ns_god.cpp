#include "../../include/night.h"
namespace night
{
    
    NSGod::NSGod(/* args */)
    {
    }
    
    NSGod::~NSGod()
    {
    }
    
    std::vector<night::ns_node *>* NSGod::gen_girl(std::string a2)
    {
        night::NSGod::GodsSon* node = new night::NSGod::GodsSon();
        
        if (night::std_v_n == a2)
        {

        }
        if (night::std_v_v_n == a2)
        {

        }
        this->offset_0.push_back(node);
        return node->offset_24;
    }

    night::ns_node* NSGod::gen_son(std::string)
    {

    }
    
    void NSGod::hamlet(void)
    {
        for (int i = 0; i < this->offset_0.size(); i++)
        {
            auto v3 = this->offset_0[i];
            if (v3->offset_0 == night::std_v_n)
            {
                auto v4 = v3->offset_24;
                if (v4)
                {
                    delete v4;
                }
            }
            if (v3->offset_0 == night::std_v_v_n)
            {
                auto v4 = v3->offset_24;
                if (v4)
                {
                    delete v4;
                }

            }
            delete v3;
        }
        
    }
} // namespace night
