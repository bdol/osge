//
// Created by Brian Dolhansky on 12/22/17.
//

#include <iostream>
#include "engine/GameEngine.h"

#include <stdio.h>
#include <stdlib.h>
#include <GL/glew.h>
#include <glfw3.h>
#include <glm/glm.hpp>

using namespace glm;

int main(int argc, char** argv) {
    GameEngine engine = GameEngine();
    engine.start();
}
