#include "../../include/wxml.h"

namespace WXML
{
    namespace DOMLib
    {
        
        Tokenizer::Tokenizer(char const* fileContent, std::string const& filePath)
        {
            this->fileContent = fileContent;
            this->contentLength = strlen(fileContent);
            this->fileName = filePath;
            WXML::DOMLib::Machine m(filePath);
            this->machine = m;
        }
        
        Tokenizer::~Tokenizer()
        {
        }

        int Tokenizer::GetTokens(
            std::vector<WXML::DOMLib::Token> &a2,
            std::string &a3,
            std::vector<WXML::DOMLib::Token> &a4
            )
        {
            this->machine.Reset();
            if (this->fileContent)
            {
                for (int i = 0; i < this->contentLength; i++)
                {
                    this->machine.Feed(this->fileContent[i], a2, a3, a4, 0);
                }
                this->machine.Feed(0, a2, a3, a4, 0);
                
                // TODO: 少了
            }
            else
            {
                a3.replace(a3.begin(), a3.end(), "FATAL: no source was set or failed to allocate space for input source");
                return -1;
            }
            return 0;
        }
    }
}
