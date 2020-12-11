cmake_minimum_required(VERSION 3.13.0)
project(Template)

## To set custom project c++ flags use folowing command
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

## To set custom compiler paths use those two line
# set(CMAKE_C_COMPILER "/usr/local/opt/llvm/bin/clang")
# set(CMAKE_CXX_COMPILER "/usr/local/opt/llvm/bin/clang++")

# Specify cpp version
add_definitions("-std=c++17")

set(CMAKE_BUILD_TYPE Debug)

## Conan stuff
if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
   message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
   file(DOWNLOAD "https://github.com/conan-io/cmake-conan/raw/v0.15/conan.cmake"
                 "${CMAKE_BINARY_DIR}/conan.cmake" 
                 TLS_VERIFY ON)
endif()

include("${CMAKE_BINARY_DIR}/conan.cmake")

conan_cmake_run(CONANFILE conanfile.txt
                BASIC_SETUP BUILD missing)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(src)
target_link_libraries(main ${CONAN_LIBS})
