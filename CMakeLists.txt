cmake_minimum_required(VERSION 3.15)

# Project options
project(
  "Prototype01"
  VERSION 0.0.1
  LANGUAGES CXX
)

# Generate compile_commands.json for clang based tools
include(cmake/Settings.cmake)

# Initial message
message(STATUS "Started CMake for ${PROJECT_NAME} v${PROJECT_VERSION}...\n")

# Prevent building in the source directory
if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
  message(FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there.\n")
endif()

# Find all headers and implementation files
include(cmake/SetHeadersSources.cmake)
