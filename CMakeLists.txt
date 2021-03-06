cmake_minimum_required(VERSION 3.15)

# Project options
project(
  "ProtoRl"
  VERSION 0.0.1
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_LIB "Prl")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

configure_file(
    ${CMAKE_CURRENT_LIST_DIR}/cmake/protorlconfig.hpp.in
    include/protorlconfig.hpp
    @ONLY
)


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

add_library(${PROJECT_LIB} 
            EXCLUDE_FROM_ALL 
            ${engine_headers} 
            ${engine_sources}
)

# Verbose messages:
verbose_message("Found the following header files:")
verbose_message(${headers})
verbose_message("Found the following source files:")
verbose_message(${exe_sources})

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

# Include for executable
target_include_directories(
  ${PROJECT_NAME}
  PUBLIC 
    $<INSTALL_INTERFACE:include>    
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    ${PROJECT_BINARY_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Include for lib
target_include_directories(
  ${PROJECT_LIB}
  PUBLIC 
    $<INSTALL_INTERFACE:include>    
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    ${PROJECT_BINARY_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})
target_link_libraries(${PROJECT_LIB} ${CONAN_LIBS})


