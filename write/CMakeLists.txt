cmake_minimum_required(VERSION 3.27)
project(write)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(write main.cpp)

target_link_libraries(write ${OpenCV_LIBS})