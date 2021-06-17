cmake_minimum_required(VERSION 2.8)

set (BIN "validParentheses")

set (INC "Solution.h")

set (SRC "ValidParentheses.cpp"
        "Solution.cpp")

project (validParentheses)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_library(core ${SRC})

add_executable (${BIN} ${SRC} ${INC})

target_link_libraries(validParentheses core)

add_subdirectory(../third_party/googletest googletest)

add_executable(tests_valid_parent unit_test/unit_test.cpp)
target_link_libraries(tests_valid_parent gtest gtest_main core)
