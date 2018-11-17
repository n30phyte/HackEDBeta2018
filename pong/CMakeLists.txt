cmake_minimum_required(VERSION 3.12)
project(HackEDBeta)

include_directories(include)

set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_NAME "ai_pong")
add_executable(${EXECUTABLE_NAME} main.cpp BaseGame.cpp include/BaseGame.h)

target_link_libraries(${EXECUTABLE_NAME} sfml-graphics sfml-window)