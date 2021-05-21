cmake_minimum_required(VERSION 2.8)

set (BIN "findCommonCharacters")

set (INC "Solution.h")

set (SRC "FindCommonCharacters.cpp"
        "Solution.cpp")

project (findCommonCharacters)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_executable (${BIN} ${SRC} ${INC})