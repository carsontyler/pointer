cmake_minimum_required(VERSION 3.8)
project(pointer)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp)
#set(SOURCE_FILES testOrder.cpp Order.cpp Order.h)
set(SOURCE_FILES testCStrings.cpp cStrings.cpp cStrings.h)
add_executable(pointer ${SOURCE_FILES})