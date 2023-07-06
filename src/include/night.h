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

    extern std::string std_v_n;
    extern std::string std_v_v_n;

    void compile_ns(std::string const&,std::string const&,std::string const&,uint,std::string&,bool);
    void compile_ns_with_sourcemap(std::string const&,std::string const&,std::string const&,std::string const&,uint,std::string&,std::string&);
    void readfile(char const*, std::string &);
    void writefile(char const*, std::string &);

    class NSGod
    {
    private:
        /* data */
    public:
        NSGod(/* args */);
        ~NSGod();
        void gen_girl(std::string);
        void gen_son(std::string);
        void hamlet(void);
    };

    class ns_node
    {
    private:
        /* data */
    public:
        std::string offset_0;
        std::string offset_24;
        std::string offset_60;
        std::string offset_108;
        std::string offset_156;
        night::ns_node * offset_180;
        night::ns_node * offset_184;
        night::ns_node * offset_192;
        std::vector<night::ns_node *> offset_196;
        std::vector<night::ns_node *> offset_228;
        ns_node(/* args */);
        ~ns_node();
        std::string debug_no_space(void);
    };
    
    class NSToken
    {
    private:
        /* data */
    public:
        NSToken(/* args */);
        ~NSToken();
        bool eof(void);
        void err(std::string const&,int,int,bool);
        void get_tokens_for_sourcemap(std::map<std::string, uint> &, std::map<uint,std::string> &);
        void next(void);
        void pass(void);
        void peek(void);
        void push(night::ns_node *);
        void read_comment_method_1(void);
        void read_comment_method_2(void);
        void read_next(void);
        void read_number(std::string const&);
        void read_string(char,std::string const&);
        void read_var(std::string const&);
        std::string read_while(bool (*)(char,void *),void *);
        void rw_cb_number(char,void *);
        void skip_comment(std::string &);
        void tk_is_comment2(char,void *);
        void tk_is_not_line_break(char,void *);
        void tk_is_valid_op_str(char,void *);
        void tk_is_var(char,void *);
        void tk_is_var_start(char,void *);
        void tk_is_whitespace(char,void *);
    };
    
    class NSASTParse
    {
    private:
        /* data */
        std::string offset_0;
        night::NSGod * offset_24;
        night::NSToken * offset_28;
        int offset_36;
        int offset_40;
        std::string offset_44;
        int offset_52;
    public:
        NSASTParse(/* args */);
        NSASTParse(std::string, night::NSToken *, night::NSGod *);
        ~NSASTParse();
        void ast_call(night::ns_node *);
        void ast_code_block(void);
        void ast_dispatch(bool);
        void ast_do_while(void);
        void ast_expression(void);
        void ast_expression_no_binary(void);
        void ast_expression_no_comma(void);
        void ast_for(void);
        void ast_function(void);
        void ast_if(void);
        void ast_new_array(void);
        void ast_obj_block(void);
        void ast_obj_dot(night::ns_node *);
        void ast_obj_op(night::ns_node *);
        void ast_obj_op_self(night::ns_node *);
        void ast_op_self(void);
        void ast_require(void);
        void ast_switch(void);
        void ast_ternary_expression(void);
        void ast_trans_kw(void);
        void ast_var(void);
        void ast_varname(void);
        void ast_while(void);
        void end_line(void);
        void ignore_buildin_kw(std::string const&);
        void ignore_op(std::string const&);
        void ignore_punc(std::string const&);
        void ignore_punc_pass_sem(std::string const&);
        void is_buildin_keywords(std::string const&);
        void is_exp(night::ns_node *);
        void is_obj_op_self(bool);
        void is_op(std::string const&);

        /**
         * 是 op操作符 或者是 comma逗号
        */
        void is_op_or_comma(std::string const&);

        void is_op_self(bool);

        /**
         * 是否是标点符号（punctuation）
        */
        void is_punctuation(std::string const&);
        void is_save_for_division(night::ns_node *);
        void make_binary_or_just_value(night::ns_node *,bool);
        void make_call_or_just_expression(night::ns_node *);
        void make_list_by_parser(
            std::string const&,
            std::string const&,
            std::string const&,
            std::string const&,
            bool,
            int,
            std::string
            );
        void top_down(void);
    };

    class ns_sourcemap
    {
    private:
        /* data */
    public:
        std::string offset_0;
        ns_sourcemap(/* args */);
        ~ns_sourcemap();
    };
    
    class NSCompileJs
    {
    private:
        /* data */
        night::NSASTParse * offset_24;
        std::vector<std::string> * offset_28;
    public:
        std::string offset_0;
        std::vector<night::ns_sourcemap> offset_36;
        int offset_48;
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
        void compile_once(std::string &, std::vector<std::string> *, bool);
        std::string compile_op_self(night::ns_node *);
        std::string compile_prog(night::ns_node *);
        std::string compile_prog_no_sem(night::ns_node *);
        std::string compile_switch(night::ns_node *);
        std::string compile_ternary(night::ns_node *);
        std::string compile_var(night::ns_node *);
        std::string compile_while(night::ns_node *);
    };
    
    class NSStream
    {
    private:
        /* data */
        std::string offset_24;
        int offset_48 = 0;
        int offset_52 = 0; // 当前行数
        int offset_56 = 0; // 当前行第几个字符位置
    public:
        NSStream(/* args */);
        NSStream(std::string const&,std::string const&,uint);
        ~NSStream();
        void eof(void);
        void eof_2(void);
        void err(std::string const&,int,int,bool);
        void next(void);
        void peek(void);
        void peek_2(void);
    };

    namespace str
    {
        void get_token(std::string const&, int);
        void path_combine(
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
