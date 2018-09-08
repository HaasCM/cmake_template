cmake_minimum_required(VERSION 3.2)
project(application)

if(NOT DEFINED PROJECT_ROOT_DIR)
    set(PROJECT_ROOT_DIR ${PROJECT_SOURCE_DIR}/..)
endif(NOT DEFINED PROJECT_ROOT_DIR)

include(${PROJECT_ROOT_DIR}/cmake_modules/uninstall.cmake)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp)

add_subdirectory(app)
include_directories(include)
include_directories(app)

add_executable(application ${SOURCE_FILES})
target_link_libraries(application app)

install(TARGETS application DESTINATION {CMAKE_INSTALL_PREFIX}/bin)


