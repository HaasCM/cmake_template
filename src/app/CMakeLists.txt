cmake_minimum_required(VERSION 3.2)
project(app C CXX)

if(NOT DEFINED PROJECT_ROOT_DIR)
    set(PROJECT_ROOT_DIR ${PROJECT_SOURCE_DIR}/../..)
endif(NOT DEFINED PROJECT_ROOT_DIR)

include(${PROJECT_ROOT_DIR}/cmake_modules/uninstall.cmake)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(SOURCE_FILES app.cpp)
set(HEADER_FILES app.hpp)

add_library(appStatic STATIC ${SOURCE_FILES} ${HEADER_FILES})
add_library(app SHARED ${SOURCE_FILES} ${HEADER_FILES})

set_target_properties(appStatic PROPERTIES OUTPUT_NAME app)

install(TARGETS app DESTINATION {CMAKE_INSTALL_PREFIX}/lib)
install(FILES ${HEADER_FILES} DESTINATION {CMAKE_INSTALL_PREFIX}/include/app)
