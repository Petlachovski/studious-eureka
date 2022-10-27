cmake_minimum_required(VERSION 3.10)

project(ThirdTask VERSION 1.0)

add_executable(1 1.cxx)
add_executable(2 2.cxx)
add_executable(3 3.cxx)
add_executable(4 4.cxx)
add_executable(5 5.cxx)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
if(WIN32)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
else()
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
endif()
set(CMAKE_BUILD_TYPE debug)
