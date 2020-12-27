cmake_minimum_required(VERSION 3.15)

# Project options
project(
  "Test"
  VERSION 0.0.1
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

add_library(${PROJECT_NAME} 
            include/cross.hpp 
            src/cross.cpp
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

# Include for executable
target_include_directories(
  ${PROJECT_NAME}
  PUBLIC 
    $<INSTALL_INTERFACE:include>    
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

