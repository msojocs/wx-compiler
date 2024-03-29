cmake_minimum_required(VERSION 3.0.0)
project(wx_complier VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# set (CMAKE_CXX_STANDARD 14)
# set(CMAKE_VERBOSE_MAKEFILE ON)
# message("before: ${CMAKE_CXX_FLAGS_DEBUG}")
# set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O1")
# message("after: ${CMAKE_CXX_FLAGS_DEBUG}")

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
    src/wxml/rpx.cpp
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
    src/utils/json.cpp
    src/utils/string_utils.cpp
    src/utils/file.cpp
    )
add_executable(wcsc
    src/wcsc.cpp
    src/wcsc/usage.cpp
    src/wxa/wxa.cpp
    src/wxml/common.cpp
    src/wxml/rewrite.cpp
    src/wxml/rpx.cpp
    src/wxss/common.cpp
    src/wxss/token.cpp
    src/wxss/tokenizer.cpp
    src/wxss/x_compiler.cpp
    src/wxss/css_tree_lib/css_tree_lib.cpp
    src/wxss/css_tree_lib/base.cpp
    src/wxss/css_tree_lib/css_syntax_tree.cpp
    src/wxss/css_tree_lib/lexical_checker.cpp
    src/wxss/css_tree_lib/parser.cpp
    src/wxss/css_tree_lib/rule.cpp
    src/wxss/css_tree_lib/transit_table.cpp
    src/utils/bittest.cpp
    src/utils/json.cpp
    src/utils/string_utils.cpp
    src/utils/file.cpp
    )
# add_executable(
#     resolve_path
#     test/resolve_path.cpp
#     src/wxml/dom_lib/common.cpp
#     )
add_executable(test1
    test/test.cpp
    )
# add_executable(
#     transit_table
#     test/transit_table.cpp
#     src/wxml/expr_lib/base.cpp
#     src/wxml/expr_lib/bnf.cpp
#     src/wxml/expr_lib/common.cpp
#     src/wxml/expr_lib/expr_syntax_tree.cpp
#     src/wxml/expr_lib/parser.cpp
#     src/wxml/expr_lib/token.cpp
#     src/wxml/expr_lib/tokenizer.cpp
#     src/wxml/expr_lib/transit_table.cpp
#     )

add_test(transit_table_test
    $<TARGET_FILE:transit_table>
    )
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
