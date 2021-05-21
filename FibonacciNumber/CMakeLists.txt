cmake_minimum_required(VERSION 2.8)

set (BIN "fibonacciNumber")

set (INC "Solution.h")

set (SRC "FibonacciNumber.cpp"
        "Solution.cpp")

project (fibonacciNumber)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_executable (${BIN} ${SRC} ${INC})