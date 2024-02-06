cmake_minimum_required(VERSION 3.27)
project(rio)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV)

add_executable(rio main.cpp)

target_link_libraries(rio ${OpenCV_LIBS})
