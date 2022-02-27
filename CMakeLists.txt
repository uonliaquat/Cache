cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_definitions(-std=c++11)
set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

set(CMAKE_BUILD_TYPE Debug)

project(cache)

#Bring the headers
include_directories(include) 
 
add_executable(out 
    main.cpp 
    src/cache.cpp
    include/cache.h)
