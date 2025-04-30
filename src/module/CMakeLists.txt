set(NW_VERSION "0.55.0")
message("current dir: ${CMAKE_CURRENT_SOURCE_DIR}")
execute_process(
    COMMAND mkdir -p ${CMAKE_CURRENT_SOURCE_DIR}/cache;
)

find_program(PNPM_EXECUTABLE pnpm)
if(NOT PNPM_EXECUTABLE)
    message(FATAL_ERROR "pnpm not found!")
endif()
if(WIN32)
    set(PNPM_EXECUTABLE "${PNPM_EXECUTABLE}.CMD")
endif()

message("CMAKE_CXX_FLAGS:${CMAKE_CXX_FLAGS}")
message("获取 cmake-js 配置")
message(${PROJECT_SOURCE_DIR})
execute_process(COMMAND
    ${PNPM_EXECUTABLE} --silent cmake-js --version
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
    OUTPUT_VARIABLE CMAKE_JS_VERSION
    OUTPUT_STRIP_TRAILING_WHITESPACE
)
execute_process(COMMAND
    ${PNPM_EXECUTABLE} cmake-js print-cmakejs-src --arch ${TARGET_ARCH} --silent -l error
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
    OUTPUT_VARIABLE CMAKE_JS_SRC
    OUTPUT_STRIP_TRAILING_WHITESPACE
)
message("获取 CMAKE_JS_SRC 配置: ${CMAKE_JS_SRC}")

message("PNPM_EXECUTABLE: " ${PNPM_EXECUTABLE})
execute_process(COMMAND
    ${PNPM_EXECUTABLE} cmake-js print-cmakejs-include --silent -l error
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
    OUTPUT_VARIABLE CMAKE_JS_INC
    OUTPUT_STRIP_TRAILING_WHITESPACE
)
message("CMAKE_JS_INC:" ${CMAKE_JS_INC})
foreach(item IN LISTS CMAKE_JS_INC)
    message("include: ${item}")
    include_directories(${item})
endforeach()

message("获取 node-addon-api 配置")
execute_process(COMMAND
    node -p "require('node-addon-api').include"
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
    OUTPUT_VARIABLE NODE_ADDON_API_DIR
    OUTPUT_STRIP_TRAILING_WHITESPACE
)
message("node-addon-api 路径:${NODE_ADDON_API_DIR}")

message("CMAKE_JS_INC: " ${CMAKE_JS_INC})
message("CMAKE_JS_SRC: " ${CMAKE_JS_SRC})
message("CMAKE_JS_LIB: " ${CMAKE_JS_LIB})

include_directories(${CMAKE_JS_SRC})
include_directories(${NODE_ADDON_API_DIR})

add_library(wcc_module
    SHARED
    ./wcc.cpp
    ./config/wcc.hh
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
    ${CMAKE_JS_SRC}
)
target_link_libraries(wcc_module PRIVATE rt pthread)
set_target_properties(wcc_module PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set_target_properties(wcc_module PROPERTIES PREFIX "" SUFFIX ".node")
# target_link_libraries(wcc_module ${CMAKE_CURRENT_SOURCE_DIR}/lib/nw-v${NW_VERSION}.lib)
# target_link_libraries(wcc_module ${CMAKE_CURRENT_SOURCE_DIR}/lib/node-v${NW_VERSION}.lib)


add_library(wcsc_module
    SHARED
    ./wcsc.cpp
    ./config/wcsc.hh
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
    ${CMAKE_JS_SRC}
)
target_link_libraries(wcsc_module PRIVATE rt pthread)
set_target_properties(wcsc_module PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set_target_properties(wcsc_module PROPERTIES PREFIX "" SUFFIX ".node")
