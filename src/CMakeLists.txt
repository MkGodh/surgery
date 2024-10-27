cmake_minimum_required(VERSION 3.28)


add_executable(surgery main.cpp)
target_include_directories(surgery PUBLIC ${MY_INCLUDE_DIR})