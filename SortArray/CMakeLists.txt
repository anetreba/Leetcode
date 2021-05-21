cmake_minimum_required(VERSION 2.8)

set (BIN "sortArray")

set (INC "Solution.h")

set (SRC "SortArray.cpp"
        "Solution.cpp")

project (sortArray)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_executable (${BIN} ${SRC} ${INC})