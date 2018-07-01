cmake_minimum_required(VERSION 3.2)
project(application)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp)

add_subdirectory(app)
include_directories(include)
include_directories(app)

add_executable(application ${SOURCE_FILES})
target_link_libraries(application app)

install(TARGETS application DESTINATION bin)


