cmake_minimum_required(VERSION 2.8)

set (BIN "sortArray")

set (INC "Solution.h")

set (SRC "SortArray.cpp"
        "Solution.cpp")

project (sortArray)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_library(core ${SRC})

add_executable (${BIN} ${SRC} ${INC})

target_link_libraries(sortArray core)

add_subdirectory(../third_party/googletest googletest)

add_executable(tests_sort_array unit_test/unit_test.cpp)
target_link_libraries(tests_sort_array gtest gtest_main core)