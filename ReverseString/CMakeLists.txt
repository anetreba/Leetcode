cmake_minimum_required(VERSION 2.8)

set (BIN "reverseString")

set (INC "Solution.h")

set (SRC "ReverseString.cpp"
        "Solution.cpp")

project (reverseString)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_library(core ${SRC})

add_executable (${BIN} ${SRC} ${INC})

target_link_libraries(reverseString core)

add_subdirectory(../third_party/googletest googletest)

add_executable(tests_reverse_string unit_test/unit_test.cpp)
target_link_libraries(tests_reverse_string gtest gtest_main core)