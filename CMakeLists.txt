cmake_minimum_required(VERSION 3.5)

project(osge)

include_directories(
    src/
    .
)

set(ALL_LIBS
    sfml-graphics
    sfml-window
    sfml-system
)

add_definitions(
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(main src/main.cpp src/engine/GameEngine.cpp src/engine/GameEngine.h src/render/RenderEngine.cpp src/render/RenderEngine.h src/render/Surface.cpp src/render/Surface.h src/engine/timing/FrameTimer.cpp src/engine/timing/FrameTimer.h src/entities/units/BaseUnit.cpp src/entities/units/BaseUnit.h src/entities/Entity.cpp src/entities/Entity.h src/render/primitives/Primitive.cpp src/render/primitives/Primitive.h src/render/primitives/Triangle.cpp src/render/primitives/Triangle.h)
target_link_libraries(main
    ${ALL_LIBS}
)
