cmake_minimum_required(VERSION 3.6)
project("R-type" VERSION 1.0)

option(BUILD_TESTS "Build tests" OFF)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)
include(deps)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


enable_testing()

add_subdirectory(Hunter)

if (BUILD_TESTS)
    add_subdirectory(test)
endif()
