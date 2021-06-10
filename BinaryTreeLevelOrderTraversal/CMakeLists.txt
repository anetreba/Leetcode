cmake_minimum_required(VERSION 2.8)

set (BIN "binaryTreeLevelOrderTraversal")

set (INC "Solution.h")

set (SRC "BinaryTreeLevelOrderTraversal.cpp"
        "Solution.cpp")

project (binaryTreeLevelOrderTraversal)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_library(core ${SRC})

add_executable (${BIN} ${SRC} ${INC})

target_link_libraries(binaryTreeLevelOrderTraversal core)

add_subdirectory(../third_party/googletest googletest)

add_executable(tests_binaryTreeLevelOrderTraversal unit_test/unit_test.cpp)
target_link_libraries(tests_binaryTreeLevelOrderTraversal gtest gtest_main core)
