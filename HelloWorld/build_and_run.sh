#!/bin/bash

set -e

PROJECT_ROOT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"
BUILD_DIR="build"

echo "--- Navigating to project root: ${PROJECT_ROOT_DIR} ---"
cd "${PROJECT_ROOT_DIR}"

echo "--- Cleaning up old build directory ---"
rm -rf "${BUILD_DIR}"

echo "--- Configuring project with CMake ---"
cmake -B "${BUILD_DIR}"

echo "--- Building project ---"
cmake --build "${BUILD_DIR}"

echo "--- Running application ---"
"${PROJECT_ROOT_DIR}/${BUILD_DIR}/hello"

echo "--- Running unit tests ---"
cd "${BUILD_DIR}"
ctest --verbose