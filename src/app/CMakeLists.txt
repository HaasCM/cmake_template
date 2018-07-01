cmake_minimum_required(VERSION 3.2)
project(app C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(SOURCE_FILES app.cpp)
set(HEADER_FILES app.hpp)

add_library(app SHARED STATIC ${SOURCE_FILES} ${HEADER_FILES})

install(TARGETS app DESTINATION lib)
install(FILES ${HEADER_FILES} DESTINATION include/app)
