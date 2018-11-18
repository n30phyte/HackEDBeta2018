cmake_minimum_required(VERSION 3.12)
project(HackEDBeta)

set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_NAME "ai_pong")

add_subdirectory(pong)
include_directories(pong/include)

add_executable(${EXECUTABLE_NAME} main.cpp)

target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES} pong)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/res DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/ml DESTINATION ${CMAKE_CURRENT_BINARY_DIR})