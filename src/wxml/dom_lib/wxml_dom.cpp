
#include "../../include/wxml.h"

namespace WXML {
    
    
    namespace DOMLib
    {
        
        WXMLDom::WXMLDom(/* args */)
        {
        }
        
        WXMLDom::~WXMLDom()
        {
        }
        const char off_553FDC[] = {'[','x','[','\0'};
        void WXMLDom::RenderMeAsFunction(
            std::string const& a2,
            std::string const& a3,
            std::string& a4,
            std::string const& a5,
            std::stringstream & a6,
            WXML::NameAllocator * a7,
            std::string const& a8,
            std::string const& a9,
            std::string const& a10,
            std::string const& a11,
            std::string const& a12,
            char a13,
            std::string const& a14,
            bool a15,
            bool a16,
            uint a17,
            std::string const& a18
            )
        {
            try
            {
                std::string name;
                a7->GetNextName(name);
                if (a15)
                {
                    a6 << a12 << off_553FDC;
                    int id = offset_62.GetStrID(a2);
                    a6 << id;
                    a6 << "]][\"";
                    WXML::Rewrite::ToStringCode(a5, a6);
                    a6 << "\"]";
                }
                else
                {
                    a6 << "var " << a5;
                }
                a6 << "=function(";
                a6 << a8 << ",";
                a6 << a9 << ",";
                a6 << a11 << ",";
                a6 << a10 << "){";
                a6 << a13;
                // if (a18)
                {
                    a6 << "var z=" << a18 << "()" << a13;
                }
                if (a15)
                {
                    a6 << "var " << name;
                    a6 << "=x[";
                    int id = this->offset_62.GetStrID(a2);
                    a6 << id << "]";
                    a6 << "+':";
                    WXML::Rewrite::ToStringCode(a5, a6);
                    a6 << "'" << a13 << a11 << ".wxVkey=";
                    a6 << name << a13 << a10 << ".f=$gdc(f_[\"";
                    a6 << WXML::Rewrite::ToStringCode(a2);
                    a6 << "\"],\"\",1)";
                    a6 << a13;
                    a6 << "if(" << a14 << "[" << name << "]{_wl(";
                    a6 << name << ",x[";
                    id = this->offset_62.GetStrID(a2);
                    a6 << id << "]);return}" << a13;

                    a6 << a14 << "[" << name << "]=true";
                    a6 << a13 << "try{" << a13;
                }
                // RenderChildren
                if (a15)
                {
                    a6 << "}catch(err){" << a13;
                    a6 << a14 << "[" << name << "]=false";
                    a6 << a13 << "throw err" << a13 << "}";
                    a6 << a13 << a14 << "[" << name << "]=false" << a13;
                }
                a6 << "return " << a11 << a13 << "}" << a13;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            

        }
        void WXMLDom::RenderChildren(
            std::string const& a2,
            std::string const& a3,
            std::string& a4,
            std::string const& a5,
            std::stringstream & a6,
            WXML::NameAllocator * a7,
            std::string const& a8,
            std::string const& a9,
            std::string const& a10,
            std::string const& a11,
            char a12,
            bool a13,
            uint a14,
            std::map<std::string,std::string> * a15
            )
        {
            auto size = a6.tellp();
            if (size > 52428800)
            {
                throw "Interal error: generated code (>10M) will be too heavy to fly in a narrow wind.";
            }
            // while (/* condition */)
            // {
            //     /* code */
            // }
            int Stra;
            // for (int i = 0; ; i = Stra)
            // {
                
            // }
            
            
        }

        void WXMLDom::RenderNonDefine(
            std::string const& a2,
            std::string const& a3,
            std::string& a4,
            std::string const& a5,
            std::stringstream &a6,
            WXML::NameAllocator *a7,
            std::string const& a8,
            std::string const& a9,
            std::string const& a10,
            std::string const& a11,
            char a12,
            bool a13,
            uint a14,
            std::map<std::string,std::string> * a15
            )
        {
            if (a13 && this->offset_28)
            {
                a6 << "cs.push(\"";
                std::string sc = WXML::Rewrite::ToStringCode(a2);
                a6 << sc << ":" << this->tag << ":" << this->offset_92 << ":" << this->offset_96 << "\")";
            }
            if (this->tag == "TEXTNODE")
            {

            }
            if (this->tag == "wx-define"
                ||this->tag == "wx-import"
                ||this->tag == "import"
                ||this->tag == "template")
            {

            }
            if (this->tag == "wx-repeat")
            {

            }
            if (this->tag == "block")
            {
                
            }
            if (this->tag == "include")
            {
                
            }
            if (this->tag == "wx-template")
            {
                
            }
            // for (size_t i = 0; i < count; i++)
            // {
            //     /* code */
            // }
            // sort
            // for (size_t i = 0; i < count; i++)
            // {
            //     /* code */
            // }
            // if ()
            // {
            //     ".rawAttr="
            // }
            
        }
        void WXMLDom::RecordAllPath(void)
        {
            if(this->tag == "import" || this->tag == "include")
            {
                std::string v13 = "src";
                int v8 = this->offset_12.count(v13);
                if (v8)
                {
                    std::string attr = this->offset_12[v13].ToAttrContent();
                    
                }
            }
        }
        void WXMLDom::Print(int,char const*,std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> *)
        {

        }
        void WXMLDom::PrintMe(
            int a2,
            char const* a3,
            std::stringstream* a4)
        {
            std::stringstream v34;
            std::stringstream *v4 = &v34;
            if (a4)
            {
                v4 = a4;
            }
            if (v4->tellp() != 0)
            {
                printf("%s", a3);
            }
            else
            {
                *v4 << a3;
            }
            for (int i = 0; ; i++)
            {
                /* code */
                if ( i >= a2)
                    break;
                if (v4->tellp())
                {
                    printf("  ");
                }
                else
                {
                    *v4 << "  ";
                }
            }
            if (v4->tellp())
            {
                printf("pos: %d, %d, tag: %s, ", this->offset_92, this->offset_96, this->tag.c_str());
            }
            else
            {
                *v4 << "pos: " << this->offset_92 << ", " << this->offset_96 << " tag: " << this->tag << ", ";
            }
            
            if (this->tag == "TEXTNODE")
            {
                if (v4->tellp() != 0)
                {
                    printf("attr: ");
                }
                else
                {
                    *v4 << "attr: ";
                }
                // TODO: this + 60是什么？
                // for (size_t i = 0; i < count; i++)
                // {
                //     /* code */
                // }
                
            }
            else if(v4->tellp() != 0)
            {
                //TODO: this+84是什么？
                printf(
                    "pos: %d, %d, len: %d, %s",
                    this->offset_92,
                    this->offset_96,
                    this->offset_104,
                    "TODO..."
                );
            }
            else
            {
                *v4 << "pos: " << this->offset_92
                << ", " << this->offset_96 << ", len: " << this->offset_104
                << ", ";
                // *v4 << this->offset_84;
            }
        }
        bool WXMLDom::IfHasItsElse(
            int a2,
            std::vector<std::string> const& a3
            )
        {
            bool hasElIf = true;
            if (this->offset_12.count("wx:else") != 0)
            {
                hasElIf = this->offset_12.count("wx:elif");
            }
            if (hasElIf) return true;

            bool hasIf = false;
            if (this->offset_12.count("wx:if") != 0)
            {
                hasIf = this->offset_12.count("wx-if") == 0;
            }
            if (!hasIf)
            {
                int v7 = a2 - 1;
                if(this->offset_12.begin() == this->offset_12.end())
                {
                    for (int i = a2 + 1; i < this->offset_12.size(); i++)
                    {
                        bool hasElIf = true;
                        if(!this->offset_12.count("wx:else"))
                        {
                            hasElIf = this->offset_12.count("wx:elif");
                        }
                        if (!hasElIf)
                        {
                            break;
                        }
                        // a3[1].find()
                        // TODO...
                    }
                    
                }
            }
            return true;
        }
        bool WXMLDom::operator==(std::string tag)
        {
            return this->tag.compare(tag) == 0;
        }
    }
}