cmake_minimum_required(VERSION 2.8)
project(jammin C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

find_package(Threads REQUIRED)
set(SYSTEM_LIBS ${CMAKE_THREAD_LIBS_INIT})

add_library(template run.hpp template.cpp)

function(ADD_PROBLEM SRC)
    get_filename_component(BASE ${SRC} NAME_WE)
    add_library("l${BASE}" ${SRC})
    add_executable(${BASE} stdioMain.cpp)
    target_link_libraries(${BASE} "l${BASE}")
    add_executable("${BASE}f" fileMain.cpp)
    target_link_libraries("${BASE}f" "l${BASE}")
endfunction()

ADD_PROBLEM(a.cpp)
ADD_PROBLEM(b.cpp)
ADD_PROBLEM(c.cpp)
ADD_PROBLEM(d.cpp)

