# Simple C++ CMake Project

This is a starter C++ project that demonstrates a clean, modern project structure using CMake for building and GoogleTest for unit testing.

## Features

- **CMake Build System**: Uses modern CMake practices for a cross-platform build experience.
- **Unit Testing**: Integrated with GoogleTest for easy and robust testing.
- **Structured Layout**: Separates source code, header files, and tests for better organization.

## Project Structure

The project follows a standard directory layout:

```
test-hello/
├── CMakeLists.txt
├── README.md
├── include/
│   └── functions.h
├── src/
│   ├── functions.cpp
│   └── main.cpp
└── test/
    └── main_test.cpp
```

## Prerequisites

- A C++17 compliant compiler (e.g., GCC, Clang, MSVC).
- CMake (version 3.16 or higher).

## Compilation and Execution Steps

To compile and run this project, follow these steps from the project's root directory (`/home/rajat/vector/test-hello`).

### 1. Configure the Project
First, create a build directory and run CMake to configure the project. This only needs to be done once, or whenever you change `CMakeLists.txt`.

```bash
cmake -B build
```

### 2. Build the Project
Compile the source code to create the executables.

```bash
cmake --build build
```

### 3. Run the Application
The main executable `hello` will be located in the `build` directory.

```bash
./build/hello
```

### 4. Run the Unit Tests
To run the tests, navigate into the build directory and use `ctest`. The `--verbose` flag provides more detailed output.

```bash
cd build
ctest --verbose
```