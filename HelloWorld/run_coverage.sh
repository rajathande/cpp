#!/bin/bash

# Exit on any error
set -e

PROJECT_ROOT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"
BUILD_DIR="build"
COVERAGE_DIR="${BUILD_DIR}/coverage"

echo "--- Navigating to project root: ${PROJECT_ROOT_DIR} ---"
cd "${PROJECT_ROOT_DIR}"

echo "--- Cleaning up old build directory ---"
rm -rf "${BUILD_DIR}"

echo "--- Configuring project with CMake ---"
cmake -S "${PROJECT_ROOT_DIR}" -B "${BUILD_DIR}" -DCODE_COVERAGE=ON

echo "--- Building project ---"
cmake --build "${BUILD_DIR}"

echo "--- Running tests with coverage ---"
cd "${BUILD_DIR}"
./unit_tests

echo "--- Generating coverage report ---"
mkdir -p "${COVERAGE_DIR}"
gcovr -r .. \
      --html --html-details \
      -o "${COVERAGE_DIR}/coverage.html" \
      --exclude-throw-branches \
      --exclude-unreachable-branches \
      --exclude='.*googletest.*' \
      --exclude='.*test/.*'

echo "--- Coverage report generated ---"
echo "Opening coverage report in browser..."
explorer.exe $(wslpath -w "${COVERAGE_DIR}/coverage.html")
