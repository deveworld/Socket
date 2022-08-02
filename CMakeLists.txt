cmake_minimum_required(VERSION 3.0.0)
project(Socket VERSION 0.1.0)

find_package(PkgConfig REQUIRED)

include(CTest)
enable_testing()

file(GLOB INCLUDE include/*.cpp)

add_library(${PROJECT_NAME} Socket.cpp INCLUDE)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)