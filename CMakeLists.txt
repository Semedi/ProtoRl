cmake_minimum_required(VERSION 3.15)

# Fetch dependencies
# -----------------






# ----------------

# Project options
project(
  "ProtoRl"
  VERSION 0.0.1
  LANGUAGES CXX
)

set(ENGINE_LIB "Roguengine")

# Include settings and utils
include(cmake/Settings.cmake)
include(cmake/Utils.cmake)

# Initial message
message(STATUS "Started CMake for ${PROJECT_NAME} v${PROJECT_VERSION}...\n")

# Prevent building in the source directory
if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
  message(FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there.\n")
endif()

# Find all headers and implementation files
include(cmake/SetHeadersSources.cmake)


# Build executable with headers
add_executable(${PROJECT_NAME} ${exe_sources})

if(${BUILD_ENGINE})
  add_library(${ENGINE_LIB} SHARED ${engine_headers} ${engine_sources})
endif()

# Verbose messages:
verbose_message("Found the following header files:")
verbose_message(${headers})
verbose_message("Found the following source files:")
verbose_message(${exe_sources})

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

target_include_directories(
  ${PROJECT_NAME}
  PUBLIC 
    $<INSTALL_INTERFACE:include>    
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

if(${BUILD_ENGINE})
  target_include_directories(
    ${ENGINE_LIB}
    PUBLIC 
      $<INSTALL_INTERFACE:include>    
      $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/src
  )
endif()
