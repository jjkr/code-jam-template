cmake_minimum_required(VERSION 2.8)
project(jammin C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

find_package(Threads REQUIRED)
set(SYSTEM_LIBS ${CMAKE_THREAD_LIBS_INIT})

add_library(template run.hpp template.cpp)

add_library(la a.cpp)
add_library(lb b.cpp)
add_library(lc c.cpp)
add_library(ld d.cpp)

add_executable(a stdioMain.cpp)
target_link_libraries(a la)
add_executable(af fileMain.cpp)
target_link_libraries(af la)
