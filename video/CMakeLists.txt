cmake_minimum_required(VERSION 3.27)
project(video)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(video main.cpp)

target_link_libraries(video ${OpenCV_LIBS})
