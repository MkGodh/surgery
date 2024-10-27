cmake_minimum_required(VERSION 3.28)
project(surgery)

set(CMAKE_CXX_STANDARD 26)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

include_directories(${MY_INCLUDE_DIR})

add_subdirectory(src)


