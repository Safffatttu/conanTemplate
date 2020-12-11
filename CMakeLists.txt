cmake_minimum_required(VERSION 3.13.0)
project(Template)

## To set custom project c++ flags use folowing command
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

## To set custom compiler paths use those two line
# set(CMAKE_C_COMPILER "/usr/local/opt/llvm/bin/clang")
# set(CMAKE_CXX_COMPILER "/usr/local/opt/llvm/bin/clang++")

# Specify cpp version
add_definitions("-std=c++17")

## Conan stuff
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(src)
target_link_libraries(main ${CONAN_LIBS})
