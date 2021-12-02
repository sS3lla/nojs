cmake_minimum_required(VERSION 3.16.3)

project(nojs_interpreter VERSION 0.0.0 DESCRIPTION "A C++ library to interperet nojs")

add_library(${PROJECT_NAME} SHARED
    src/lexer/lexer.cpp
    src/lexer/token.cpp
    src/lexer/trans_nodes.cpp
    src/vm/vm.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)

include_directories(include)
link_directories(lib)

add_executable(nojs
    test/main.cpp
)

target_link_libraries(nojs nojs_interpreter)