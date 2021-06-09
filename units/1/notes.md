# Unit 1

## The Compile and Link Process

### Overview of a Computer

* PC consists of a CPU, memory (RAM), disk drives, IO devices (keyboard, mouse, etc.)
* All devices are connected to the CPU by a bus that allows data to travel in and out of the CPU
* When a program is launched, data goes from disk to memory and then to CPU where its executed

### Memory

* Memory is addressed as a series of bytes (8 bits)
* Memory holds program instructions and data
  * Program instructions: Tell CPU how to execute program
  * Data: Information you will use to work with your program
* Memory is located at an address
  * High level programing languages (C++) abstracts the work of memory location

### Creating a C++ Program

* C++ programs have the extension ```.cpp```
* The code you write must follow the rules of the language: syntax

### Preprocessing

* Preprocessor will look for preprocessor directives
  * Starts with ```#```, most common is ```#includes```
    * Most ```#include``` files contain definitions that the compiler needs to see to compile the source code
* Compiler spits out an ```.obj``` file, containing machine code
  * Think of it as an intermediatiary file

### Linking

* Linkers job to put all files together so program can be run as an executable
* Languages come equipped with functionality, libraries that you can use to accomplish programming tasks
  * ```#includes <iostream>``` has definitions for functionality to input data from the keyboard and output data to the screen
  * Also the linker's job to bring in the code from the library and place it into program

### Executable

* Linker spits out ```.exe``` file
* Can be run by double clicking or typing its name at a command prompt

![Compile / Link Process](compile_link_process.png)

## Tools for C++

* IDE: Integrated Development Environment
  * Does all the work; Create a project, add files to it, build

[Visual Studio Community](https://www.visualstudio.com/products/visual-studio-community-vs)
