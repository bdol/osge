cmake_minimum_required(VERSION 3.9)

project(osge)

find_package(OpenGL REQUIRED)

add_subdirectory(external)

include_directories(
    external/glfw-3.1.2/include/GLFW/
    external/glew-1.13.0/include/
    .
)

set(ALL_LIBS
    ${OPENGL_LIBRARY}
    glfw
    GLEW_1130
)

add_definitions(
        -DTW_STATIC
        -DTW_NO_LIB_PRAGMA
        -DTW_NO_DIRECT3D
        -DGLEW_STATIC
        -D_CRT_SECURE_NO_WARNINGS
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(main src/main.cpp src/engine/GameEngine.cpp src/engine/GameEngine.h)
target_link_libraries(main
    ${ALL_LIBS}
)
