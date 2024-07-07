set(NW_VERSION "0.55.0")
message("current dir: ${CMAKE_CURRENT_SOURCE_DIR}")
execute_process(
    COMMAND mkdir -p ${CMAKE_CURRENT_SOURCE_DIR}/cache;
)
if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/cache/nw-headers-v${NW_VERSION}.tar.gz")
    execute_process(
        COMMAND wget -c -O nw-headers-v${NW_VERSION}.tar.gz.tmp https://dl.nwjs.io/v${NW_VERSION}/nw-headers-v${NW_VERSION}.tar.gz;
        COMMAND mv nw-headers-v${NW_VERSION}.tar.gz.tmp nw-headers-v${NW_VERSION}.tar.gz;
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/cache
        OUTPUT_VARIABLE CMAKE_JS_VERSION
        OUTPUT_STRIP_TRAILING_WHITESPACE
    )
endif()
execute_process(COMMAND rm -rf ${CMAKE_CURRENT_SOURCE_DIR}/node WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/node")
    execute_process(COMMAND tar -zxf nw-headers-v${NW_VERSION}.tar.gz -C ${CMAKE_CURRENT_SOURCE_DIR} WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/cache)
endif()
# if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/lib/node-v${NW_VERSION}.lib")
#     execute_process(
#         COMMAND wget -c -O node-v${NW_VERSION}.lib.tmp https://dl.nwjs.io/v${NW_VERSION}/node.lib;
#         COMMAND mv node-v${NW_VERSION}.lib.tmp node-v${NW_VERSION}.lib;
#         WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib
#         OUTPUT_VARIABLE CMAKE_JS_VERSION
#         OUTPUT_STRIP_TRAILING_WHITESPACE
#     )
# endif()
# if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/lib/nw-v${NW_VERSION}.lib")
#     execute_process(
#         COMMAND wget -c -O nw-v${NW_VERSION}.lib.tmp https://dl.nwjs.io/v${NW_VERSION}/nw.lib;
#         COMMAND mv nw-v${NW_VERSION}.lib.tmp nw-v${NW_VERSION}.lib;
#         WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib
#         OUTPUT_VARIABLE CMAKE_JS_VERSION
#         OUTPUT_STRIP_TRAILING_WHITESPACE
#     )
# endif()

include_directories(node/src)
include_directories(node/include/node)
include_directories(node/deps/v8/include)
include_directories(node/deps/uv/include)

add_library(wcc_module
    SHARED
    ./wcc.cpp
    ./include/wcc.hh
    ./config/wcc.cc
    ../include/wxml.h
    ../include/night.h
    ../wcc/usage.cpp
    ../wxa/wxa.cpp
    ../wxml/rewrite.cpp
    ../wxml/name_allocator.cpp
    ../wxml/string_templating/common.cpp
    ../wxml/string_templating/token.cpp
    ../wxml/dom_lib/rvm_op_code_position_recorder.cpp
    ../wxml/dom_lib/rvm_op_code_position.cpp
    ../wxml/dom_lib/parse_exception.cpp
    ../wxml/dom_lib/token.cpp
    ../wxml/dom_lib/common.cpp
    ../wxml/dom_lib/machine.cpp
    ../wxml/dom_lib/tokenizer.cpp
    ../wxml/dom_lib/parser.cpp
    ../night/night.cpp
    ../night/ns_ast_parse.cpp
    ../night/ns_compile_js.cpp
    ../night/ns_node.cpp
    ../night/ns_sourcemap.cpp
    ../night/ns_stream.cpp
    ../night/ns_token.cpp
    ../night/ns_god/ns_god.cpp
    ../night/str/str.cpp
    ../wxml/rpx.cpp
    ../wxml/expr_lib/base.cpp
    ../wxml/expr_lib/bnf.cpp
    ../wxml/expr_lib/common.cpp
    ../wxml/expr_lib/expr_syntax_tree.cpp
    ../wxml/expr_lib/parser.cpp
    ../wxml/expr_lib/token.cpp
    ../wxml/expr_lib/tokenizer.cpp
    ../wxml/expr_lib/transit_table.cpp
    ../wxml/compiler.cpp
    ../wxml/dom_lib/str_cache.cpp
    ../wxml/dom_lib/wxml_dom.cpp
    ../utils/json.cpp
    ../utils/string_utils.cpp
    ../utils/file.cpp
)

set_target_properties(wcc_module PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
# DV8_COMPRESS_POINTERS: 缺少会导致IsString崩溃
target_compile_options(wcc_module PRIVATE "-DNODE_GYP_MODULE_NAME=binding" "-DUSING_UV_SHARED=1" "-DUSING_V8_SHARED=1" "-DV8_DEPRECATION_WARNINGS=1" "-DV8_DEPRECATION_WARNINGS" "-DV8_REVERSE_JSARGS" "-D_GLIBCXX_USE_CXX11_ABI=1" "-D_LIBCPP_HAS_NO_VENDOR_AVAILABILITY_ANNOTATIONS" "-D_LARGEFILE_SOURCE" "-D_FILE_OFFSET_BITS=64" "-DV8_COMPRESS_POINTERS" "-DV8_31BIT_SMIS_ON_64BIT_ARCH" "-D__STDC_FORMAT_MACROS" "-DOPENSSL_NO_PINSHARED" "-DOPENSSL_THREADS" "-DOPENSSL_NO_ASM" "-DBUILDING_NODE_EXTENSION")
set_target_properties(wcc_module PROPERTIES PREFIX "" SUFFIX ".node")
# target_link_libraries(wcc_module ${CMAKE_CURRENT_SOURCE_DIR}/lib/nw-v${NW_VERSION}.lib)
# target_link_libraries(wcc_module ${CMAKE_CURRENT_SOURCE_DIR}/lib/node-v${NW_VERSION}.lib)


add_library(wcsc_module
    SHARED
    ./wcsc.cpp
    ./config/wcsc.cc
    ../wcsc/usage.cpp
    ../wxa/wxa.cpp
    ../wxml/common.cpp
    ../wxml/rewrite.cpp
    ../wxml/rpx.cpp
    ../wxss/common.cpp
    ../wxss/token.cpp
    ../wxss/tokenizer.cpp
    ../wxss/x_compiler.cpp
    ../wxss/css_tree_lib/css_tree_lib.cpp
    ../wxss/css_tree_lib/base.cpp
    ../wxss/css_tree_lib/css_syntax_tree.cpp
    ../wxss/css_tree_lib/lexical_checker.cpp
    ../wxss/css_tree_lib/parser.cpp
    ../wxss/css_tree_lib/rule.cpp
    ../wxss/css_tree_lib/transit_table.cpp
    ../utils/bittest.cpp
    ../utils/json.cpp
    ../utils/string_utils.cpp
    ../utils/file.cpp
)
set_target_properties(wcsc_module PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
# DV8_COMPRESS_POINTERS: 缺少会导致IsString崩溃
target_compile_options(wcsc_module PRIVATE "-DNODE_GYP_MODULE_NAME=binding" "-DUSING_UV_SHARED=1" "-DUSING_V8_SHARED=1" "-DV8_DEPRECATION_WARNINGS=1" "-DV8_DEPRECATION_WARNINGS" "-DV8_REVERSE_JSARGS" "-D_GLIBCXX_USE_CXX11_ABI=1" "-D_LIBCPP_HAS_NO_VENDOR_AVAILABILITY_ANNOTATIONS" "-D_LARGEFILE_SOURCE" "-D_FILE_OFFSET_BITS=64" "-DV8_COMPRESS_POINTERS" "-DV8_31BIT_SMIS_ON_64BIT_ARCH" "-D__STDC_FORMAT_MACROS" "-DOPENSSL_NO_PINSHARED" "-DOPENSSL_THREADS" "-DOPENSSL_NO_ASM" "-DBUILDING_NODE_EXTENSION")
set_target_properties(wcsc_module PROPERTIES PREFIX "" SUFFIX ".node")
