# /CMakeLists.txt

cmake_minimum_required(VERSION 3.20)
project(FileExplorer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

add_subdirectory(src)

target_include_directories(FileExplorer
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)