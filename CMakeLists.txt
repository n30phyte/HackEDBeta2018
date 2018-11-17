cmake_minimum_required(VERSION 3.12)
project(HackEDBeta)

set(CMAKE_MODULE_PATH "/usr/share/cmake/Modules")

find_package(Boost REQUIRED)
find_package(SFML COMPONENTS window graphics REQUIRED)

add_subdirectory(pong)