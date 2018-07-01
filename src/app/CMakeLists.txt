cmake_minimum_required(VERSION 3.2)
project(app C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(SOURCE_FILES app.cpp)
set(HEADER_FILES app.hpp)

add_library(appStatic STATIC ${SOURCE_FILES} ${HEADER_FILES})
add_library(app SHARED ${SOURCE_FILES} ${HEADER_FILES})

set_target_properties(appStatic PROPERTIES OUTPUT_NAME app)

install(TARGETS app DESTINATION lib)
install(FILES ${HEADER_FILES} DESTINATION include/app)
