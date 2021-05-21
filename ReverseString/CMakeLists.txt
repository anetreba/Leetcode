cmake_minimum_required(VERSION 2.8)

set (BIN "reverseString")

set (INC "Solution.h")

set (SRC "ReverseString.cpp"
        "Solution.cpp")

project (reverseString)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_executable (${BIN} ${SRC} ${INC})