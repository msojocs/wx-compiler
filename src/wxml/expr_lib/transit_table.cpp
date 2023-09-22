#include "../../include/wxml.h"

namespace WXML
{
    
    namespace EXPRLib
    {
        TransitTable::TransitTable(/* args */)
        {
        }
        
        TransitTable::~TransitTable()
        {
        }
        TransitTable* TransitTable::instance = NULL;
        std::mutex TransitTable::m;
        TransitTable* TransitTable::GetInstance(void)
        {
            std::lock_guard<std::mutex> lock(m);
            if (instance == NULL) {
                instance = new WXML::EXPRLib::TransitTable();
            }
            return instance;
        }

        int TransitTable::GetExprNTType(void)
        {
            return 14;
        }

        int TransitTable::GetAttrListNTType(void)
        {
            return 12;
        }

        void TransitTable::Init_55F1E4(int root, std::string & key, std::vector<int>& offset4List)
        {
            std::map<std::string,std::vector<WXML::EXPRLib::BNF>> map1 = this->ret[root];
            std::vector<WXML::EXPRLib::BNF> exclamationVector = map1[key];
            WXML::EXPRLib::BNF bnf;
            if (exclamationVector.size() == 0)
            {
                exclamationVector.push_back(bnf);
            }
            else
            {
                bnf = exclamationVector[0];
            }
            std::vector<std::shared_ptr<WXML::EXPRLib::Base>> exclamationBaseList = bnf.offset_0;

            for (auto &&i : offset4List)
            {
                std::shared_ptr<WXML::EXPRLib::Base> base_1(new WXML::EXPRLib::Base());
                base_1->offset_0 = off_55F1E4;
                base_1->offset_4_int = i;
                exclamationBaseList.push_back(base_1);
            }
            bnf.offset_0 = exclamationBaseList;
            exclamationVector[0] = bnf;
            map1[key] = exclamationVector;
            this->ret[root] = map1;
        }
        void TransitTable::Init_55F1F8(int root, std::string & key)
        {
            std::map<std::string,std::vector<WXML::EXPRLib::BNF>> map1 = this->ret[root];
            std::vector<WXML::EXPRLib::BNF> exclamationVector = map1[key];
            WXML::EXPRLib::BNF bnf;
            if (exclamationVector.size() == 0)
            {
                exclamationVector.push_back(bnf);
            }
            else
            {
                bnf = exclamationVector[0];
            }
            std::vector<std::shared_ptr<WXML::EXPRLib::Base>> exclamationBaseList = bnf.offset_0;
            std::shared_ptr<WXML::EXPRLib::Base> base_1(new WXML::EXPRLib::Base());
            base_1->offset_0 = off_55F1F8;
            exclamationBaseList.push_back(base_1);
            bnf.offset_0 = exclamationBaseList;
            exclamationVector[0] = bnf;
            map1[key] = exclamationVector;
            this->ret[root] = map1;
        }
        void TransitTable::Init_55F220_0(int root, std::string & key, std::string & offset_4)
        {
            std::map<std::string,std::vector<WXML::EXPRLib::BNF>> map1 = this->ret[root];
            std::vector<WXML::EXPRLib::BNF> exclamationVector = map1[key];
            WXML::EXPRLib::BNF bnf;
            if (exclamationVector.size() == 0)
            {
                exclamationVector.push_back(bnf);
            }
            else
            {
                bnf = exclamationVector[0];
            }
            std::vector<std::shared_ptr<WXML::EXPRLib::Base>> baseList = bnf.offset_0;
            std::shared_ptr<WXML::EXPRLib::Base> base_1(new WXML::EXPRLib::Base());
            base_1->offset_0 = off_55F220;
            base_1->offset_4_str = offset_4;
            base_1->offset_32 = 0;
            baseList.push_back(base_1);
            bnf.offset_0 = baseList;
            exclamationVector[0] = bnf;
            map1[key] = exclamationVector;
            this->ret[root] = map1;
        }
        void TransitTable::Init_55F20C(int root, std::string & key, std::string & offset_4, int offset_32, std::string &offset_36)
        {
            std::map<std::string,std::vector<WXML::EXPRLib::BNF>> map1 = this->ret[root];
            std::vector<WXML::EXPRLib::BNF> exclamationVector = map1[key];
            WXML::EXPRLib::BNF bnf;
            if (exclamationVector.size() == 0)
            {
                exclamationVector.push_back(bnf);
            }
            else
            {
                bnf = exclamationVector[0];
            }
            std::vector<std::shared_ptr<WXML::EXPRLib::Base>> exclamationBaseList = bnf.offset_0;
            std::shared_ptr<WXML::EXPRLib::Base> base_1(new WXML::EXPRLib::Base());
            base_1->offset_0 = off_55F20C;
            base_1->offset_4_str = offset_4;
            base_1->offset_32 = offset_32;
            base_1->offset_36 = offset_36;
            exclamationBaseList.push_back(base_1);
            bnf.offset_0 = exclamationBaseList;
            exclamationVector[0] = bnf;
            map1[key] = exclamationVector;
            this->ret[root] = map1;
        }
        void TransitTable::Init(void)
        {
            
            if (!this->offset_24)
            {
                this->offset_24 = true;

                int root;
                std::vector<std::string> keyList;
                std::vector<int> t;
                keyList.push_back("!");
                keyList.push_back("$DECIMAL");
                keyList.push_back("$STRING");
                keyList.push_back("(");
                keyList.push_back("-");
                keyList.push_back("$KEYWORD");
                keyList.push_back("[");
                keyList.push_back("$VAR");
                keyList.push_back("{");
                keyList.push_back("~");

                for (auto &&i : keyList)
                {
                    t.clear();
                    t.push_back(21);
                    t.push_back(29);
                    t.push_back(11);
                    Init_55F1E4(1, i, t);

                    t.clear();
                    t.push_back(1);
                    t.push_back(20);
                    Init_55F1E4(2, i, t);
                    
                    t.clear();
                    t.push_back(6);
                    t.push_back(8);
                    Init_55F1E4(3, i, t);
                    
                    t.clear();
                    t.push_back(3);
                    t.push_back(18);
                    Init_55F1E4(4, i, t);
                    
                    t.clear();
                    t.push_back(25);
                    t.push_back(16);
                    Init_55F1E4(5, i, t);
                    
                    t.clear();
                    t.push_back(5);
                    t.push_back(33);
                    Init_55F1E4(6, i, t);
                    
                    t.clear();
                    t.push_back(2);
                    t.push_back(15);
                    Init_55F1E4(7, i, t);
                }
                /////////////////// root - 8 ///////////////////
                root = 8;
                keyList.clear();
                keyList.push_back("$");
                keyList.push_back(")");
                keyList.push_back("}");
                keyList.push_back("||");
                keyList.push_back(",");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(8, i);
                }
                std::string target = "&&";
                std::string offset_4;
                Init_55F220_0(8, target, target);

                t.clear();
                t.push_back(6);
                Init_55F1E4(8, target, t);
                {
                    std::string key = "&&";
                    std::string offset_36 = "a=pop();b=pop();c=b&&a;push(c)";
                    Init_55F20C(root, key, key, 2, offset_36);
                }
                t.clear();
                t.push_back(8);
                Init_55F1E4(8, target, t);
                
                // off_554788???
                keyList.clear();
                keyList.push_back(":"); // off_554788
                keyList.push_back("]"); // off_554788[2]
                keyList.push_back("?");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(8, i);
                }

                ///////////////////////// root - 9 ////////////////
                root = 9;
                keyList.clear();
                keyList.push_back("$");
                keyList.push_back(")");
                keyList.push_back("]");  // &off_554788[2]
                keyList.push_back(",");
                keyList.push_back(":"); // off_554788
                keyList.push_back("}");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(9, i);
                }

                target = "?";
                Init_55F220_0(9, target, target);

                t.clear();
                t.push_back(4);
                t.push_back(9);
                Init_55F1E4(9, target, t);
                offset_4 = ":";
                Init_55F220_0(9, target, offset_4);
                t.clear();
                t.push_back(4);
                t.push_back(9);
                Init_55F1E4(9, target, t);

                {
                    std::string key = "?";
                    std::string offset_4 = "?:";
                    std::string offset_36 = "a=pop();b=pop();c=pop();c?b:a";
                    Init_55F20C(root, key, offset_4, 3, offset_36);

                }
                //////////////////// root - 10 ///////////////////
                root = 10;
                target = "[";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(30);
                Init_55F1E4(root, target, t);
                offset_4 = "]";
                Init_55F220_0(root, target, offset_4);
                {
                    std::string key = "[";
                    std::string offset_4 = "OP_LIST";
                    std::string offset_36 = "a=pop;c=make_list(a);push(c)";
                    Init_55F20C(root, key, offset_4, 1, offset_36);

                }
                t.clear();
                t.push_back(17);
                Init_55F1E4(root, target, t);
                target = "$VAR";
                Init_55F220_0(root, target, target);

                {
                    std::string key = "$VAR";
                    std::string offset_4 = "OP_PATH";
                    std::string offset_36 = "a=pop;c=[];c.append()";
                    Init_55F20C(root, key, offset_4, 1, offset_36);

                }
                t.clear();
                t.push_back(17);
                Init_55F1E4(root, target, t);

                ////////////////////// root - 11 ////////////////////
                root = 11;
                target = ">=";
                Init_55F1F8(11, target);
                target = ">>";
                Init_55F220_0(11, target, target);
                t.clear();
                t.push_back(22);
                Init_55F1E4(11, target, t);

                {
                    std::string key = ">>";
                    std::string offset_4 = ">>";
                    std::string offset_36 = "a=pop();b=pop();c=b>>a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);

                }
                t.clear();
                t.push_back(11);
                Init_55F1E4(11, target, t);

                target = "<<";
                Init_55F220_0(11, target, target);
                t.clear();
                t.push_back(22);
                Init_55F1E4(11, target, t);
                {
                    std::string key = "<<";
                    std::string offset_4 = "<<";
                    std::string offset_36 = "a=pop();b=pop();c=b<<a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);

                }
                t.clear();
                t.push_back(11);
                Init_55F1E4(11, target, t);

                keyList.clear();
                keyList.push_back("<=");
                keyList.push_back("!=");
                keyList.push_back("$");
                keyList.push_back("&");
                keyList.push_back(")");
                keyList.push_back(",");
                keyList.push_back(":");
                keyList.push_back("<");
                keyList.push_back("?");
                keyList.push_back(">");
                keyList.push_back("==");
                keyList.push_back("&&");
                keyList.push_back("]");
                keyList.push_back("^");
                keyList.push_back("===");
                keyList.push_back("||");
                keyList.push_back("!==");
                keyList.push_back("}");
                keyList.push_back("|");
                for (auto &&i : keyList)
                {
                    
                    Init_55F1F8(11, i);
                }
                ///////////////// root - 12 ///////////////
                root = 12;
                target = "...";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(14);
                Init_55F1E4(root, target, t);
                
                {
                    std::string key = "...";
                    std::string offset_4 = "OP_EXPAND";
                    std::string offset_36 = "a=pop();c=expand(a);push(c);";
                    Init_55F20C(root, key, offset_4, 1, offset_36);
                    
                }
                t.clear();
                t.push_back(27);
                Init_55F1E4(root, target, t);
                target = "$VAR";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(28);
                t.push_back(27);
                Init_55F1E4(root, target, t);

                ////////////////// root - 13 //////////////////////
                root = 13; // 0xd
                target = "...";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(14);
                Init_55F1E4(root, target, t);
                {
                    std::string key = "...";
                    std::string offset_4 = "OP_EXPAND";
                    std::string offset_36 = "a=pop();c=expand(a);push(c);";
                    Init_55F20C(root, key, offset_4, 1, offset_36);
                    
                }
                target = "$VAR";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(28);
                Init_55F1E4(root, target, t);
                ////////////////// root - 14 //////////////////////
                root = 14; // 0xe
                keyList.clear();
                keyList.push_back("!");
                keyList.push_back("$DECIMAL");
                keyList.push_back("$STRING");
                keyList.push_back("(");
                keyList.push_back("-");
                keyList.push_back("$KEYWORD");
                keyList.push_back("[");
                keyList.push_back("$VAR");
                keyList.push_back("{");
                keyList.push_back("~");
                for (auto &&i : keyList)
                {
                        
                    t.clear();
                    t.push_back(4);
                    t.push_back(9);
                    Init_55F1E4(root, i, t);
                }
                
                ////////////////// root - 15 //////////////////////
                root = 15; // 0xf
                target = "===";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(2);
                Init_55F1E4(root, target, t);
                {
                    std::string key = "===";
                    std::string offset_4 = "===";
                    std::string offset_36 = "a=pop();b=pop();c=b===a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(15);
                Init_55F1E4(root, target, t);
                
                target = "!==";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(2);
                Init_55F1E4(root, target, t);
                {
                    std::string key = "!==";
                    std::string offset_4 = "!==";
                    std::string offset_36 = "a=pop();b=pop();c=b!==a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(15);
                Init_55F1E4(root, target, t);

                keyList.clear();
                keyList.push_back("$");
                keyList.push_back("&");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }

                target = "==";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(2);
                Init_55F1E4(root, target, t);
                {
                    std::string key = "==";
                    std::string offset_4 = "==";
                    std::string offset_36 = "a=pop();b=pop();c=b==a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(15);
                Init_55F1E4(root, target, t);
                keyList.clear();
                keyList.push_back("}");
                keyList.push_back("||");
                keyList.push_back("]");
                keyList.push_back(",");
                keyList.push_back(")");
                keyList.push_back("&&");
                keyList.push_back(":");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }

                target = "!=";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(2);
                Init_55F1E4(root, target, t);
                {
                    std::string key = "!=";
                    std::string offset_4 = "!=";
                    std::string offset_36 = "a=pop();b=pop();c=b!=a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(15);
                Init_55F1E4(root, target, t);
                keyList.clear();
                keyList.push_back("|");
                keyList.push_back("?");
                keyList.push_back("^");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                ////////////////// root - 16 //////////////////////
                root = 16; //0x10
                keyList.clear();
                keyList.push_back("$");
                keyList.push_back(")");
                keyList.push_back("}");
                keyList.push_back("||");
                keyList.push_back(",");
                keyList.push_back("&&");
                keyList.push_back(":");
                keyList.push_back("]");
                keyList.push_back("|");
                keyList.push_back("?");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                target = "^";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(25);
                Init_55F1E4(root, target, t);
                {
                    std::string key = "^";
                    std::string offset_4 = "^";
                    std::string offset_36 = "a=pop();b=pop();c=b^a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(16);
                Init_55F1E4(root, target, t);
                ////////////////// root - 17 //////////////////////
                root = 17; //0x11
                keyList.clear();
                keyList.push_back(">=");
                keyList.push_back(">>");
                keyList.push_back("||");
                keyList.push_back("<=");
                keyList.push_back("!=");
                keyList.push_back("%");
                keyList.push_back("$");
                keyList.push_back("&");
                keyList.push_back(")");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                target = "(";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(30);
                Init_55F1E4(root, target, t);
                offset_4 = ")";
                Init_55F220_0(root, target, offset_4);
                {
                    std::string key = target;
                    std::string offset_4 = "OP_FUNC";
                    std::string offset_36 = "a=pop;b=pop;c=b[a]";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(17);
                Init_55F1E4(root, target, t);

                keyList.clear();
                keyList.push_back("+");
                keyList.push_back("*");
                keyList.push_back("-");
                keyList.push_back(",");
                keyList.push_back("/");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                target = ".";
                Init_55F220_0(root, target, target);
                offset_4 = "$VAR";
                Init_55F220_0(root, target, offset_4);
                {
                    std::string key = target;
                    std::string offset_4 = "OP_DICT";
                    std::string offset_36 = "a=pop;c=top;c.append(a)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(17);
                Init_55F1E4(root, target, t);

                keyList.clear();
                keyList.push_back(":");
                keyList.push_back("<<");
                keyList.push_back("?");
                keyList.push_back(">");
                keyList.push_back("==");
                keyList.push_back("&&");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                target = "[";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(14);
                Init_55F1E4(root, target, t);
                offset_4 = "]";
                Init_55F220_0(root, target, offset_4);
                keyList.clear();
                keyList.push_back("]");
                keyList.push_back("^");
                keyList.push_back("===");
                keyList.push_back("!==");
                keyList.push_back("<");
                keyList.push_back("}");
                keyList.push_back("|");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                {
                    std::string key = target;
                    std::string offset_4 = "OP_DICT";
                    std::string offset_36 = "a=pop;b=pop;c=b[a]";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(17);
                Init_55F1E4(root, target, t);
                ////////////////// root - 18 //////////////////////
                root = 18; // 0x12
                keyList.clear();
                keyList.push_back("$");
                keyList.push_back(")");
                keyList.push_back("}");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                target = "||";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(3);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "||";
                    std::string offset_36 = "a=pop();b=pop();c=b||a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(18);
                Init_55F1E4(root, target, t);
                keyList.clear();
                keyList.push_back(",");
                keyList.push_back(":");
                keyList.push_back("]");
                keyList.push_back("?");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }

                ////////////////// root - 19 //////////////////////
                root = 19; //0x13
                keyList.clear();
                keyList.push_back("$DECIMAL");
                keyList.push_back("$STRING");
                keyList.push_back("(");
                for (auto &&i : keyList)
                {
                    Init_55F220_0(root, i, i);
                }
                target = "(";
                t.clear();
                t.push_back(14);
                Init_55F1E4(root, target, t);
                offset_4 = ")";
                Init_55F220_0(root, target, offset_4);
                
                target = "$KEYWORD";
                Init_55F220_0(root, target, target);
                target = "[";
                t.clear();
                t.push_back(10);
                Init_55F1E4(root, target, t);
                target = "$VAR";
                t.clear();
                t.push_back(10);
                Init_55F1E4(root, target, t);

                target = "{";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(12);
                Init_55F1E4(root, target, t);
                offset_4 = "}";
                Init_55F220_0(root, target, offset_4);
                ////////////////// root - 20 //////////////////////
                root = 20; //0x14
                keyList.clear();
                keyList.push_back("===");
                keyList.push_back(":");
                keyList.push_back("!==");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                target = ">=";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(1);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = ">=";
                    std::string offset_36 = "a=pop();b=pop();c=b>=a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(20);
                Init_55F1E4(root, target, t);

                keyList.clear();
                keyList.push_back("&");
                keyList.push_back("==");
                keyList.push_back("]");
                keyList.push_back("||");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                target = "<=";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(1);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "<=";
                    std::string offset_36 = "a=pop();b=pop();c=b<=a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(20);
                Init_55F1E4(root, target, t);
                keyList.clear();
                keyList.push_back(",");
                keyList.push_back("|");
                keyList.push_back(")");
                keyList.push_back("$");
                keyList.push_back("&&");
                keyList.push_back("}");
                keyList.push_back("^");
                keyList.push_back("!=");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                target = "<";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(1);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "<";
                    std::string offset_36 = "a=pop();b=pop();c=b<a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(20);
                Init_55F1E4(root, target, t);

                keyList.clear();
                keyList.push_back("?");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                
                target = ">";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(1);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = ">";
                    std::string offset_36 = "a=pop();b=pop();c=b>a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(20);
                Init_55F1E4(root, target, t);
                ////////////////// root - 21 //////////////////////
                root = 21; //0x15
                keyList.clear();
                keyList.push_back("!");
                keyList.push_back("$DECIMAL");
                keyList.push_back("$STRING");
                keyList.push_back("(");
                keyList.push_back("-");
                keyList.push_back("$KEYWORD");
                keyList.push_back("[");
                keyList.push_back("$VAR");
                keyList.push_back("{");
                keyList.push_back("~");
                
                for (auto &&i : keyList)
                {
                    
                    t.clear();
                    t.push_back(24);
                    t.push_back(26);
                    Init_55F1E4(root, i, t);
                }
                
                ////////////////// root - 22 //////////////////////
                root = 22; //0x16
                keyList.clear();
                keyList.push_back("!");
                keyList.push_back("$DECIMAL");
                keyList.push_back("$STRING");
                keyList.push_back("(");
                keyList.push_back("-");
                keyList.push_back("$KEYWORD");
                keyList.push_back("[");
                keyList.push_back("$VAR");
                keyList.push_back("{");
                keyList.push_back("~");
                
                for (auto &&i : keyList)
                {
                    
                    t.clear();
                    t.push_back(21);
                    t.push_back(29);
                    Init_55F1E4(root, i, t);
                }
                ////////////////// root - 23 //////////////////////
                root = 23; //0x17
                keyList.clear();
                keyList.push_back("$DECIMAL");
                keyList.push_back("$STRING");
                keyList.push_back("(");
                for (auto &&i : keyList)
                {
                    t.clear();
                    t.push_back(19);
                    Init_55F1E4(root, i, t);
                }
                target = "-";
                Init_55F220_0(root, target, target);

                keyList.clear();
                keyList.push_back("$KEYWORD");
                keyList.push_back("[");
                keyList.push_back("$VAR");
                keyList.push_back("{");
                for (auto &&i : keyList)
                {
                    t.clear();
                    t.push_back(19);
                    Init_55F1E4(root, i, t);
                }
                
                target = "-";
                t.clear();
                t.push_back(23);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "-";
                    std::string offset_36 = "a=pop();c=-a;push(c)";
                    Init_55F20C(root, key, offset_4, 1, offset_36);
                    
                }
                ////////////////// root - 24 //////////////////////
                root = 24; //0x18
                target = "!";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(24);
                Init_55F1E4(root, target, t);

                {
                    std::string key = target;
                    std::string offset_4 = "!";
                    std::string offset_36 = "a=pop();c=!a;push(c)";
                    Init_55F20C(root, key, offset_4, 1, offset_36);
                    
                }
                keyList.clear();
                keyList.push_back("$DECIMAL");
                keyList.push_back("$STRING");
                keyList.push_back("(");
                keyList.push_back("-");
                keyList.push_back("$KEYWORD");
                keyList.push_back("[");
                keyList.push_back("$VAR");
                keyList.push_back("{");
                for (auto &&i : keyList)
                {
                    t.clear();
                    t.push_back(23);
                    Init_55F1E4(root, i, t);
                }

                target = "~";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(24);
                Init_55F1E4(root, target, t);

                {
                    std::string key = target;
                    std::string offset_4 = "~";
                    std::string offset_36 = "a=pop();c=~a;push(c)";
                    Init_55F20C(root, key, offset_4, 1, offset_36);
                    
                }
                ////////////////// root - 25 //////////////////////
                root = 25; //0x19
                keyList.clear();
                keyList.push_back("!");
                keyList.push_back("$DECIMAL");
                keyList.push_back("$STRING");
                keyList.push_back("(");
                keyList.push_back("-");
                keyList.push_back("$KEYWORD");
                keyList.push_back("[");
                keyList.push_back("$VAR");
                keyList.push_back("{");
                keyList.push_back("~");
                for (auto &&i : keyList)
                {
                    t.clear();
                    t.push_back(7);
                    t.push_back(32);
                    Init_55F1E4(root, i, t);
                }
                ////////////////// root - 26 //////////////////////
                root = 26; //0x1a
                keyList.clear();
                keyList.push_back(">=");
                keyList.push_back(">>");
                keyList.push_back("||");
                keyList.push_back("<=");
                keyList.push_back("!=");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }

                target = "%";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(24);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "%";
                    std::string offset_36 = "a=pop();b=pop();c=b%a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(26);
                Init_55F1E4(root, target, t);

                keyList.clear();
                keyList.push_back("$");
                keyList.push_back("&");
                keyList.push_back(")");
                keyList.push_back("+");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                
                target = "*";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(24);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "*";
                    std::string offset_36 = "a=pop();b=pop();c=b*a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(26);
                Init_55F1E4(root, target, t);

                keyList.clear();
                keyList.push_back("-");
                keyList.push_back(",");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                
                target = "/";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(24);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "/";
                    std::string offset_36 = "a=pop();b=pop();c=b/a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(26);
                Init_55F1E4(root, target, t);

                keyList.clear();
                keyList.push_back(":");
                keyList.push_back("<<");
                keyList.push_back("?");
                keyList.push_back(">");
                keyList.push_back("==");
                keyList.push_back("&&");
                keyList.push_back("]");
                keyList.push_back("^");
                keyList.push_back("===");
                keyList.push_back("!==");
                keyList.push_back("<");
                keyList.push_back("}");
                keyList.push_back("|");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                ////////////////// root - 27 //////////////////////
                root = 27; //0x1b
                keyList.clear();
                keyList.push_back("}");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                
                target = ",";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(13);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "OP_DICT_CONCAT";
                    std::string offset_36 = "a=pop();b=top();c=b.a;";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(27);
                Init_55F1E4(root, target, t);

                keyList.clear();
                keyList.push_back("$");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                ////////////////// root - 28 //////////////////////
                root = 28; //0x1c
                target = ":";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(14);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "OP_MAKE_DICT";
                    std::string offset_36 = "a=pop(),key=pop(),c={key:a};push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                
                target = "}";
                Init_55F1F8(root, target);
                {
                    std::string key = target;
                    std::string offset_4 = "OP_MAKE_DICT";
                    std::string offset_36 = "a=pop();c={a:a}";
                    Init_55F20C(root, key, offset_4, 1, offset_36);
                    
                }

                target = ",";
                Init_55F1F8(root, target);
                {
                    std::string key = target;
                    std::string offset_4 = "OP_MAKE_DICT";
                    std::string offset_36 = "a=pop();c={a:a}";
                    Init_55F20C(root, key, offset_4, 1, offset_36);
                    
                }

                target = "$";
                Init_55F1F8(root, target);
                {
                    std::string key = target;
                    std::string offset_4 = "OP_MAKE_DICT";
                    std::string offset_36 = "a=pop();c={a:a}";
                    Init_55F20C(root, key, offset_4, 1, offset_36);
                    
                }
                ////////////////// root - 29 //////////////////////
                root = 29; //0x1d

                keyList.clear();
                keyList.push_back(">=");
                keyList.push_back(">>");
                keyList.push_back("||");
                keyList.push_back("<=");
                keyList.push_back("!=");
                keyList.push_back("$");
                keyList.push_back("&");
                keyList.push_back(")");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }

                target = "+";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(21);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "+";
                    std::string offset_36 = "a=pop();b=pop();c=b+a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(29);
                Init_55F1E4(root, target, t);
                
                target = "-";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(21);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "-";
                    std::string offset_36 = "a=pop();b=pop();c=b-a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(29);
                Init_55F1E4(root, target, t);

                keyList.clear();
                keyList.push_back(",");
                keyList.push_back(":");
                keyList.push_back("<<");
                keyList.push_back("?");
                keyList.push_back(">");
                keyList.push_back("==");
                keyList.push_back("&&");
                keyList.push_back("]");
                keyList.push_back("^");
                keyList.push_back("===");
                keyList.push_back("!==");
                keyList.push_back("<");
                keyList.push_back("}");
                keyList.push_back("|");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }

                ////////////////// root - 30 //////////////////////
                root = 30; //0x1e
                target = "!";
                t.clear();
                t.push_back(4);
                t.push_back(9);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "OP_LIST_CONCAT";
                    std::string offset_36 = "a=pop();c=make_list(a);push(c)";
                    Init_55F20C(root, key, offset_4, 1, offset_36);
                    
                }
                t.clear();
                t.push_back(31);
                Init_55F1E4(root, target, t);

                target = "$DECIMAL";
                t.clear();
                t.push_back(4);
                t.push_back(9);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "OP_LIST_CONCAT";
                    std::string offset_36 = "a=pop();c=make_list(a);push(c)";
                    Init_55F20C(root, key, offset_4, 1, offset_36);
                    
                }
                t.clear();
                t.push_back(31);
                Init_55F1E4(root, target, t);

                target = "$";
                Init_55F1F8(root, target);
                {
                    std::string key = target;
                    std::string offset_4 = "OP_LIST_CONCAT";
                    std::string offset_36 = "c=make_list;push(c)";
                    Init_55F20C(root, key, offset_4, 0, offset_36);
                    
                }
                t.clear();
                t.push_back(31);
                Init_55F1E4(root, target, t);

                keyList.clear();
                keyList.push_back("$STRING");
                keyList.push_back("(");
                keyList.push_back("-");
                for (auto &&i : keyList)
                {
                    
                    target = i;
                    t.clear();
                    t.push_back(4);
                    t.push_back(9);
                    Init_55F1E4(root, target, t);
                    {
                        std::string key = i;
                        std::string offset_4 = "OP_LIST_CONCAT";
                        std::string offset_36 = "a=pop();c=make_list(a);push(c)";
                        Init_55F20C(root, key, offset_4, 1, offset_36);
                        
                    }
                    t.clear();
                    t.push_back(31);
                    Init_55F1E4(root, target, t);
                }

                target = ")";
                Init_55F1F8(root, target);
                {
                    std::string key = target;
                    std::string offset_4 = "OP_LIST_CONCAT";
                    std::string offset_36 = "c=make_list;push(c)";
                    Init_55F20C(root, key, offset_4, 0, offset_36);
                    
                }
                t.clear();
                t.push_back(31);
                Init_55F1E4(root, target, t);

                keyList.clear();
                keyList.push_back("$KEYWORD");
                keyList.push_back("[");
                keyList.push_back("$VAR");
                for (auto &&i : keyList)
                {
                    
                    target = i;
                    t.clear();
                    t.push_back(4);
                    t.push_back(9);
                    Init_55F1E4(root, target, t);
                    {
                        std::string key = target;
                        std::string offset_4 = "OP_LIST_CONCAT";
                        std::string offset_36 = "a=pop();c=make_list(a);push(c)";
                        Init_55F20C(root, key, offset_4, 1, offset_36);
                        
                    }
                    t.clear();
                    t.push_back(31);
                    Init_55F1E4(root, target, t);
                }
                
                target = "]";
                Init_55F1F8(root, target);
                {
                    std::string key = target;
                    std::string offset_4 = "OP_LIST_CONCAT";
                    std::string offset_36 = "c=make_list;push(c)";
                    Init_55F20C(root, key, offset_4, 0, offset_36);
                    
                }
                t.clear();
                t.push_back(31);
                Init_55F1E4(root, target, t);

                keyList.clear();
                keyList.push_back("{");
                keyList.push_back("~");
                for (auto &&i : keyList)
                {
                    
                    target = i;
                    t.clear();
                    t.push_back(4);
                    t.push_back(9);
                    Init_55F1E4(root, target, t);
                    {
                        std::string key = target;
                        std::string offset_4 = "OP_LIST_CONCAT";
                        std::string offset_36 = "a=pop();c=make_list(a);push(c)";
                        Init_55F20C(root, key, offset_4, 1, offset_36);
                        
                    }
                    t.clear();
                    t.push_back(31);
                    Init_55F1E4(root, target, t);
                }
                ////////////////// root - 31 //////////////////////
                root = 31; // 0x1f
                keyList.clear();
                keyList.push_back(")");
                keyList.push_back("]");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }

                target = ",";
                Init_55F220_0(root, target, target);

                t.clear();
                t.push_back(14);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "OP_LIST_CONCAT";
                    std::string offset_36 = "a=pop();b=pop();c=b.a";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(31);
                Init_55F1E4(root, target, t);

                target = "$";
                Init_55F1F8(root, target);
                ////////////////// root - 32 //////////////////////
                root = 32; // 0x20
                target = "$";
                Init_55F1F8(root, target);
                target = "&";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(7);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "&";
                    std::string offset_36 = "a=pop();b=pop();c=b&a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(32);
                Init_55F1E4(root, target, t);
                keyList.clear();
                keyList.push_back(")");
                keyList.push_back("}");
                keyList.push_back("||");
                keyList.push_back(",");
                keyList.push_back("&&");
                keyList.push_back(":");
                keyList.push_back("]");
                keyList.push_back("|");
                keyList.push_back("?");
                keyList.push_back("^");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                ////////////////// root - 33 //////////////////////
                root = 33; // 0x21
                keyList.clear();
                keyList.push_back("$");
                keyList.push_back(")");
                keyList.push_back("]");
                keyList.push_back("||");
                keyList.push_back(",");
                keyList.push_back("&&");
                keyList.push_back(":");
                keyList.push_back("}");
                keyList.push_back("?");
                for (auto &&i : keyList)
                {
                    Init_55F1F8(root, i);
                }
                target = "|";
                Init_55F220_0(root, target, target);
                t.clear();
                t.push_back(5);
                Init_55F1E4(root, target, t);
                {
                    std::string key = target;
                    std::string offset_4 = "|";
                    std::string offset_36 = "a=pop();b=pop();c=b|a;push(c)";
                    Init_55F20C(root, key, offset_4, 2, offset_36);
                    
                }
                t.clear();
                t.push_back(33);
                Init_55F1E4(root, target, t);
            }
        }
    }
}