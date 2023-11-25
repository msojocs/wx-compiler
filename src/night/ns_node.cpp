#include "../include/night.h"
#include <cstring>

namespace night
{
    
    ns_node::ns_node(/* args */)
    {
    }
    
    ns_node::~ns_node()
    {
    }
    
    /**
     * 调用处：night::NSCompileJs::compile_once
     * 其它均为自身递归调用
     * 在源码级判断做了false处理，所以实际生成二进制文件上不会调用此函数；
     * 没有实现必要。
    */
    std::string ns_node::debug_no_space()
    {
        // debug_no_space - 0
        char str[1024];
        memset(str, 0, sizeof(str));
        if ("skip" == this->offset_0)
        {
            sprintf(str, "type[%s]", this->offset_0.data());
        }
        if ("bool" == this->offset_0)
        {
            if (this->offset_24.length())
            {
                sprintf(str, "(%d,%d)type[%s] value[%s]", this->offset_48, this->offset_52, this->offset_0, this->offset_60);
            }
            else
            {
                sprintf(str, "type[%s] value[%s]", this->offset_0, this->offset_60);
            }
        }
        if (
            "num" == this->offset_0
            || "builtin_type" == this->offset_0
            || "kw" == this->offset_0
            || "var" == this->offset_0
            || "punc" == this->offset_0
            || "op" == this->offset_0
        )
        {
            if (this->offset_24.length())
            {
                sprintf(str, "(%d,%d)type[%s] value[%s]", this->offset_48, this->offset_52, this->offset_0, this->offset_60);
            }
            else
            {
                sprintf(str, "type[%s] value[%s]", this->offset_0, this->offset_60);
            }
        }
        if ("var" == this->offset_0)
        {
            if (this->offset_24.length())
            {
                sprintf(str, "(%d,%d)type[%s] value[%s] flag[%d]", this->offset_48, this->offset_52, this->offset_0, this->offset_60, this->offset_56);
            }
            else
            {
                sprintf(str, "type[%s] value[%s] flag[%d]", this->offset_0, this->offset_60, this->offset_56);
            }
        }
        // debug_no_space - 5
        // debug_no_space - 10
        // debug_no_space - 15
        // debug_no_space - 20
        // debug_no_space - 25
        // debug_no_space - 30
        // debug_no_space - 35
        // debug_no_space - 40
        // debug_no_space - 45

        throw "not implement";
    }
    
}