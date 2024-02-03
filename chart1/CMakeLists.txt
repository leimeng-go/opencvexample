# Camke 最低版本要求
cmake_minimum_required(VERSION 3.27)
# 项目信息
project(chart)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV)

include_directories(${OpenCV_INCLUDE_DIRS})
# 指定生成目标
add_executable(chart main.cpp)

#库链接
target_link_libraries(chart ${OpenCV_LIBS})