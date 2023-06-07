cmake_minimum_required(VERSION 3.0.0)
project(wx_complier VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(wcc
    src/wcc.cpp
    src/wcc/usage.cpp
    src/utils/file.cpp
    )
add_executable(wcsc
    src/wcsc.cpp
    )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
