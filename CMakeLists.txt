cmake_minimum_required(VERSION 3.0.0)
project(wx_complier VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(wcc
    src/wcc.cpp
    src/include/wxml.h
    src/include/night.h
    src/wcc/usage.cpp
    src/wxa/wxa.cpp
    src/wxml/rewrite.cpp
    src/wxml/name_allocator.cpp
    src/wxml/string_templating/common.cpp
    src/wxml/string_templating/token.cpp
    src/wxml/dom_lib/rvm_op_code_position_recorder.cpp
    src/wxml/dom_lib/rvm_op_code_position.cpp
    src/wxml/dom_lib/parse_exception.cpp
    src/wxml/dom_lib/token.cpp
    src/wxml/dom_lib/common.cpp
    src/wxml/dom_lib/machine.cpp
    src/wxml/dom_lib/tokenizer.cpp
    src/wxml/dom_lib/parser.cpp
    src/night/night.cpp
    src/night/ns_ast_parse.cpp
    src/night/ns_compile_js.cpp
    src/night/ns_node.cpp
    src/night/ns_sourcemap.cpp
    src/night/ns_stream.cpp
    src/night/ns_token.cpp
    src/night/ns_god/ns_god.cpp
    src/night/str/str.cpp
    src/wxml/expr_lib/base.cpp
    src/wxml/expr_lib/bnf.cpp
    src/wxml/expr_lib/common.cpp
    src/wxml/expr_lib/expr_syntax_tree.cpp
    src/wxml/expr_lib/parser.cpp
    src/wxml/expr_lib/token.cpp
    src/wxml/expr_lib/tokenizer.cpp
    src/wxml/expr_lib/transit_table.cpp
    src/wxml/compiler.cpp
    src/wxml/dom_lib/str_cache.cpp
    src/wxml/dom_lib/wxml_dom.cpp
    src/utils/string_utils.cpp
    src/utils/file.cpp
    )
add_executable(wcsc
    src/wcsc.cpp
    )
add_executable(
    resolve_path
    test/resolve_path.cpp
    src/wxml/dom_lib/common.cpp
    )
add_executable(test1
    test/test.cpp
    )
add_executable(
    transit_table
    test/transit_table.cpp
    src/wxml/expr_lib/base.cpp
    src/wxml/expr_lib/bnf.cpp
    src/wxml/expr_lib/common.cpp
    src/wxml/expr_lib/expr_syntax_tree.cpp
    src/wxml/expr_lib/parser.cpp
    src/wxml/expr_lib/token.cpp
    src/wxml/expr_lib/tokenizer.cpp
    src/wxml/expr_lib/transit_table.cpp
    )

add_test(transit_table_test
    $<TARGET_FILE:transit_table>
    )
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
