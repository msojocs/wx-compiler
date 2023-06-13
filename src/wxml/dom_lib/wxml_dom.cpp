
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
            if (this->type == "TEXTNODE")
            {

            }
            if (this->type == "wx-define"
                ||this->type == "wx-import"
                ||this->type == "import"
                ||this->type == "template")
            {

            }
            if (this->type == "wx-repeat")
            {

            }
            if (this->type == "block")
            {
                
            }
            if (this->type == "include")
            {
                
            }
            if (this->type == "wx-template")
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
        bool WXMLDom::operator==(std::string tag)
        {
            return this->tag.compare(tag) == 0;
        }
    }
}