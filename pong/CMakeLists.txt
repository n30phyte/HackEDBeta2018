cmake_minimum_required(VERSION 3.12)
project(HackEDBeta)

set(CMAKE_CXX_STANDARD 17)
set(EXECUTABLE_NAME "ai_pong")

include_directories(include)

# Look for SFML CMake modules
list(APPEND CMAKE_MODULE_PATH "/usr/share/cmake/Modules")
list(APPEND CMAKE_MODULE_PATH "/usr/share/SFML/cmake/Modules")

# Executable names
add_executable(${EXECUTABLE_NAME} main.cpp KeyboardInput.cpp BaseGame.cpp InputManager.cpp AIInput.cpp include/AIInput.h OutputManager.cpp include/OutputManager.h BaseOutput.cpp include/BaseOutput.h GraphicsOutput.cpp include/GraphicsOutput.h HeadlessOutput.cpp include/HeadlessOutput.h)

# Find packages
find_package(Boost REQUIRED)
find_package(SFML 2 REQUIRED network audio graphics window system)

include_directories(${SFML_INCLUDE_DIR})

target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})