cmake_minimum_required(VERSION 3.1.4)

project(Ask4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

add_executable(Ask1.exe Ask1.cpp)
add_executable(Ask2.exe Ask2.cpp)
add_executable(Ask3.exe Ask3.cpp)

add_subdirectory(Ask4)

add_executable(Ask4.exe Ask4.outside.cpp)

target_include_directories(Ask4.exe PUBLIC Ask4)

target_link_directories(Ask4.exe PUBLIC Ask4)

target_link_libraries(Ask4.exe Ask4Lib)