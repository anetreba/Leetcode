cmake_minimum_required(VERSION 2.8)

set (BIN "findCommonCharacters")

set (INC "Solution.h")

set (SRC "FindCommonCharacters.cpp"
        "Solution.cpp")

project (findCommonCharacters)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_library(core ${SRC})
add_executable (${BIN} ${SRC} ${INC})

target_link_libraries(findCommonCharacters core)

add_subdirectory(../third_party/googletest googletest)

add_executable(tests_find_com_ch unit_test/unit_test.cpp)
target_link_libraries(tests_find_com_ch gtest gtest_main core)
