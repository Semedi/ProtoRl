cmake_minimum_required(VERSION 3.15)


project(
  "Prototype01"
  VERSION 0.0.1
  LANGUAGES CXX
)


message(STATUS "Started CMake for ${PROJECT_NAME} v${PROJECT_VERSION}...\n")

#
# Prevent building in the source directory
#

if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
  message(FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there.\n")
endif()

message(STATUS "Started CMake for ${PROJECT_NAME} v${PROJECT_VERSION}...\n")

# Find all headers and implementation files
include(cmake/SetHeadersSources.cmake)
