cmake_minimum_required(VERSION 2.8)

set (BIN "binaryTreeLevelOrderTraversal")

set (INC "Solution.h")

set (SRC "BinaryTreeLevelOrderTraversal.cpp"
        "Solution.cpp")

project (binaryTreeLevelOrderTraversal)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_executable (${BIN} ${SRC} ${INC})