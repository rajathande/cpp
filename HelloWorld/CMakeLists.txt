cmake_minimum_required(VERSION 3.16)
project(HelloWorld CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add code coverage flags
option(CODE_COVERAGE "Enable coverage reporting" ON)
if(CODE_COVERAGE)
    add_compile_options(-fprofile-arcs -ftest-coverage)
    add_link_options(-fprofile-arcs -ftest-coverage)
    add_compile_options(-O0) # No optimization
endif()

# Add the data structures library
add_library(data_structures
    src/singly_linked_list.cpp
    src/doubly_linked_list.cpp
    src/binary_tree.cpp
)
target_include_directories(data_structures PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Add main executable for demonstration
add_executable(data_structures_demo src/main.cpp)
target_link_libraries(data_structures_demo PRIVATE data_structures)

# --- Testing ---
enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(googletest)

add_executable(unit_tests test/main_test.cpp)
target_link_libraries(unit_tests PRIVATE data_structures GTest::gtest_main)
target_include_directories(unit_tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

include(GoogleTest)
gtest_add_tests(TARGET unit_tests)
