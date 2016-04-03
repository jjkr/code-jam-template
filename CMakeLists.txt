cmake_minimum_required(VERSION 2.8)
project(jammin C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

find_package(Threads REQUIRED)
set(SYSTEM_LIBS ${CMAKE_THREAD_LIBS_INIT})

add_library(template run.hpp template.cpp)
add_library(stdioMain OBJECT stdioMain.cpp)
add_library(fileMain OBJECT fileMain.cpp)

function(ADD_PROBLEM SRC)
    get_filename_component(BASE ${SRC} NAME_WE)
    add_library("${BASE}obj" OBJECT ${SRC})
    add_executable(${BASE} $<TARGET_OBJECTS:${BASE}obj> $<TARGET_OBJECTS:stdioMain>)
    add_executable("${BASE}f" $<TARGET_OBJECTS:${BASE}obj> $<TARGET_OBJECTS:fileMain>)
endfunction()

ADD_PROBLEM(a.cpp)
ADD_PROBLEM(b.cpp)
ADD_PROBLEM(c.cpp)
ADD_PROBLEM(d.cpp)

