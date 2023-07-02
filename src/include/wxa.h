#ifndef __WXA_H__
#define __WXA_H__
#include <iostream>
#include <vector>

namespace MMBizWxaAppComm
{
    
    void SplitBySlash(std::string const&,std::vector<std::string> &);
    
    /**
     * 路径合并
     * 
     * @param base 基础路径
     * @param path 相对路径
     * @param result 合并结果
    */
    void PathCombine(std::string const& base,std::string const& path,std::string& result);
}

#endif