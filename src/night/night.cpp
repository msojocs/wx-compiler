#include "../include/night.h"

namespace night
{
    std::string NS_TYPE_BOOL;
    std::string NS_TYPE_VAR;
    std::string NS_TYPE_NUM;
    std::string NS_TYPE_B_TYPE;
    std::string NS_TYPE_OP_SELF;
    std::string NS_TYPE_BINARY;
    std::string NS_TYPE_ASSIGN;
    std::string NS_TYPE_TERNARY;
    std::string NS_TYPE_OBJ_DOT;
    std::string NS_TYPE_OBJ_PROPERTY;
    std::string NS_TYPE_OBJ_SELF_OP;
    std::string NS_TYPE_OBJ_BLOCK;
    std::string NS_TYPE_BRACKET;
    std::string NS_TYPE_CALL;
    std::string NS_TYPE_KW;
    std::string NS_TYPE_SKIP;
    std::string NS_TYPE_STR;
    std::string NS_TYPE_PUNC;
    std::string NS_TYPE_FUNC;
    std::string NS_TYPE_PROG;
    std::string NS_TYPE_PROG_NO_SEM;
    std::string NS_TYPE_PROG_NO_SEM_REQUIRE;
    std::string NS_TYPE_ARRAY;
    std::string NS_TYPE_SWITCH;
    std::string NS_TYPE_DO_WHILE;
    std::string NS_TYPE_WHILE;
    std::string NS_TYPE_FOR;
    std::string NS_TYPE_IF;
    std::string NS_TYPE_K_V;


    std::string std_v_n = "";
    std::string std_v_v_n = "";

    void compile_ns(
        std::string const& a1,
        std::string const& a2,
        std::string const& a3,
        uint a4,
        std::string& a5,
        bool a6)
    {
        a5 = "";
        night::NSStream v38(a1, a3, a4);
        night::NSToken v27;
        night::NSGod v17;
        night::NSASTParse v39(a1, &v27, &v17);

        v17.hamlet();

    }

    void compile_ns_with_sourcemap(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        uint,
        std::string&,
        std::string&
        )
    {

    }

    void readfile(char const*, std::string &)
    {

    }

    void writefile(char const*, std::string &)
    {

    }
}