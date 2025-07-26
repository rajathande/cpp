# CMake generated Testfile for 
# Source directory: /home/rajat/vector/HelloWorld
# Build directory: /home/rajat/vector/HelloWorld/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(AddFunctionTest.BasicAddition "/home/rajat/vector/HelloWorld/build/unit_tests" "--gtest_filter=AddFunctionTest.BasicAddition")
set_tests_properties(AddFunctionTest.BasicAddition PROPERTIES  SKIP_REGULAR_EXPRESSION "\\[  SKIPPED \\]" _BACKTRACE_TRIPLES "/usr/share/cmake-3.28/Modules/GoogleTest.cmake;402;add_test;/home/rajat/vector/HelloWorld/CMakeLists.txt;30;gtest_add_tests;/home/rajat/vector/HelloWorld/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
