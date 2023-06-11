cmake_minimum_required(VERSION 3.0.0)
project(wx_complier VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(wcc
    src/wcc.cpp
    src/include/wxml.h
    src/wcc/usage.cpp
    src/wxml/compiler.cpp
    src/wxml/dom_lib/token.cpp
    src/wxml/dom_lib/machine.cpp
    src/wxml/dom_lib/parser.cpp
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
add_test(
    resolve_test
    resolve_path
    )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
