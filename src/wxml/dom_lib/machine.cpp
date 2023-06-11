#include "../../include/wxml.h"
#include <cstring>
inline
unsigned char bittest(std::int32_t const *a, std::int32_t b)
{
    auto const bits{ reinterpret_cast<unsigned char const*>(a) };
    auto const value{ bits[b >> 3] };
    auto const mask{ (unsigned char)(1 << (b & 7)) };
    return (value & mask) != 0;
}

inline
unsigned char bittest64(std::int64_t const *a, std::int64_t b)
{
    auto const bits{ reinterpret_cast<unsigned char const*>(a) };
    auto const value{ bits[b >> 3] };
    auto const mask{ (unsigned char)(1 << (b & 7)) };
    return (value & mask) != 0;
}
namespace WXML
{
    
    namespace DOMLib
    {
        
       
        
        Machine::Machine(/* args */)
        {
        }
        
        Machine::Machine(std::string const& filePath)
        {
            InitTransitTable();
            this->filePath. assign(filePath);
        }
        
        Machine::~Machine()
        {
        }
        bool Machine::bInited = false;
        int * Machine::TT = nullptr;
        int * Machine::STT = nullptr;

        void Machine::InitTransitTable()
        {
            // bInited是静态的
            if (!this->bInited)
            {
                this->bInited = true;
                std::string v0 = "\n\t\r";
                // memset(&this->TT, 0, 0x101000u);
            }
        }
        int dword_567960[1000] =  {0};
        void Machine::Feed(
            char c,
            std::vector<WXML::DOMLib::Token> & a3,
            std::string &errorMessage,
            std::vector<WXML::DOMLib::Token> & a5,
            int
            )
        {
            try
            {
                /* code */
                if (c == '\n')
                {
                    // 一行结束，行数加一，长度变0
                    this->lineCount++;
                    this->lineLength = 0;
                }

                int v45 = this->offset_6;
                int v46 = this->TT[257 * this->offset_6 + c];
                do{
                    if (!v46)
                    {
                        v46 = dword_567960[257 * v45];
                        if(!v46)
                        {
                            std::stringstream ss;
                            ss << "BAD STATE MACHINE! AT INPUT ";
                            ss << this->offset_6 << " " << c;
                            errorMessage = ss.str();
                            return;
                        }
                    }
                    if (v46 < 0)
                    {
                        std::stringstream ss;
                        ss << this->filePath << ":";
                        ss << this->lineCount << ":";
                        ss << this->lineLength << ":";
                        if (c)
                        {
                            ss << "unexpected character `" << c << "`";
                        }
                        else
                        {
                            ss << "unexpected end";
                        }
                        errorMessage = ss.str();
                        return;
                    }
                    this->offset_6 = v46;
                    if (bittest(&v46, 0x15u))
                    {
                        // TODO: 
                        if (this->offset_0 > this->offset_1)
                        {
                            this->offset_1++;
                            this->offset_5++;

                            WXML::DOMLib::Token token;
                            a3.push_back(token);
                        }
                    }
                    if (bittest(&v46, 0x16u))
                    {
                        // TODO:
                        WXML::DOMLib::Token token;
                        // this->offset_4 = this->offset_4 - 112;
                        
                        // ----
                        // this->offset_4 = 
                        // this->offset_5 = 

                    }
                }while(bittest(&v46, 0x14u));

                if (bittest(&v46, 0x11u))
                {
                    if (this->offset_1 < this->offset_0)
                    {
                        this->offset_1 = this->offset_0;
                        this->offset_5 = this->lineLength;
                        this->offset_4 = this->lineCount;

                        if(WXML::DOMLib::Machine::STT[v45] == 3)
                        {
                            WXML::DOMLib::Token token;
                            a5.push_back(token);
                        }
                        else
                        {
                            WXML::DOMLib::Token token;
                            a3.push_back(token);
                        }
                    }

                }

                this->offset_0++;
                this->lineLength++;
                if (bittest(&v46, 0x12u))
                {
                    this->offset_1 = this->offset_0;
                    this->offset_5 = this->lineLength;
                    this->offset_4 = this->lineCount;
                    if (WXML::DOMLib::Machine::STT[v45] == 3)
                    {
                        WXML::DOMLib::Token v49;
                        a5.push_back(v49);
                    }
                    else
                    {
                        WXML::DOMLib::Token v49;
                        a3.push_back(v49);
                    }
                }
                v46 &= 0x80000u;
                if (v46)
                {
                    offset_1 = offset_0;
                    offset_5 = lineLength;
                }
                return;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
        }
        
        
    }
}