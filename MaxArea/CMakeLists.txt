cmake_minimum_required(VERSION 2.8)

set (BIN "maxArea")

set (INC "Solution.h")

set (SRC "main.cpp"
        "Solution.cpp")

project (maxArea)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_executable (${BIN} ${SRC} ${INC})


