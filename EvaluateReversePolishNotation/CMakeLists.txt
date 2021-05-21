cmake_minimum_required(VERSION 2.8)

set (BIN "evaluateReversePolishNotation")

set (INC "Solution.h")

set (SRC "EvaluateReversePolishNotation.cpp"
        "Solution.cpp")

project (evaluateReversePolishNotation)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_executable (${BIN} ${SRC} ${INC})