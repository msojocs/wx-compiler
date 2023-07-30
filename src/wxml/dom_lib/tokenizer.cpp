#include "../../include/wxml.h"

namespace WXML
{
    namespace DOMLib
    {
        
        Tokenizer::Tokenizer(char const* fileContent, std::string const& filePath)
        {
            this->fileContent = std::string(fileContent);
            this->fileContent.resize(this->fileContent.size() + 1);
            this->fileName = filePath;
            WXML::DOMLib::Machine m(filePath);
            this->machine = m;
        }
        
        Tokenizer::~Tokenizer()
        {
        }

        int Tokenizer::GetTokens(
            std::vector<WXML::DOMLib::Token> &a2,
            std::string &errorMessage,
            std::vector<WXML::DOMLib::Token> &a4
            )
        {
            this->machine.Reset();
            if (this->fileContent.length() > 0)
            {
                for (int i = 0; i < this->fileContent.length(); i++)
                {
                    this->machine.Feed(this->fileContent[i], a2, errorMessage, a4, 0);
                }
                this->machine.Feed(0, a2, errorMessage, a4, 0);
                
                // 猜测：将fileContent地址赋值给a2,a4中所有的元素
                for (int i = 0; i < a2.size(); i++)
                {
                    /* code */
                    a2[i].SetContent(this->fileContent);
                }
                for (int i = 0; i < a4.size(); i++)
                {
                    /* code */
                    a4[i].SetContent(this->fileContent);
                }
                
            }
            else
            {
                errorMessage.replace(errorMessage.begin(), errorMessage.end(), "FATAL: no source was set or failed to allocate space for input source");
                return -1;
            }
            return 0;
        }
    }
}
