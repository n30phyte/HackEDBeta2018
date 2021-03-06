cmake_minimum_required(VERSION 3.12)
project(HackEDBeta)

include_directories(include)

set(CMAKE_CXX_FLAGS "-O0")

add_library(pong
        AIInput.cpp
        BaseGame.cpp
        GraphicsOutput.cpp
        HeadlessOutput.cpp
        KeyboardInput.cpp
        GameObject.cpp
        Menu.cpp
        WindowManager.cpp
        )

# Look for SFML CMake modules
list(APPEND CMAKE_MODULE_PATH "/usr/share/cmake/Modules")
list(APPEND CMAKE_MODULE_PATH "/usr/share/SFML/cmake/Modules")

# Find Boost
find_package(Boost REQUIRED)

# Find SFML
find_package(SFML 2.3 REQUIRED network audio graphics window system)

# Find protobuf
find_package(Protobuf REQUIRED)


include_directories(${Protobuf_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(${SFML_INCLUDE_DIR})

target_link_libraries(pong ${SFML_LIBRARIES} )

