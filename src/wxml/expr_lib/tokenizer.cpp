#include "../../include/wxml.h"

namespace WXML {
    namespace EXPRLib {
        inline
        unsigned char bittest(std::int32_t const *a, std::int32_t b)
        {
            auto const bits{ reinterpret_cast<unsigned char const*>(a) };
            auto const value{ bits[b >> 3] };
            auto const mask{ (unsigned char)(1 << (b & 7)) };
            return (value & mask) != 0;
        }

        int Tokenizer::TT[0x605C];
        Tokenizer::Tokenizer(/* args */)
        {
        }

        Tokenizer::Tokenizer(char const* Str, std::string const& a3, int a4, int a5)
        {
            this->offset_0 = Str;
        }
        
        Tokenizer::~Tokenizer()
        {
        }
        
        bool Tokenizer::bInited = false;
        
        void Tokenizer::InitTransitTable(void)
        {
            /**
             * Tokenizer::TT -> 0x006685A0
             * end -> 0x66E5FC
            */
            if (!Tokenizer::bInited)
            {
                Tokenizer::bInited = true;
                const char* ntr = " \n\t\r";
                for (const char* i = ntr; ; i++)
                {
                    char v1 = *i;
                    if (!v1)
                        break;
                    Tokenizer::TT[(0x6689A4 - 0x006685A0) / 4 + v1] = 8388609;
                }
                const char* $abc = "$abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_";
                for (const char* j = $abc; ; ++j )
                {
                    char v3 = *j;
                    if ( !v3 )
                        break;
                    // dword_6689A4[v3] = 13;
                    Tokenizer::TT[(0x6689A4 - 0x006685A0) / 4 + v3] = 13;
                }
                const char *_0123 = "0123456789";
                for ( const char* k = _0123; ; ++k )
                {
                    char v5 = *k;
                    if ( !v5 )
                        break;
                    // dword_6689A4[v5] = 10;
                    Tokenizer::TT[(0x6689A4 - 0x006685A0) / 4 + v5] = 10;
                }
                const char* plus = "+-*/%^~()[],?:{}";
                for ( const char* m = plus; ; ++m )
                {
                    char v7 = *m;
                    if ( !v7 )
                        break;
                    // dword_6689A4[v7] = 327681;
                    Tokenizer::TT[(0x6689A4 - 0x006685A0) / 4 + v7] = 327681;
                }
                Tokenizer::TT[(0x668A5C - 0x006685A0) / 4] = 3;
                Tokenizer::TT[(0x668A2C - 0x006685A0) / 4] = 6;
                Tokenizer::TT[(0x668A40 - 0x006685A0) / 4] = 8;
                Tokenizer::TT[(0x668A98 - 0x006685A0) / 4] = 12;
                Tokenizer::TT[(0x668B94 - 0x006685A0) / 4] = 15;
                Tokenizer::TT[(0x668A3C - 0x006685A0) / 4] = 14;
                Tokenizer::TT[(0x668A94 - 0x006685A0) / 4] = 16;
                Tokenizer::TT[(0x668A9C - 0x006685A0) / 4] = 17;
                Tokenizer::TT[(0x668A28 - 0x006685A0) / 4] = 18;
                Tokenizer::TT[(0x6689A4 - 0x006685A0) / 4] = 8519681;
                Tokenizer::TT[(0x668DA4 - 0x006685A0) / 4] = -1;
                Tokenizer::TT[(0x668A60 - 0x006685A0) / 4] = 21;
                Tokenizer::TT[(0x66DA9C - 0x006685A0) / 4] = 22;
                Tokenizer::TT[(0x66DDF4 - 0x006685A0) / 4] = 4325377;
                Tokenizer::TT[(0x66DEA0 - 0x006685A0) / 4] = 23;
                Tokenizer::TT[(0x66E1F8 - 0x006685A0) / 4] = 8388630;
                Tokenizer::TT[(0x66E2B8 - 0x006685A0) / 4] = 8388609;
                Tokenizer::TT[(0x66E2A4 - 0x006685A0) / 4] = 4194326;
                Tokenizer::TT[(0x66E5FC - 0x006685A0) / 4] = 22;
                const char* v8 = $abc;
                while ( 1 )
                {
                    char v9 = *v8;
                    if ( !v9 )
                        break;
                    // dword_66B9D4[v9] = 13;
                    Tokenizer::TT[(0x66B9D4 - 0x006685A0) / 4 + v9] = 13;
                    ++v8;
                }
                for (const char* n = _0123; ; ++n )
                {
                    char v11 = *n;
                    if ( !v11 )
                        break;
                    // dword_66B9D4[v11] = 13;
                    Tokenizer::TT[(0x66B9D4 - 0x006685A0) / 4 + v11] = 13;
                }
                Tokenizer::TT[(0x66BDD4 - 0x006685A0) / 4] = 0x620001;
                for (const char* n = _0123; ; ++n )
                {
                    char v11 = *n;
                    if ( !v11 )
                        break;
                    Tokenizer::TT[(0x6691AC - 0x006685A0) / 4 + v11] = 11;
                }
                Tokenizer::TT[(0x669264 - 0x006685A0) / 4] = 4;
                Tokenizer::TT[(0x6695AC - 0x006685A0) / 4] = 0x460001;
                Tokenizer::TT[(0x669668 - 0x006685A0) / 4] = 327681;
                Tokenizer::TT[(0x6699B0 - 0x006685A0) / 4] = -1;
                v8 = _0123;
                while ( 1 )
                {
                    char v9 = *v8;
                    if ( !v9 )
                        break;
                    Tokenizer::TT[(0x66ADC8 - 0x006685A0) / 4 + v9] = 10;
                    ++v8;
                }
                Tokenizer::TT[(0x66AE80 - 0x006685A0) / 4] = 11;
                Tokenizer::TT[(0x66B1C8 - 0x006685A0) / 4] = 0x4A0001;
                v8 = _0123;
                while ( 1 )
                {
                    char v9 = *v8;
                    if ( !v9 )
                        break;
                    Tokenizer::TT[(0x66B1CC - 0x006685A0) / 4 + v9] = 11;
                    ++v8;
                }
                Tokenizer::TT[(0x66B5CC - 0x006685A0) / 4] = 0x4A0001;
                Tokenizer::TT[(0x66B6C4 - 0x006685A0) / 4] = 19;
                Tokenizer::TT[(0x66B9D0 - 0x006685A0) / 4] = -1;
                Tokenizer::TT[(0x66D2E0 - 0x006685A0) / 4] = 327681;
                Tokenizer::TT[(0x66D5EC - 0x006685A0) / 4] = 0x460001;
                Tokenizer::TT[(0x66BE70 - 0x006685A0) / 4] = 327681;
                Tokenizer::TT[(0x66C1D8 - 0x006685A0) / 4] = 4325377;
                Tokenizer::TT[(0x66C3CC - 0x006685A0) / 4] = 327681;
                Tokenizer::TT[(0x66C5DC - 0x006685A0) / 4] = 4325377;
                Tokenizer::TT[(0x668E9C - 0x006685A0) / 4] = 327681;
                Tokenizer::TT[(0x6691A8 - 0x006685A0) / 4] = 0x460001;
                Tokenizer::TT[(0x669F28 - 0x006685A0) / 4] = 7;
                Tokenizer::TT[(0x669DE0 - 0x006685A0) / 4] = 9568257;
                Tokenizer::TT[(0x66A5BC - 0x006685A0) / 4] = 6;
                Tokenizer::TT[(0x66A1E4 - 0x006685A0) / 4] = 9568257;
                Tokenizer::TT[(0x669E40 - 0x006685A0) / 4] = 1114113;
                Tokenizer::TT[(0x66A1B8 - 0x006685A0) / 4] = 6;
                Tokenizer::TT[(0x66A730 - 0x006685A0) / 4] = 9;
                Tokenizer::TT[(0x66A5E8 - 0x006685A0) / 4] = 9568257;
                Tokenizer::TT[(0x66ADC4 - 0x006685A0) / 4] = 8;
                Tokenizer::TT[(0x66A9EC - 0x006685A0) / 4] = 9568257;
                Tokenizer::TT[(0x66A65C - 0x006685A0) / 4] = 1114113;
                Tokenizer::TT[(0x66A9C0 - 0x006685A0) / 4] = 8;
                Tokenizer::TT[(0x66C6D4 - 0x006685A0) / 4] = 327681;
                Tokenizer::TT[(0x66C6D0 - 0x006685A0) / 4] = 327681;
                Tokenizer::TT[(0x66C9E0 - 0x006685A0) / 4] = 0x460001;
                Tokenizer::TT[(0x66CAD8 - 0x006685A0) / 4] = 327681;
                Tokenizer::TT[(0x66CADC - 0x006685A0) / 4] = 327681;
                Tokenizer::TT[(0x66CDE4 - 0x006685A0) / 4] = 0x460001;
                Tokenizer::TT[(0x66CEDC - 0x006685A0) / 4] = 20;
                Tokenizer::TT[(0x66D6E4 - 0x006685A0) / 4] = 327681;
                Tokenizer::TT[(0x66D9F0 - 0x006685A0) / 4] = 0x460001;
                Tokenizer::TT[(0x66D1E8 - 0x006685A0) / 4] = 0x460001;
                
            }
        }
        
        int GetTokens_i = 0;
        int Tokenizer::GetTokens(std::vector<WXML::EXPRLib::Token> & a2, std::string &a3)
        {
            GetTokens_i++;
            int inner_GetTokens_i = GetTokens_i;
            int v21 = 18899;
            WXML::EXPRLib::Tokenizer::InitTransitTable();
            int v24 = 1;
            int v29 = 0;
            int v28 = 0;
            while (v28 <= this->offset_0.size())
            {
                if (!--v21)
                {
                    a3 = "something must be wrong";
                    return -1;
                }
                std::string v25 = this->offset_0;
                int v3 = this->offset_0[v28];
                if (v28 == this->offset_0.size())
                {
                    v3 = 0;
                }
                int t = WXML::EXPRLib::Tokenizer::TT[257 * v24 + v3];
                if (!t)
                {
                    t = WXML::EXPRLib::Tokenizer::TT[(0x6689A0 - 0x006685A0) / 4 + 257 * v24];
                    if (!t)
                    {
                        std::stringstream v39;
                        v39 << "no transition for " << v24 << " with input " << v3;
                        a3 = v39.str();
                        return -1;
                    }
                }
                if (t == -1)
                {
                    std::stringstream v39;
                    v39 << "unexpected `" << v3 << "` at pos" << v28;
                    a3 = v39.str();
                }
                v24 = (uint16_t)t;
                if ((t & 0x30000) != 0)
                {
                    int v8 = 1;
                    int v27 = ((t & 0x20000) == 0) + v28 - 1;
                    if (!bittest(&t, 0x13u))
                    {
                        v8 = 2;
                        if (!bittest(&t, 0x14u))
                        {
                            v8 = ((t << 10) >> 31) & 3;
                        }
                    }
                    if (v29 <= v27)
                    {
                        WXML::EXPRLib::Token v39;
                        v39.offset_0 = v8;
                        const char* KEYWORDS[4] = { "true", "false", "undefined", "null"};
                        if (v8)
                        {
                            const char **v31 = KEYWORDS;
                            std::string v26 = this->offset_0.substr(v29, v27 + 1 - v29);

                            v39.offset_12 = v26;
                            for (int i = 0; i < 4; i++)
                            {
                                if (!strcmp(v26.data(), v31[i]))
                                {
                                    v39.offset_0 = 4;
                                    break;
                                }
                            }
                            
                        }
                        else
                        {
                            v39.offset_4 = this->offset_0.substr(v29, v27 + 1 - v29);
                        }
                        a2.push_back(v39);
                        v29 = v27 + 1;
                    }
                }
                v28 += (t & 0x400000) == 0;
                if (((uint)t & 0x800000) != 0)
                    v29 = v28;
            }
            return 0;
            
        }
    }
}