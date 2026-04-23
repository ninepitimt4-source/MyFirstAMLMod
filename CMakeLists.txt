cmake_minimum_required(VERSION 3.6)

project(MyFirstMod CXX)

set(CMAKE_CXX_STANDARD 17)
add_library(${PROJECT_NAME} SHARED main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME} log)
