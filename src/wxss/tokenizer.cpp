#include "../include/wxss.h"
#include <cstring>
#include <sstream>

namespace WXSS
{
    
    Tokenizer::Tokenizer(/* args */)
    {
    }
    
    Tokenizer::Tokenizer(char const* str, std::string const& a3)
    {
        this->offset_0.replace(0, 0, str, strlen(str));
        this->offset_24.assign(a3);
    }
    
    Tokenizer::~Tokenizer()
    {
    }
    
    int Tokenizer::TT[26113] = {0};
    bool Tokenizer::bInited = false;
    void Tokenizer::InitTransitTable(/* args */)
    {
        // start 0x005222A0
        if(!this->bInited)
        {
            // InitTransitTable - 0
            this->bInited = true;
            const char* ntr = " \n\t\r";
            for (int i = 0; i < 5; i++)
            {
                char v1 = ntr[i];
                this->TT[(0x5232A0 - 0x005222A0) / 4 + 2 * v1] = 134217729;
                this->TT[(0x5232A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            const char* dotabc = ".abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_-";
            for (int i = 0; i < 56; i++)
            {
                char v1 = dotabc[i];
                this->TT[(0x5232A0 - 0x005222A0) / 4 + 2 * v1] = 2;
                this->TT[(0x5232A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            const char* _0123 = "0123456789";
            for (int i = 0; i < 11; i++)
            {
                char v1 = _0123[i];
                this->TT[(0x5232A0 - 0x005222A0) / 4 + 2 * v1] = 5;
                this->TT[(0x5232A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            // InitTransitTable - 5
            const char* sharp = "#*,{}[]:()~=|>\"+^@;";
            for (int i = 0; i < 20; i++)
            {
                char v1 = sharp[i];
                this->TT[(0x5232A0 - 0x005222A0) / 4 + 2 * v1] = 1114113;
                this->TT[(0x5232A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            this->TT[(0x523678 - 0x005222A0) / 4] = 1114116;
            this->TT[(0x52367C - 0x005222A0) / 4] = 0;
            this->TT[(0x5232A0 - 0x005222A0) / 4] = 1;
            this->TT[(0x5232A4 - 0x005222A0) / 4] = 0;
            this->TT[(0x5233B0 - 0x005222A0) / 4] = 6;
            this->TT[(0x5233B4 - 0x005222A0) / 4] = 0;
            this->TT[(0x5233D8 - 0x005222A0) / 4] = 7;
            this->TT[(0x5233DC - 0x005222A0) / 4] = 0;
            this->TT[(0x5234A0 - 0x005222A0) / 4] = 23;
            this->TT[(0x5234A4 - 0x005222A0) / 4] = 0;
            this->TT[(0x5233B8 - 0x005222A0) / 4] = 3;
            this->TT[(0x5233BC - 0x005222A0) / 4] = 0;
            this->TT[(0x523AA0 - 0x005222A0) / 4] = -1;
            this->TT[(0x523AA4 - 0x005222A0) / 4] = -1;
            this->TT[(0x5233C0 - 0x005222A0) / 4] = 33619969;
            this->TT[(0x5233C4 - 0x005222A0) / 4] = 0;
            this->TT[(0x53A678 - 0x005222A0) / 4] = 88211481;
            this->TT[(0x53A67C - 0x005222A0) / 4] = 0;
            this->TT[(0x53A2A0 - 0x005222A0) / 4] = -1;
            this->TT[(0x53A2A4 - 0x005222A0) / 4] = -1;
            this->TT[(0x53AAA0 - 0x005222A0) / 4] = 24;
            this->TT[(0x53AAA4 - 0x005222A0) / 4] = 0;
            this->TT[(0x53B678 - 0x005222A0) / 4] = 1114113;
            this->TT[(0x53B67C - 0x005222A0) / 4] = 0;
            this->TT[(0x53BAA0 - 0x005222A0) / 4] = -1;
            this->TT[(0x53BAA4 - 0x005222A0) / 4] = -1;
            // InitTransitTable - 10
            for (int i = 0; i < 56; i++)
            {
                char v1 = dotabc[i];
                this->TT[(0x5392A0 - 0x005222A0) / 4 + 2 * v1] = 2;
                this->TT[(0x5392A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            this->TT[(0x539AA0 - 0x005222A0) / 4] = 68288513;
            this->TT[(0x539AA4 - 0x005222A0) / 4] = 0;
            for (int i = 0; i < 56; i++)
            {
                char v1 = dotabc[i];
                this->TT[(0x5272A0 - 0x005222A0) / 4 + 2 * v1] = 5;
                this->TT[(0x5272A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            // InitTransitTable - 15
            for (int i = 0; i < 11; i++)
            {
                char v1 = _0123[i];
                this->TT[(0x5272A0 - 0x005222A0) / 4 + 2 * v1] = 5;
                this->TT[(0x5272A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            this->TT[(0x5273C8 - 0x005222A0) / 4] = 589825;
            this->TT[(0x5273CC - 0x005222A0) / 4] = 0;
            this->TT[(0x527AA0 - 0x005222A0) / 4] = 67502081;
            this->TT[(0x527AA4 - 0x005222A0) / 4] = 0;
            this->TT[(0x5283B0 - 0x005222A0) / 4] = 327681;
            this->TT[(0x5283B4 - 0x005222A0) / 4] = 0;
            this->TT[(0x528AA0 - 0x005222A0) / 4] = 6;
            this->TT[(0x528AA4 - 0x005222A0) / 4] = 0;
            this->TT[(0x5293D8 - 0x005222A0) / 4] = 327681;
            this->TT[(0x5293DC - 0x005222A0) / 4] = 0;
            this->TT[(0x529AA0 - 0x005222A0) / 4] = 7;
            this->TT[(0x529AA4 - 0x005222A0) / 4] = 0;
            this->TT[(0x523418 - 0x005222A0) / 4] = 134217743;
            this->TT[(0x52341C - 0x005222A0) / 4] = 0;
            this->TT[(0x5313F0 - 0x005222A0) / 4] = 16;
            this->TT[(0x5313F4 - 0x005222A0) / 4] = 0;
            this->TT[(0x531AA0 - 0x005222A0) / 4] = 134217729;
            this->TT[(0x531AA4 - 0x005222A0) / 4] = 0;
            this->TT[(0x5323F0 - 0x005222A0) / 4] = 17;
            this->TT[(0x5323F4 - 0x005222A0) / 4] = 0;
            this->TT[(0x532AA0 - 0x005222A0) / 4] = 16;
            this->TT[(0x532AA4 - 0x005222A0) / 4] = 0;
            this->TT[(0x533418 - 0x005222A0) / 4] = 134217729;
            this->TT[(0x53341C - 0x005222A0) / 4] = 0;
            this->TT[(0x5333F0 - 0x005222A0) / 4] = 67108880;
            this->TT[(0x5333F4 - 0x005222A0) / 4] = 0;
            this->TT[(0x533AA0 - 0x005222A0) / 4] = 16;
            this->TT[(0x533AA4 - 0x005222A0) / 4] = 0;
            this->TT[(0x526418 - 0x005222A0) / 4] = 134217746;
            this->TT[(0x52641C - 0x005222A0) / 4] = 0;
            this->TT[(0x5343F0 - 0x005222A0) / 4] = 19;
            this->TT[(0x5343F4 - 0x005222A0) / 4] = 0;
            this->TT[(0x534AA0 - 0x005222A0) / 4] = 134217732;
            this->TT[(0x534AA4 - 0x005222A0) / 4] = 0;
            this->TT[(0x5353F0 - 0x005222A0) / 4] = 20;
            this->TT[(0x5353F4 - 0x005222A0) / 4] = 0;
            this->TT[(0x535AA0 - 0x005222A0) / 4] = 19;
            this->TT[(0x535AA4 - 0x005222A0) / 4] = 0;
            this->TT[(0x536418 - 0x005222A0) / 4] = 134217732;
            this->TT[(0x53641C - 0x005222A0) / 4] = 0;
            this->TT[(0x5363F0 - 0x005222A0) / 4] = 67108883;
            this->TT[(0x5363F4 - 0x005222A0) / 4] = 0;
            this->TT[(0x536AA0 - 0x005222A0) / 4] = 19;
            this->TT[(0x536AA4 - 0x005222A0) / 4] = 0;
            // InitTransitTable - 20
            for (int i = 0; i < 56; i++)
            {
                char v1 = dotabc[i];
                this->TT[(0x5242A0 - 0x005222A0) / 4 + 2 * v1] = 2;
                this->TT[(0x5242A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            for (int i = 0; i < 11; i++)
            {
                char v1 = _0123[i];
                this->TT[(0x5242A0 - 0x005222A0) / 4 + 2 * v1] = 2;
                this->TT[(0x5242A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            for (int i = 0; i < 5; i++)
            {
                char v1 = ntr[i];
                this->TT[(0x5242A0 - 0x005222A0) / 4 + 2 * v1] = 67764225;
                this->TT[(0x5242A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            // InitTransitTable - 25
            this->TT[(0x5243B0 - 0x005222A0) / 4] = 67764225;
            this->TT[(0x5243B4 - 0x005222A0) / 4] = 0;
            this->TT[(0x524AA0 - 0x005222A0) / 4] = 67764225;
            this->TT[(0x524AA4 - 0x005222A0) / 4] = 0;
            for (int i = 0; i < 56; i++)
            {
                char v1 = dotabc[i];
                this->TT[(0x5252A0 - 0x005222A0) / 4 + 2 * v1] = 3;
                this->TT[(0x5252A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            for (int i = 0; i < 11; i++)
            {
                char v1 = _0123[i];
                this->TT[(0x5252A0 - 0x005222A0) / 4 + 2 * v1] = 3;
                this->TT[(0x5252A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            // InitTransitTable - 30
            this->TT[(0x525AA0 - 0x005222A0) / 4] = 69337089;
            this->TT[(0x525AA4 - 0x005222A0) / 4] = 0;
            for (int i = 0; i < 5; i++)
            {
                char v1 = ntr[i];
                this->TT[(0x5262A0 - 0x005222A0) / 4 + 2 * v1] = 134217732;
                this->TT[(0x5262A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            for (int i = 0; i < 56; i++)
            {
                char v1 = dotabc[i];
                this->TT[(0x5262A0 - 0x005222A0) / 4 + 2 * v1] = 8;
                this->TT[(0x5262A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            for (int i = 0; i < 56; i++)
            {
                char v1 = dotabc[i];
                this->TT[(0x52A2A0 - 0x005222A0) / 4 + 2 * v1] = 8;
                this->TT[(0x52A2A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            // InitTransitTable - 35
            for (int i = 0; i < 11; i++)
            {
                char v1 = _0123[i];
                this->TT[(0x52A2A0 - 0x005222A0) / 4 + 2 * v1] = 8;
                this->TT[(0x52A2A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            for (int i = 0; i < 5; i++)
            {
                char v1 = ntr[i];
                this->TT[(0x52A2A0 - 0x005222A0) / 4 + 2 * v1] = 67764228;
                this->TT[(0x52A2A4 - 0x005222A0) / 4 + 2 * v1] = 0;
            }
            this->TT[(0x52A470 - 0x005222A0) / 4] = 67764228;
            this->TT[(0x52A474 - 0x005222A0) / 4] = 0;
            this->TT[(0x52A688 - 0x005222A0) / 4] = 67764228;
            this->TT[(0x52A68C - 0x005222A0) / 4] = 0;
            this->TT[(0x52A478 - 0x005222A0) / 4] = 67764228;
            this->TT[(0x52A47C - 0x005222A0) / 4] = 0;
            this->TT[(0x52AAA0 - 0x005222A0) / 4] = -1;
            this->TT[(0x52AAA4 - 0x005222A0) / 4] = -1;
            this->TT[(0x526470 - 0x005222A0) / 4] = 1114121;
            this->TT[(0x526474 - 0x005222A0) / 4] = 0;
            this->TT[(0x526478 - 0x005222A0) / 4] = 1114116;
            this->TT[(0x52647C - 0x005222A0) / 4] = 0;
            this->TT[(0x526688 - 0x005222A0) / 4] = 1114113;
            this->TT[(0x52668C - 0x005222A0) / 4] = 0;
            this->TT[(0x526AA0 - 0x005222A0) / 4] = -1;
            this->TT[(0x526AA4 - 0x005222A0) / 4] = -1;
            this->TT[(0x52B478 - 0x005222A0) / 4] = 84279300;
            this->TT[(0x52B47C - 0x005222A0) / 4] = 0;
            this->TT[(0x52B688 - 0x005222A0) / 4] = 84279300;
            this->TT[(0x52B68C - 0x005222A0) / 4] = 0;
            this->TT[(0x52B3E0 - 0x005222A0) / 4] = 10;
            this->TT[(0x52B3E4 - 0x005222A0) / 4] = 0;
            this->TT[(0x52B3B0 - 0x005222A0) / 4] = 11;
            this->TT[(0x52B3B4 - 0x005222A0) / 4] = 0;
            this->TT[(0x52B3D8 - 0x005222A0) / 4] = 13;
            this->TT[(0x52B3DC - 0x005222A0) / 4] = 0;
            this->TT[(0x52C3E8 - 0x005222A0) / 4] = 9;
            this->TT[(0x52C3EC - 0x005222A0) / 4] = 0;
            this->TT[(0x52C3B0 - 0x005222A0) / 4] = 12;
            this->TT[(0x52C3B4 - 0x005222A0) / 4] = 0;
            this->TT[(0x52C3D8 - 0x005222A0) / 4] = 14;
            this->TT[(0x52C3DC - 0x005222A0) / 4] = 0;
            this->TT[(0x52CAA0 - 0x005222A0) / 4] = 10;
            this->TT[(0x52CAA4 - 0x005222A0) / 4] = 0;
            this->TT[(0x52D3B0 - 0x005222A0) / 4] = 9;
            this->TT[(0x52D3B4 - 0x005222A0) / 4] = 0;
            this->TT[(0x52F3D8 - 0x005222A0) / 4] = 9;
            this->TT[(0x52F3DC - 0x005222A0) / 4] = 0;
            this->TT[(0x52E3B0 - 0x005222A0) / 4] = 10;
            this->TT[(0x52E3B4 - 0x005222A0) / 4] = 0;
            this->TT[(0x5303D8 - 0x005222A0) / 4] = 10;
            this->TT[(0x5303DC - 0x005222A0) / 4] = 0;
            this->TT[(0x52DAA0 - 0x005222A0) / 4] = 11;
            this->TT[(0x52DAA4 - 0x005222A0) / 4] = 0;
            this->TT[(0x52FAA0 - 0x005222A0) / 4] = 13;
            this->TT[(0x52FAA4 - 0x005222A0) / 4] = 0;
            this->TT[(0x52EAA0 - 0x005222A0) / 4] = 12;
            this->TT[(0x52EAA4 - 0x005222A0) / 4] = 0;
            this->TT[(0x530AA0 - 0x005222A0) / 4] = 14;
            this->TT[(0x530AA4 - 0x005222A0) / 4] = 0;
            this->TT[(0x52BAA0 - 0x005222A0) / 4] = 9;
            this->TT[(0x52BAA4 - 0x005222A0) / 4] = 0;
            // InitTransitTable - 40
        }
    }
    
    bool WXSS::Tokenizer::SubStrCheckingClause::inited = false;
    WXSS::Tokenizer::SubStrCheckingClause WXSS::Tokenizer::SCC[5];
    void Tokenizer::InitSubStrCheckingCaluseTable()
    {
        if (!SubStrCheckingClause::inited)
        {
            SubStrCheckingClause::inited = true;
            SubStrCheckingClause v1(9, "url", 9);
            WXSS::Tokenizer::SCC[0] = v1;
            SubStrCheckingClause v2(9, "rpx", 9);
            WXSS::Tokenizer::SCC[1] = v2;
            SubStrCheckingClause v3(10, "url", 9);
            WXSS::Tokenizer::SCC[2] = v3;
            SubStrCheckingClause v4(10, "rpx", 9);
            WXSS::Tokenizer::SCC[3] = v4;
            SubStrCheckingClause v5(0, "", 0);
            WXSS::Tokenizer::SCC[4] = v5;
        }
    }

    int Tokenizer::GetTokens(std::vector<WXSS::Token> & a2, std::string & a3, int a4)
    {
        // GetTokens - 0
        this->InitTransitTable();
        this->InitSubStrCheckingCaluseTable();

        int v4 = 1;
        if (a4 > 0)
        {
            v4 = a4;
        }
        std::string v35, v41;
        int v47 = 0, v44 = 0;
        a2.reserve(a2.size());
        // GetTokens - 5
        int AnotherTypeByAnySubStr = 0;
        int v33 = 4194305;
        int v31 = 0;
        for (int sa = 0; ; sa = v31)
        {
            if (v47 > this->offset_0.length())
            {
                return 0;
            }
            if (!--v33)
            {
                a3 = "something must be wrong";
                return -1;
            }
            char v10 = this->offset_0[v47];
            if (v47 == this->offset_0.length())
            {
                v10 = 0;
            }
            int v11 = this->TT[1024 * v4 + 2 * 10];
            // WXSS::TokenType AnotherTypeByAnySubStr;
            // AnotherTypeByAnySubStr = this->TryGetAnotherTypeByAnySubStr(this->offset_0.data(), v47, v42, AnotherTypeByAnySubStr);
        }

        // GetTokens - 10
        std::stringstream v66;
        v66 << this->offset_24 << "(" << v35;
        v66 << ":" << v41 << "): unexpected `" << v44 << "` at pos " << (v47 + 1);
        if (!v47 && v44 > 0xFDu)
        {
            v66 << " (shoud you check if there's any BOM at the begin of file)";
        }
        a3 = v66.str();
        return 0;
    }
    Tokenizer::SubStrCheckingClause::SubStrCheckingClause()
    {
    }
    Tokenizer::SubStrCheckingClause::SubStrCheckingClause(WXSS::Tokenizer::STATE a2, char const* a3, WXSS::TokenType a4)
    {
        this->offset_0 = a2;
        this->offset_4 = strlen(a3);
        strcpy(this->offset_8, a3);
        this->offset_24 = a4;
    }
    Tokenizer::SubStrCheckingClause& Tokenizer::SubStrCheckingClause::operator=(SubStrCheckingClause const & t)
    {
        this->offset_0 = t.offset_0;
        this->offset_4 = t.offset_4;
        memcpy(this->offset_8, t.offset_8, 16);
        this->offset_24 = t.offset_24;
        return *this;
    }
}