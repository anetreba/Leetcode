cmake_minimum_required(VERSION 2.8)

set (BIN "implementQueueUsingStacks")

set (INC "MyQueue.h")

set (SRC "ImplementQueueUsingStacks .cpp"
        "MyQueue.cpp")

project (implementQueueUsingStacks)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_executable (${BIN} ${SRC} ${INC})