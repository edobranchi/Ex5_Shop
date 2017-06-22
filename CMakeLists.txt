cmake_minimum_required(VERSION 3.6)
project(Ex5_Shop)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Customer.h Order.h Item.h)
add_executable(Ex5_Shop ${SOURCE_FILES})