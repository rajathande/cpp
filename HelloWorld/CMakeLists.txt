cmake_minimum_required(VERSION 3.16)
project(HelloWorld CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add the library for our functions
add_library(my_functions src/functions.cpp)
target_include_directories(my_functions PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Add the main executable
add_executable(hello src/main.cpp)
target_link_libraries(hello PRIVATE my_functions)

# --- Testing ---
enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(unit_tests test/main_test.cpp)
target_link_libraries(unit_tests PRIVATE my_functions GTest::gtest_main)

include(GoogleTest)
gtest_add_tests(TARGET unit_tests)
