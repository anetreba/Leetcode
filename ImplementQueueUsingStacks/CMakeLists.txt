cmake_minimum_required(VERSION 2.8)

set (BIN "implementQueueUsingStacks")

set (INC "MyQueue.h")

set (SRC "ImplementQueueUsingStacks .cpp"
        "MyQueue.cpp")

project (implementQueueUsingStacks)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_library(core ${SRC})
add_executable (${BIN} ${SRC} ${INC})

target_link_libraries(implementQueueUsingStacks core)

add_subdirectory(../third_party/googletest googletest)

add_executable(tests_my_queue unit_test/unit_test.cpp)
target_link_libraries(tests_my_queue gtest gtest_main core)