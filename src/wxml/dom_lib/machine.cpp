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
            /*
            DC F2 97 00 E8 00 F1 00  70 BB F0 00 0B（起点） 00 00 00（总长度）
            06 00 00 00 01 00 00 00（+2行数）  0B 00 00 00（+3当前行长度） 01 00 00 00
            06 00 00 00 06 00 00 00  98 00 F1 00（+7文件路径） 30 00 00 00
            30 00 00 00 A0 3A 53 00  94 8B 53 00 18 F3 97 00
            20 09 47 00 C0 F2 97 00  00 B4 75 FA 88 91 F0 00
            2A 00 00 00 5C FC 97 00  98 F7 97 00 58 56 40 00
            B8 93 F0 00 88 FC 97 00  98 91 F0 00 94 F3 97 00
            42 04 04 42 00 00 F0 00  EC 02 04 EA 7F 00 00 00
            D8 F4 97 00 00 00 F0 00  0A 00 04 06 70 00 00 00
            42 04 04 42 0A 00 00 00  01 00 00 00 7C F8 97 00
            */
            InitTransitTable();
            this->filePath.assign(filePath);
        }
        
        Machine::~Machine()
        {
        }
        bool Machine::bInited = false;
        /*
        WXML::DOMLib::Machine::TT 00567560
        WXML::DOMLib::Machine::TT 00668560
        */
        int Machine::TT[0x101000u];
        int Machine::STT[0x80] = {0};

        void Machine::InitTransitTable()
        {
            // bInited是静态的
            if (!this->bInited)
            {
                this->bInited = true;
                char _v0[] = " \n\t\r";
                char * v0 = _v0;
                memset(&this->TT, 0, 0x101000u);
               
                // dword_5806EC = 99;
                this->TT[ (0x5806EC - 0x00567560)/4] = 99;
                // dword_567A54 = 131074;
                this->TT[ (0x567A54 - 0x00567560)/4] = 131074;
                // dword_567B50 = 15;
                this->TT[ (0x567B50 - 0x00567560)/4] = 15;
                // dword_567D64 = 1;
                this->TT[ (0x567D64 - 0x00567560)/4] = 1;
                // dword_567964 = 131171;
                this->TT[ (0x567964 - 0x00567560)/4] = 131171;
                // dword_56B388 = 16;
                this->TT[ (0x56B388 - 0x00567560)/4] = 16;
                // dword_56B59C = 1;
                this->TT[ (0x56B59C - 0x00567560)/4] = 1;
                // dword_56B794 = 17;
                this->TT[ (0x56B794 - 0x00567560)/4] = 17;
                this->TT[ (0x56B5A0 - 0x00567560)/4] = -1;
                this->TT[ (0x56B9A0 - 0x00567560)/4] = 16;
                this->TT[ (0x56BB98 - 0x00567560)/4] = 1;
                this->TT[ (0x56BDA4 - 0x00567560)/4] = 1048592;
                this->TT[ (0x56B628 - 0x00567560)/4] = 11;
                this->TT[ (0x56B63C - 0x00567560)/4] = 13;
                this->TT[ (0x56A2FC - 0x00567560)/4] = 12;
                this->TT[ (0x56A990 - 0x00567560)/4] = 11;
                this->TT[ (0x56A214 - 0x00567560)/4] = 16;
                this->TT[ (0x56A18C - 0x00567560)/4] = -1;
                this->TT[ (0x56A58C - 0x00567560)/4] = 11;
                this->TT[ (0x56AB04 - 0x00567560)/4] = 14;
                this->TT[ (0x56B198 - 0x00567560)/4] = 13;
                this->TT[ (0x56AA30 - 0x00567560)/4] = 16;
                this->TT[ (0x56A994 - 0x00567560)/4] = -1;
                this->TT[ (0x56AD94 - 0x00567560)/4] = 13;
                
                while (1)
                {
                    char v1 = *v0;
                    if (!v1)
                        break;
                    this->TT[ (0x567D68 - 0x00567560)/4 + v1] = 655363;
                    v0++;
                }
                char _i[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_-:";
                for (char *i = _i; ; ++i )
                {
                    char v3 = *i;
                    if ( !v3 )
                        break;
                    this->TT[ (0x567D68 - 0x00567560)/4 + v3] = 0x00020004; // 131076
                }
                this->TT[ (0x567E24 - 0x00567560)/4] = 262147;
                char *v4 = _i;
                this->TT[ (0x567DEC - 0x00567560)/4] = 33;
                this->TT[ (0x567F44 - 0x00567560)/4] = 22;
                this->TT[ (0x568168 - 0x00567560)/4] = -1;
                this->TT[ (0x56FA98 - 0x00567560)/4] = 34;
                this->TT[ (0x56FDE4 - 0x00567560)/4] = -1;
                this->TT[ (0x56FE9C - 0x00567560)/4] = 19;
                this->TT[ (0x5701E8 - 0x00567560)/4] = -1;
                this->TT[ (0x56C260 - 0x00567560)/4] = 20;
                this->TT[ (0x56C5AC - 0x00567560)/4] = 19;
                this->TT[ (0x56C664 - 0x00567560)/4] = 21;
                this->TT[ (0x56C9B0 - 0x00567560)/4] = 19;
                this->TT[ (0x56CAAC - 0x00567560)/4] = 524289;
                this->TT[ (0x56CA68 - 0x00567560)/4] = 21;
                this->TT[ (0x56CDB4 - 0x00567560)/4] = 19;
                while ( 1 )
                {
                    char v5 = *v4;
                    if ( !v5 )
                        break;
                    this->TT[ (0x568570 - 0x00567560)/4 + v5] = 4;
                    ++v4;
                }
                char _j[] = "0123456789";
                for (char * j = _j; ; ++j )
                {
                    char v7 = *j;
                    if ( !v7 )
                        break;
                    this->TT[ (0x568570 - 0x00567560)/4 + v7] = 4;
                }
                for (char* k = _v0; ; ++k )
                {
                    char v9 = *k;
                    if ( !v9 )
                        break;
                    this->TT[ (0x568570 - 0x00567560)/4 + v9] = 655363;
                }
                this->TT[ (0x568664 - 0x00567560)/4] = 131078;
                char *v10 = _v0;
                this->TT[ (0x5685F8 - 0x00567560)/4] = -1;
                this->TT[ (0x568668 - 0x00567560)/4] = 393217;
                this->TT[ (0x56862C - 0x00567560)/4] = 131090;
                this->TT[ (0x568970 - 0x00567560)/4] = 131075;
                this->TT[ (0x568570 - 0x00567560)/4] = -1;
                while ( 1 )
                {
                    char v11 = *v10;
                    if ( !v11 )
                        break;
                    this->TT[ (0x568D78 - 0x00567560)/4 + v11] = 655363;
                    ++v10;
                }
                for ( char *m = _i; ; ++m )
                {
                    char v13 = *m;
                    if ( !v13 )
                        break;
                    this->TT[ (0x568D78 - 0x00567560)/4 + v13] = 131077;
                }
                this->TT[ (0x568E00 - 0x00567560)/4] = 131077;
                char *v14 = _v0;
                this->TT[ (0x568E14 - 0x00567560)/4] = 131081;
                this->TT[ (0x568D78 - 0x00567560)/4] = -1;
                this->TT[ (0x569178 - 0x00567560)/4] = -1;
                while ( 1 )
                {
                    char v15 = *v14;
                    if ( !v15 )
                        break;
                    this->TT[ (0x56816C - 0x00567560)/4 + v15] = 524291;
                    ++v14;
                }
                for ( char* n = _i; ; ++n )
                {
                    char v17 = *n;
                    if ( !v17 )
                        break;
                    this->TT[ (0x56816C - 0x00567560)/4 + v17] = 4;
                }
                for ( char* ii = _j; ; ++ii )
                {
                    char v19 = *ii;
                    if ( !v19 )
                        break;
                    this->TT[ (0x56816C - 0x00567560)/4 + v19] = -1;
                }
                this->TT[ (0x56825C - 0x00567560)/4] = -1;
                char *v20 = _i;
                this->TT[ (0x5681F4 - 0x00567560)/4] = 5;
                this->TT[ (0x568208 - 0x00567560)/4] = 9;
                this->TT[ (0x568228 - 0x00567560)/4] = 18;
                this->TT[ (0x568264 - 0x00567560)/4] = 262145;
                this->TT[ (0x568260 - 0x00567560)/4] = 6;
                this->TT[ (0x56816C - 0x00567560)/4] = -1;
                this->TT[ (0x56856C - 0x00567560)/4] = -1;
                while ( 1 )
                {
                    char v21 = *v20;
                    if ( !v21 )
                        break;
                    this->TT[ (0x56BDA8 - 0x00567560)/4 + v21] = 131076;
                    ++v20;
                }
                this->TT[ (0x56BEA0 - 0x00567560)/4] = 262145;
                char *v22 = _v0;
                this->TT[ (0x56C1A8 - 0x00567560)/4] = -1;
                this->TT[ (0x568AE4 - 0x00567560)/4] = 7;
                this->TT[ (0x56899C - 0x00567560)/4] = -1;
                this->TT[ (0x56957C - 0x00567560)/4] = 5;
                this->TT[ (0x5691A4 - 0x00567560)/4] = 655363;
                this->TT[ (0x5689FC - 0x00567560)/4] = 262147;
                this->TT[ (0x568974 - 0x00567560)/4] = -1;
                this->TT[ (0x568D74 - 0x00567560)/4] = 5;
                this->TT[ (0x569AF4 - 0x00567560)/4] = 10;
                this->TT[ (0x5699AC - 0x00567560)/4] = -1;
                this->TT[ (0x56A188 - 0x00567560)/4] = 9;
                this->TT[ (0x569DB0 - 0x00567560)/4] = 655363;
                this->TT[ (0x569A20 - 0x00567560)/4] = 262147;
                this->TT[ (0x569984 - 0x00567560)/4] = -1;
                this->TT[ (0x569D84 - 0x00567560)/4] = 9;
                this->TT[ (0x56CF98 - 0x00567560)/4] = 23;
                this->TT[ (0x56D1B8 - 0x00567560)/4] = 3145732;
                this->TT[ (0x56D388 - 0x00567560)/4] = 24;
                this->TT[ (0x56D5BC - 0x00567560)/4] = 3145732;
                while ( 1 )
                {
                    char v23 = *v22;
                    if ( !v23 )
                        break;
                    this->TT[ (0x56D5C0 - 0x00567560)/4 + v23] = 25;
                    ++v22;
                }
                this->TT[ (0x56D6B8 - 0x00567560)/4] = 31;
                char *v24 = _v0;
                this->TT[ (0x56D9C0 - 0x00567560)/4] = 3145732;
                this->TT[ (0x56DABC - 0x00567560)/4] = 31;
                this->TT[ (0x56DA80 - 0x00567560)/4] = 32;
                this->TT[ (0x56DDC4 - 0x00567560)/4] = 25;
                this->TT[ (0x56F6D8 - 0x00567560)/4] = 262145;
                this->TT[ (0x56F9E0 - 0x00567560)/4] = 1048601;
                this->TT[ (0x56F2CC - 0x00567560)/4] = 131098;
                this->TT[ (0x56F5DC - 0x00567560)/4] = 31;
                this->TT[ (0x56DE84 - 0x00567560)/4] = 27;
                this->TT[ (0x56E1C8 - 0x00567560)/4] = 0x50001E + 1;
                this->TT[ (0x56E3A8 - 0x00567560)/4] = 28;
                this->TT[ (0x56E5CC - 0x00567560)/4] = 0x50001E + 1;
                this->TT[ (0x56E7B0 - 0x00567560)/4] = 29;
                this->TT[ (0x56E9D0 - 0x00567560)/4] = 0x50001E + 1;
                this->TT[ (0x56EBA0 - 0x00567560)/4] = 30;
                this->TT[ (0x56EDD4 - 0x00567560)/4] = 0x50001E + 1;
                while ( 1 )
                {
                    char v25 = *v24;
                    if ( !v25 )
                        break;
                    this->TT[ (0x56EDD8 - 0x00567560)/4 + v25] = 30;
                    ++v24;
                }
                this->TT[ (0x56EED0 - 0x00567560)/4] = 524289;
                this->TT[ (0x56F1D8 - 0x00567560)/4] = -1;
                /*
                0x00566560
                1 - 1
                2 - 0
                3 - 0
                4 - 0
                5 - 2
                6 - 0
                */
                this->STT[ (0x566564 - 0x00566560)/4] = 1;
                this->STT[ (0x566574 - 0x00566560)/4] = 2;
                this->STT[ (0x566584 - 0x00566560)/4] = 2;
                this->STT[ (0x5665DC - 0x00566560)/4] = 3;
                this->STT[ (0x5665E0 - 0x00566560)/4] = 3;
            }
        }

        int Machine::Feed(
            char inputChar,
            std::vector<WXML::DOMLib::Token> & a3,
            std::string &errorMessage,
            std::vector<WXML::DOMLib::Token> & a5,
            int
            )
        {
            try
            {
                /* code */
                if (inputChar == '\n')
                {
                    // 一行结束，行数加一，长度变0
                    this->lineCount++;
                    this->lineLength = 0;
                }
                int v46;
                int v45;
                do{
                    v45 = this->offset_24;
                    v46 = this->TT[257 * v45 + inputChar];
                    if (!v46)
                    {
                        v46 = this->TT[ (0x567960 - 0x00567560)/4 + 257 * v45];
                        if(!v46)
                        {
                            std::stringstream ss;
                            ss << "BAD STATE MACHINE! AT INPUT ";
                            ss << this->offset_24 << " " << inputChar;
                            errorMessage = ss.str();
                            throw errorMessage;
                            // return;
                        }
                    }
                    if (v46 < 0)
                    {
                        std::stringstream ss;
                        ss << this->filePath << ":";
                        ss << this->lineCount << ":";
                        ss << this->lineLength << ":";
                        if (inputChar)
                        {
                            ss << "unexpected character `" << inputChar << "`";
                        }
                        else
                        {
                            ss << "unexpected end";
                        }
                        errorMessage = ss.str();
                        throw errorMessage;
                    }
                    this->offset_24 = (uint16_t)v46;
                    if (bittest(&v46, 0x15u)) // 0x15 -> 21
                    {
                        if (this->fileLength > this->offset_4)
                        {
                            WXML::DOMLib::Token token;
                            token.offset_8 = this->offset_16;
                            token.offset_12 = this->offset_20;
                            this->offset_20++;
                            token.offset_16 = this->offset_4;
                            this->offset_4++;
                            
                            token.offset_20 = 1;
                            token.offset_24 = 0;
                            a3.push_back(token);
                        }
                    }
                    if (bittest(&v46, 0x16u)) // 0x16 -> 22
                    {
                        auto v49 = a5.back();
                        a5.pop_back();
                        this->offset_16 = v49.offset_8;
                        this->offset_20 = v49.offset_12;
                        this->offset_4 = v49.offset_16;

                    }
                }while(bittest(&v46, 0x14u)); // 0x14 -> 20

                if (bittest(&v46, 0x11u)) // 0x11 -> 17
                {
                    if (this->offset_4 < this->fileLength)
                    {

                        WXML::DOMLib::Token token;
                        token.offset_8 = this->offset_16;
                        token.offset_12 = this->offset_20;
                        token.offset_16 = this->offset_4;
                        token.offset_20 = this->fileLength - this->offset_4;

                        this->offset_4 = this->fileLength;
                        this->offset_20 = this->lineLength;
                        this->offset_16 = this->lineCount;
                        token.offset_24 = WXML::DOMLib::Machine::STT[v45];
                        token.offset_56 = -1;
                        if(token.offset_24 == 3)
                        {
                            a5.push_back(token);
                        }
                        else
                        {
                            a3.push_back(token);
                        }
                    }

                }

                this->fileLength++;
                this->lineLength++;
                if (bittest(&v46, 0x12u)) // 0x12 -> 18
                {
                    WXML::DOMLib::Token v49;
                    v49.offset_8 = this->offset_16;
                    v49.offset_12 = this->offset_20;
                    auto t4 = this->offset_4;
                    this->offset_4 = this->fileLength;
                    this->offset_20 = this->lineLength;
                    this->offset_16 = this->lineCount;
                    v49.offset_16 = t4;
                    v49.offset_20 = this->fileLength - t4;
                    int stt = WXML::DOMLib::Machine::STT[v45];
                    v49.offset_24 = stt;
                    v49.offset_56 = -1;
                    if (stt == 3)
                    {
                        a5.push_back(v49);
                    }
                    else
                    {
                        a3.push_back(v49);
                    }
                }
                v46 &= 0x80000u;
                if (v46)
                {
                    offset_4 = fileLength;
                    offset_20 = lineLength;
                }
                return 0;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                return -1;
            }
            return 0;
            
        }
        void Machine::Reset()
        {
            this->fileLength = 0;
            this->offset_4 = 0;
            this->lineCount = 1;
            this->lineLength = 0;
            this->offset_16 = 1;
            this->offset_20 = 1;
            this->offset_24 = 1;
        }
        
    }
}