#ifndef __NIGHT_H__
#define __NIGHT_H__

#include <iostream>
#include <map>
#include <vector>

namespace night
{
    extern std::string NS_TYPE_BOOL;
    extern std::string NS_TYPE_VAR;
    extern std::string NS_TYPE_NUM;
    extern std::string NS_TYPE_B_TYPE;
    extern std::string NS_TYPE_OP_SELF;
    extern std::string NS_TYPE_BINARY;
    extern std::string NS_TYPE_ASSIGN;
    extern std::string NS_TYPE_TERNARY;
    extern std::string NS_TYPE_OBJ_DOT;
    extern std::string NS_TYPE_OBJ_PROPERTY;
    extern std::string NS_TYPE_OBJ_SELF_OP;
    extern std::string NS_TYPE_OBJ_BLOCK;
    extern std::string NS_TYPE_BRACKET;
    extern std::string NS_TYPE_CALL;
    extern std::string NS_TYPE_KW;
    extern std::string NS_TYPE_SKIP;
    extern std::string NS_TYPE_STR;
    extern std::string NS_TYPE_PUNC;
    extern std::string NS_TYPE_FUNC;
    extern std::string NS_TYPE_PROG;
    extern std::string NS_TYPE_PROG_NO_SEM;
    extern std::string NS_TYPE_PROG_NO_SEM_REQUIRE;
    extern std::string NS_TYPE_ARRAY;
    extern std::string NS_TYPE_SWITCH;
    extern std::string NS_TYPE_DO_WHILE;
    extern std::string NS_TYPE_WHILE;
    extern std::string NS_TYPE_FOR;
    extern std::string NS_TYPE_IF;
    extern std::string NS_TYPE_K_V;
    extern std::string NS_TYPE_OP;

    extern std::string std_v_n;
    extern std::string std_v_v_n;

    extern std::string nsv_;
    extern std::string nst_;

    extern std::string NS_BUILTIN_SPACE;
    extern std::string NS_BUILTIN_PUNC;
    extern std::string NS_BUILTIN_OP;
    extern std::string NS_BUILTIN_ALL_OP;
    extern std::string NS_BUILTIN_TYPE;
    extern std::string NS_BUILTIN_KW;
    extern std::string NS_BUILTIN_OP_SELF;

    int compile_ns(std::string const&,std::string const&,std::string const&,uint,std::string&,bool);
    void compile_ns_with_sourcemap(std::string const&,std::string const&,std::string const&,std::string const&,uint,std::string&,std::string&);
    int compile_ns_no_wrapper(std::string const& a1, std::string const& a2, uint a5, std::string& a6, bool a7);
    void readfile(char const*, std::string &);
    void writefile(char const*, std::string &);

    class ns_node
    {
    private:
        /* data */
    public:
        std::string offset_0;
        std::string offset_24;
        int offset_48 = 0;
        int offset_52 = 0;
        int offset_56 = 0;
        std::string offset_60;
        std::string offset_84;
        std::string offset_108;
        std::string offset_132;
        std::string offset_156;
        night::ns_node * offset_180 = nullptr;
        night::ns_node * offset_184 = nullptr;
        night::ns_node * offset_188 = nullptr;
        night::ns_node * offset_192 = nullptr;
        std::vector<night::ns_node *>* offset_196 = nullptr;
        bool offset_200 = false;
        night::ns_node * offset_204 = nullptr;
        night::ns_node * offset_208 = nullptr;
        night::ns_node * offset_212 = nullptr;
        night::ns_node * offset_216 = nullptr;
        night::ns_node * offset_220 = nullptr;

        /**
         * 分析内存，两层vector
        */
        std::vector<std::vector<night::ns_node *>*>* offset_224 = nullptr;

        std::vector<night::ns_node *>* offset_228 = nullptr;
        std::vector<night::ns_node *>* offset_232 = nullptr;
        std::vector<std::vector<night::ns_node *>*>* offset_236 = nullptr;
        std::vector<night::ns_node *>* offset_240 = nullptr;
        std::vector<night::ns_node *>* offset_244 = nullptr;
        ns_node(/* args */);
        ~ns_node();
        std::string debug_no_space(void);
    };

    // class GodsSon
    // {
    // private:
    //     /* data */
    // public:
    //     std::string offset_0;

    // };
    
    
    class NSGod
    {
    private:
        /* data */
    public:
        struct GodsSon {
            std::string offset_0;
            union Offset24
            {
                /* data */
                std::vector<night::ns_node *>* vec = nullptr;
                std::vector<std::vector<night::ns_node *>*>* vecVec;
                night::ns_node * node;
            };
            Offset24 offset_24;
            
            // std::vector<night::ns_node *>* offset_24;
            
        };
        std::vector<night::NSGod::GodsSon *> offset_0;
        NSGod(/* args */);
        ~NSGod();
        GodsSon::Offset24 gen_girl(std::string a2);
        night::ns_node* gen_son(std::string);
        void hamlet(void);
    };

    struct PeekData
    {
        char data;
        int offset_4;
        int offset_8;
    };
    
    class NSStream
    {
    private:
        /* data */
    public:
        std::string offset_0;
        std::string offset_24 = "";
        int offset_48 = 0;
        int offset_52 = 0; // 当前行数
        int offset_56 = 0; // 当前行第几个字符位置
        NSStream(/* args */);
        NSStream(std::string const&, std::string const&, uint);
        ~NSStream();
        NSStream(NSStream const&);
        NSStream& operator=(NSStream const&);
        bool eof(void);
        bool eof_2(void);
        void err(std::string const&, int, int, bool);
        PeekData next(void);
        PeekData peek(void);
        PeekData peek_2(void);
    };

    class NSToken
    {
    private:
        /* data */
    public:
        NSGod* offset_0 = nullptr;
        NSStream * offset_4 = nullptr;
        night::ns_node* offset_8 = nullptr;
        std::vector<night::ns_node *> offset_12;
        std::map<std::string, unsigned int> offset_24;

        NSToken(/* args */);
        ~NSToken();
        bool eof(void);
        void err(std::string const&, int, int, bool);
        void get_tokens_for_sourcemap(std::map<std::string, uint> &, std::map<uint,std::string> &);
        night::ns_node* next(void);
        void pass(void);
        night::ns_node* peek(void);
        void push(night::ns_node *);
        void read_comment_method_1(void);
        void read_comment_method_2(void);
        night::ns_node * read_next(void);
        night::ns_node * read_number(std::string const&);
        night::ns_node * read_string(char, std::string const&);
        night::ns_node * read_var(std::string const&);
        std::string read_while(bool (*)(char,void *),void *);
        static bool rw_cb_number(char,void *);
        void skip_comment(std::string &);
        static bool tk_is_comment2(char,void *);
        static bool tk_is_not_line_break(char,void *);
        static bool tk_is_valid_op_str(char,void *);
        static bool tk_is_var(char,void *);
        static bool tk_is_var_start(char,void *);
        static bool tk_is_whitespace(char,void *);
    };
    
    class NSASTParse
    {
    private:
        /* data */
        std::string offset_0;
        night::NSGod * offset_24 = nullptr;
        night::NSToken * offset_28 = nullptr;
        int offset_32 = 0;
        int offset_36 = 0;
        int offset_40 = 0;
        std::string offset_44;
        std::string offset_60;
    public:
        NSASTParse(/* args */);
        NSASTParse(std::string, night::NSToken *, night::NSGod *);
        ~NSASTParse();
        night::ns_node * ast_call(night::ns_node *);
        night::ns_node * ast_code_block(void);
        night::ns_node * ast_dispatch(bool);
        night::ns_node * ast_do_while(void);
        night::ns_node * ast_expression(void);
        night::ns_node * ast_expression_no_binary(void);
        night::ns_node * ast_expression_no_comma(void);
        night::ns_node * ast_for(void);
        night::ns_node * ast_function(void);
        night::ns_node * ast_if(void);
        night::ns_node * ast_new_array(void);
        night::ns_node * ast_obj_block(void);
        night::ns_node * ast_obj_dot(night::ns_node *);
        night::ns_node * ast_obj_op(night::ns_node *);
        night::ns_node * ast_obj_op_self(night::ns_node *);
        night::ns_node * ast_op_self(void);
        night::ns_node * ast_require(void);
        night::ns_node * ast_switch(void);
        night::ns_node * ast_ternary_expression(void);
        night::ns_node * ast_trans_kw(void);
        night::ns_node * ast_var(void);
        night::ns_node * ast_varname(void);
        night::ns_node * ast_while(void);
        bool end_line(void);
        void ignore_buildin_kw(std::string const&);
        void ignore_op(std::string const&);
        void ignore_punc(std::string const&);
        void ignore_punc_pass_sem(std::string const&);
        bool is_buildin_keywords(std::string const&);
        bool is_exp(night::ns_node *);
        bool is_obj_op_self(bool);
        bool is_op(std::string const&);

        /**
         * 是 op操作符 或者是 comma逗号
        */
        bool is_op_or_comma(std::string const&);

        bool is_op_self(bool);

        /**
         * 是否是标点符号（punctuation）
        */
        night::ns_node * is_punctuation(std::string const&);
        bool is_save_for_division(night::ns_node *);
        night::ns_node * make_binary_or_just_value(night::ns_node *,bool);
        night::ns_node * make_call_or_just_expression(night::ns_node *);
        std::vector<night::ns_node *>* make_list_by_parser(
            std::string const&,
            std::string const&,
            std::string const&,
            std::string const&,
            bool,
            int,
            std::string
            );
        night::ns_node* top_down(void);
    };

    class ns_sourcemap
    {
    private:
        /* data */
        /*
        大小：64byte
        */
    public:
        std::string offset_0;
        int offset_24;
        int offset_28;
        std::string offset_32;
        int offset_56;
        int offset_60;
        ns_sourcemap(/* args */);
        ns_sourcemap(ns_sourcemap &&);
        ns_sourcemap(ns_sourcemap const&);
        ns_sourcemap& operator=(ns_sourcemap const&);
        ns_sourcemap& operator=(ns_sourcemap &&);
        ~ns_sourcemap();
    };
    
    class NSCompileJs
    {
    private:
        /* data */
    public:
        std::string offset_0;
        night::NSASTParse * offset_24 = nullptr;
        std::vector<std::string> * offset_28 = nullptr;
        int offset_32 = 0;
        std::vector<night::ns_sourcemap> offset_36;
        int offset_48 = 1;
        NSCompileJs(/* args */);
        ~NSCompileJs();
        std::string compile(night::ns_node *);
        std::string compile_assign(night::ns_node *);
        std::string compile_binary(night::ns_node *);
        std::string compile_call(night::ns_node *);
        std::string compile_do_while(night::ns_node *);
        std::string compile_for(night::ns_node *);
        std::string compile_function(night::ns_node *);
        std::string compile_if(night::ns_node *);
        std::string compile_k_v(night::ns_node *);
        std::string compile_obj_dot(night::ns_node *);
        std::string compile_obj_property(night::ns_node *);
        std::string compile_obj_self_op(night::ns_node *);
        /**
         * @param a3 结果
        */
        std::string compile_once(std::string &a3, std::vector<std::string> *a4, bool a5);
        std::string compile_op_self(night::ns_node *);
        std::string compile_prog(night::ns_node *);
        std::string compile_prog_no_sem(night::ns_node *);
        std::string compile_switch(night::ns_node *);
        std::string compile_ternary(night::ns_node *);
        std::string compile_var(night::ns_node *);
        std::string compile_while(night::ns_node *);
    };

    namespace str
    {
        std::string get_token(std::string const&, int);
        int path_combine(
            std::string const&,
            std::string const&,
            std::string&
            );
    } // namespace str

    namespace sourcemap
    {
        void gen_sourcemap_content(
            std::string const&,
            std::map<std::string,uint>,
            std::map<uint,std::string>,
            std::vector<night::ns_sourcemap> &,
            int,
            std::string&,
            std::string*
            );
        void int2vlq(int);
    } // namespace sourcemap
    
} // namespace night

#endif
