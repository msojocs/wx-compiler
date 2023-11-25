#include "../include/night.h"

namespace night
{
    std::string NS_TYPE_BOOL = "bool";
    std::string NS_TYPE_VAR = "var";
    std::string NS_TYPE_NUM = "num";
    std::string NS_TYPE_B_TYPE = "builtin_type";
    std::string NS_TYPE_OP_SELF = "op_self";
    std::string NS_TYPE_BINARY = "binary";
    std::string NS_TYPE_ASSIGN = "assign";
    std::string NS_TYPE_TERNARY = "ternary";
    std::string NS_TYPE_OBJ_DOT = "obj_dot";
    std::string NS_TYPE_OBJ_PROPERTY = "obj_property";
    std::string NS_TYPE_OBJ_SELF_OP = "obj_self_op";
    std::string NS_TYPE_OBJ_BLOCK = "obj_block";
    std::string NS_TYPE_ARRAY = "array";
    std::string NS_TYPE_BRACKET = "bracket";
    std::string NS_TYPE_CALL = "call";
    std::string NS_TYPE_KW = "kw";
    std::string NS_TYPE_SKIP = "skip";
    std::string NS_TYPE_STR = "str";
    std::string NS_TYPE_PUNC = "punc";
    std::string NS_TYPE_FUNC = "function";
    std::string NS_TYPE_PROG = "prog";
    std::string NS_TYPE_PROG_NO_SEM = "prog_no_sem";
    std::string NS_TYPE_PROG_NO_SEM_REQUIRE = "prog_no_sem_require";
    std::string NS_TYPE_SWITCH = "switch";
    std::string NS_TYPE_DO_WHILE = "do_while";
    std::string NS_TYPE_WHILE = "while";
    std::string NS_TYPE_FOR = "for";
    std::string NS_TYPE_IF = "if";
    std::string NS_TYPE_K_V = "k-v";
    std::string NS_TYPE_OP = "op";

    std::string NS_BUILTIN_OP = "+-*/%=&^|<>~!?";
    std::string NS_BUILTIN_OP_SELF = "~!";
    std::string NS_BUILTIN_ALL_OP = " = ? + - * / % ++ -- + - ~ ! << >> >>> & ^ | < > <= >= == != === !== *= /= %= += -= <<= >>= >>>= &= ^= |= && || ";
    std::string NS_BUILTIN_PUNC = ".,;(){}[]:";
    std::string NS_BUILTIN_SPACE = " \t\r\n";
    std::string NS_BUILTIN_TYPE = " Number Math Date ";
    // keywords
    std::string NS_BUILTIN_KW = " delete void typeof null undefined NaN Infinity var if else true false require this function arguments return for while do break continue switch case default ";

    std::string std_v_n = "new std::vector<ns_node*>";
    std::string std_v_v_n = "new std::vector<std::vector<ns_node*>*>";

    std::string nsv_ = "nv_";
    std::string nst_ = "nt_";

    int compile_ns(
        std::string const& a1, // 文件名
        std::string const& a2, // 函数名
        std::string const& a3, // 文件内容
        uint a4,
        std::string& a5, // 结果
        bool a6)
    {
        a5 = "";
        night::NSStream v38(a1, a3, a4);
        night::NSToken v27;
        night::NSGod v17;
        v27.offset_0 = &v17;
        v27.offset_4 = &v38;
        night::NSASTParse v39(a1, &v27, &v17);
        NSCompileJs cjs;
        std::string v19;
        std::vector<std::string> v18;
        cjs.offset_24 = &v39;
        cjs.offset_48 = 1;
        std::string v21 = cjs.compile_once(v19, &v18, a6);
        v17.hamlet();
        if (v21.length())
        {
            a5.assign(v21);
            return 121;
        }
        else
        {
            std::string v24 = ";return " + night::nsv_;
            v24.append("module.").append(night::nsv_);
            v24.append("exports;");
            std::string v25 = "function " + a2;
            v25.append("(){");
            a5 = v25;
            std::string v23 = "var " + night::nsv_;
            v23.append("module={").append(night::nsv_);
            v23.append("exports:{}};");
            a5.append(v23);
            std::string v26 = v19 + v24;
            a5.append(v26);
            a5.append("}");
        }
        return 0;
    }

    /**
     * 此函数只有定义实现，没有调用
     * 所以，没有必要实现
     * 
    */
    void compile_ns_with_sourcemap(
        std::string const& a1,
        std::string const& a2,
        std::string const& a3,
        std::string const& a4,
        uint a5,
        std::string& a6,
        std::string& a7
        )
    {
        int retcode = 0;
        a6 = "";
        night::NSStream v80(a1, a4, a5);
        night::NSToken v69;
        night::NSGod v36;
        night::NSASTParse v81(a1, &v69, &v36);

        night::NSCompileJs v71;
        v71.offset_24 = &v81;

        std::string v41;
        std::vector<std::string> v37;
        std::string v43 = v71.compile_once(v41, &v37, false);
        v36.hamlet();

        // if (v43.length())
        // {
        //     a6.assign(v43);
        //     retcode = 121;
        // }
        // else
        // {
        //     std::string ret = "";
        //     std::string v51 = ";return " + night::nsv_;
        //     v51.append("module.");
        //     v51.append(night::nsv_);
        //     v51.append("exports;");

        //     std::string v57 = "function " + a3 + "(){";
        //     a6 = v57;

        //     std::string v45 = "var " + night::nsv_ + "module={" + night::nsv_ + "exports:{}};";
        //     ret += v45;

        //     std::string v63 = v41 + v51;
        //     ret += v63;

        //     ret += "}";
        //     v63 = "\n//# sourceMappingURL=" + a2;
        //     ret += v63;

        //     // ...
        // }

        throw "not implement";
    }

    /**
     * 此函数只有定义实现，没有调用
     * 所以，没有必要实现
     * 
    */
    void readfile(char const*, std::string &)
    {

        throw "not implement";
    }

    /**
     * 此函数只有定义实现，没有调用
     * 所以，没有必要实现
     * 
    */
    void writefile(char const*, std::string &)
    {

        throw "not implement";
    }
}