cmake_minimum_required(VERSION 2.8)

set (BIN "isomorphic")

set (INC "Solution.h")

set (SRC "main.cpp"
        "Solution.cpp")

project (isomorphic)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_library(core ${SRC})
add_executable (${BIN} ${SRC} ${INC})

target_link_libraries(isomorphic core)

add_subdirectory(../third_party/googletest googletest)

add_executable(test unit_test/unit_test.cpp)
target_link_libraries(test gtest gtest_main core)

