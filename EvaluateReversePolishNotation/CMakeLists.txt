cmake_minimum_required(VERSION 2.8)

set (BIN "evaluateReversePolishNotation")

set (INC "Solution.h")

set (SRC "EvaluateReversePolishNotation.cpp"
        "Solution.cpp")

project (evaluateReversePolishNotation)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_library(core ${SRC})

add_executable (${BIN} ${SRC} ${INC})

target_link_libraries(evaluateReversePolishNotation core)

add_subdirectory(../third_party/googletest googletest)

add_executable(tests_reverse_polish_notation unit_test/unit_test.cpp)
target_link_libraries(tests_reverse_polish_notation gtest gtest_main core)