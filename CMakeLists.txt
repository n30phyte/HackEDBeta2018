cmake_minimum_required(VERSION 3.12)
project(HackEDBeta)

set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_NAME "ai_pong")

add_subdirectory(pong)
include_directories(pong/include)

add_executable(${EXECUTABLE_NAME} main.cpp)

find_package(PkgConfig)

pkg_check_modules(PC_ZeroMQ QUIET zmq)

find_path(ZeroMQ_INCLUDE_DIR
        NAMES zmq.hpp
        PATHS ${PC_ZeroMQ_INCLUDE_DIRS}
        )

find_library(ZeroMQ_LIBRARY
        NAMES zmq
        PATHS ${PC_ZeroMQ_LIBRARY_DIRS}
        )

target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES} ${ZeroMQ_LIBRARY} pong)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/res DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/ml DESTINATION ${CMAKE_CURRENT_BINARY_DIR})