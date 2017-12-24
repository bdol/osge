project(osge)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -framework GLUT -framework OpenGL")

add_executable(main src/main.cpp src/engine/GameEngine.cpp src/engine/GameEngine.h)