cmake_minimum_required(VERSION 4.0)
project(COD LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_library(banking SHARED
        src/banking.cpp
        include/banking.h
)

target_include_directories(banking PUBLIC include)
set_target_properties(banking PROPERTIES OUTPUT_NAME "banking")

add_executable(test src/test.cpp)
target_link_libraries(test PRIVATE banking)

