#include <cstdint>
#include <iostream>
#include <map>
#include <iomanip>
#include <sstream>
#include <string>

std::string EscapeToJsonString(std::string const& a2)
{
    std::stringstream ret;
    for (int i = 0; i < a2.length(); i++)
    {
        char cur = a2[i];
        if (cur == '\\' || cur == '"' || cur <= 0x1Fu)
        {
            ret << "\\u";
            ret << std::hex << std::setw(4) << std::setfill('0') << static_cast<int>(cur);
        }
        else
        {
            ret << cur;
        }
    }
    
    return ret.str();
}

std::string DictToJsonString(std::map<std::string, std::string> const& a2)
{
    std::stringstream ret;
    ret << "{";
    bool isFirst = true;
    for(auto kv: a2)
    {
        if (!isFirst)
        {
            ret << ",";
        }
        ret << "\"";
        // key
        ret << EscapeToJsonString(kv.first);
        ret << "\":";

        ret << "\"";
        // value
        ret << EscapeToJsonString(kv.second);
        ret << "\"";
        isFirst = false;
    }
    ret << "}";
    return ret.str();
}
int HexDigit(char a1, int a2)
{
  int v2; // eax

  if ( (uint8_t)(a1 - 48) > 9u )
  {
    if ( (uint8_t)(a1 - 97) > 5u )
    {
      v2 = 0;
      if ( (uint8_t)(a1 - 65) <= 5u )
        v2 = a1 - 55;
    }
    else
    {
      v2 = a1 - 87;
    }
  }
  else
  {
    v2 = a1 - 48;
  }
  return v2 << a2;
}

int GetUnicodeNum(std::string &a1, int a2)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx

  v3 = HexDigit(a1[a2 + 2], 12);
  v4 = HexDigit(a1[a2 + 3], 8) + v3;
  v5 = HexDigit(a1[a2 + 4], 4) + v4;
  return v5 + HexDigit(a1[a2 + 5], 0);
}
void GetUnicode(std::string& a1, unsigned int a2)
{
  char v2; // bl
  unsigned int v3; // eax
  unsigned int v4; // eax

  v2 = a2;
  if ( a2 > 0x7F )
  {
    if ( a2 > 0x7FF )
    {
      if ( a2 > 0xFFFF )
      {
        a1.push_back((a2 >> 18) | 0xF0);
        v4 = (a2 >> 12) & 0x3F | 0xFFFFFF80;
      }
      else
      {
        v4 = (a2 >> 12) | 0xFFFFFFE0;
      }
      a1.push_back(v4);
      v3 = (a2 >> 6) & 0x3F | 0xFFFFFF80;
    }
    else
    {
      v3 = (a2 >> 6) | 0xFFFFFFC0;
    }
    a1.push_back(v3);
    v2 = a2 & 0x3F | 0x80;
  }
  a1.push_back(v2);
}
int GetJsonString(std::string &a1, int *a2, std::string& a3)
{

  std::ostringstream v17;
  int v3 = *a2;
  if ( a1[*a2] != '"' )
  {
LABEL_41:
    int v9 = ~v3;
    return v9;
  }
  std::string v16;
  for ( *a2 = v3 + 1; ; ++*a2 )
  {
    v3 = *a2;
    char v12;
    int v6;
    int v14 = a1.length();
    if ( *a2 >= v14 )
      return ~v3;
    char v5 = a1[v3];
    if ( v5 == '"' )
      break;
    if ( v5 == '\\' )
    {
      if ( v3 + 1 >= v14 )
      {
        v6 = -2;
LABEL_31:
        return v6 - v3;
      }
      char v7 = a1[v3 + 1];
      if ( v7 == 'n' )
      {
        v12 = 10;
        goto LABEL_26;
      }
      if ( v7 <= 'n' )
      {
        if ( v7 == 'b' )
        {
          v12 = 8;
          goto LABEL_26;
        }
        if ( v7 <= 'b' )
        {
          if ( v7 != '/' && v7 != '\\' && v7 != '"' )
            goto LABEL_41;
          v17 << a1[v3 + 1];
          goto LABEL_27;
        }
        if ( v7 != 'f' )
          goto LABEL_41;
        v12 = 12;
LABEL_26:
        v17 << v12;
LABEL_27:
        ++*a2;
        continue;
      }
      if ( v7 == 't' )
      {
        int v12 = 9;
        goto LABEL_26;
      }
      if ( v7 != 'u' )
      {
        if ( v7 != 'r' )
          goto LABEL_41;
        int v12 = 13;
        goto LABEL_26;
      }
      int UnicodeNum = GetUnicodeNum(a1, v3);
      if ( (unsigned int)(UnicodeNum - 55296) > 0x3FF )
      {
        *a2 = v3 + 5;
      }
      else
      {
        if ( v3 + 11 >= v14 || a1[v3 + 6] != '\\' )
        {
          v6 = -7;
          goto LABEL_31;
        }
        if ( a1[v3 + 7] != 'u' )
        {
          v6 = -8;
          goto LABEL_31;
        }
        int v10 = GetUnicodeNum(a1, v3 + 6);
        *a2 = v3 + 11;
        UnicodeNum = (v10 & 0x3FF | (UnicodeNum << 10) & 0xFFC00) + 0x10000;
      }
      GetUnicode(v16, UnicodeNum);
      v17 << v16;
    }
    else
    {
        v17 << a1[v3];
    }
  }
  *a2 = v3 + 1;
  a3 = v17.str();
  return 0;
}
int GetJsonDict(std::string &a1, std::map<std::string, std::string>& a2)
{
  if ( a1[0] != '{' )
    return -1;
  int v10 = 1;
  while ( 1 )
  {
    int v3 = a1.length();
    if ( v10 >= v3 )
      return 0;
    std::string v11;
    std::string v13;
    while ( v10 < v3 )
    {
      if ( a1[v10] == '"' )
        goto LABEL_9;
      ++v10;
    }
    if ( v10 == v3 )
      return 0;
LABEL_9:
    int JsonString = GetJsonString(a1, &v10, v11);
    if ( JsonString )
      return JsonString;
    int v5 = a1.length();
    while ( v10 < v5 )
    {
      if ( a1[v10] == ':' )
        goto LABEL_18;
      ++v10;
    }
    if ( v10 == v5 )
    {
LABEL_26:
      return 0;
    }
LABEL_18:
    while ( v10 < v5 )
    {
      if (a1[v10] == '"' )
        goto LABEL_20;
      ++v10;
    }
    if ( v10 == v5 )
      return 0;
LABEL_20:
    JsonString = GetJsonString(a1, &v10, v13);
    if ( JsonString )
    {
LABEL_27:
      return JsonString;
    }
    a2[v11] = v13;
    int v7 = a1.length();
    while ( v10 < v7 && a1[v10] != ',' )
      ++v10;
  }
}
