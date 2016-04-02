cmake_minimum_required(VERSION 2.8)
project(jammin C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

find_package(Threads REQUIRED)

set(SYSTEM_LIBS ${CMAKE_THREAD_LIBS_INIT})

add_subdirectory(src)
