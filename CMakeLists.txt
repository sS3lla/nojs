cmake_minimum_required(VERSION 3.16.3)

project(nojs_interpreter VERSION 0.0.0 DESCRIPTION "A C++ library to interperet nojs")

add_library(${PROJECT_NAME} SHARED
    src/interpreter.cpp
    src/lexer/lexer.cpp
    src/lexer/token.cpp
    src/lexer/trans_nodes.cpp
    src/vm/vm.cpp
    src/vm/opcodes.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)

# An executable to test the library

include_directories(include)

# Tell the linker to look in the lib/ directory
link_directories(lib)

# Define any sources
add_executable(nojs
    test/main.cpp
)

# Link
target_link_libraries(nojs nojs_interpreter)