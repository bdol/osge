cmake_minimum_required(VERSION 3.5)

project(osge)

find_package(OpenGL REQUIRED)

add_subdirectory(external)

include_directories(
    external/glew-1.13.0/include/
    external/glfw-3.1.2/include/GLFW/
    external/glm-0.9.7.1/
    src/
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

add_executable(main src/main.cpp src/engine/GameEngine.cpp src/engine/GameEngine.h src/render/RenderEngine.cpp src/render/RenderEngine.h src/render/Surface.cpp src/render/Surface.h src/engine/timing/FrameTimer.cpp src/engine/timing/FrameTimer.h src/entities/units/BaseUnit.cpp src/entities/units/BaseUnit.h src/entities/Entity.cpp src/entities/Entity.h src/render/primitives/Primitive.cpp src/render/primitives/Primitive.h src/render/primitives/Triangle.cpp src/render/primitives/Triangle.h src/render/common/shader.cpp)
target_link_libraries(main
    ${ALL_LIBS}
)
