cmake_minimum_required(VERSION 2.8)

set (BIN "fibonacciNumber")

set (INC "Solution.h")

set (SRC "FibonacciNumber.cpp"
        "Solution.cpp")

project (fibonacciNumber)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_library(core ${SRC})
add_executable (${BIN} ${SRC} ${INC})

target_link_libraries(fibonacciNumber core)

add_subdirectory(../third_party/googletest googletest)

add_executable(tests_fib unit_test/unit_test.cpp)
target_link_libraries(tests_fib gtest gtest_main core)

