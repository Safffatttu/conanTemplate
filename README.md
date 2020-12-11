# Conan + CMake cpp template 

## Requirements 
Installed and in path:
- Conan 
- CMake 
- Ninja

To build project just run
```
mkdir -p build && cd build
conan install ..
cmake .. -GNinja
ninja
```