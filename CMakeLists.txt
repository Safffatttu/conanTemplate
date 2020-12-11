cmake_minimum_required(VERSION 2.8.12)
project(Template)

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Ofast -flto -march=native")
# set(CMAKE_C_COMPILER "/usr/local/opt/llvm/bin/clang")
# set(CMAKE_CXX_COMPILER "/usr/local/opt/llvm/bin/clang++")

add_definitions("-std=c++20")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)

add_subdirectory(src)

conan_basic_setup()
