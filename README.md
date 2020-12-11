# Conan + CMake cpp template 

## Requirements 
Installed and in path:
- Conan 
- CMake 
- Ninja

## Configuring your project

To configure project just run:
```
mkdir -p build && cd build
cmake .. -GNinja
ninja
```

To recompile your project just run `ninja` command.

## Adding h/c/cpp files
To add files to your project, open *src/CMakeLists.txt* and add another file to SOURCES variable. 2 source files are provided as example - main.cpp and second.cpp. Header files - *.h - don't need to be specified.
After adding/removing files from your project, you need to run commands from *Configuring your project* section.

## Conan configuration
To install and configure library, specify it in *conanfile.txt*. Few common libraries are already provided, to install them uncomment coresponding line.
After adding/removing *conanfile.txt*, you need to run commands from *Configuring your project* section.

## Bincrafters packages 
Some packages are downloaded from non-defualt conan repository. Those repositories need to be added using `conan remote add` command.
For example sdl2 can be found on bincrafters repo, to add this repository to conan run `conan remote add bincrafters "https://api.bintray.com/conan/bincrafters/public-conan"`.


## Package options
Some packages provide additional options. To check which options are provided for package run `conan inspect -a options` command, e.g. `conan inspect -a options sfml/2.5.0@bincrafters/stable`. To set per package options, open conanfile.txt and add them in the \[options\] section. Options for sfml are provided as an example. 