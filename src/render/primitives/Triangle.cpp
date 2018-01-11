//
// Created by bdol on 1/10/18.
//

#include "Triangle.h"
#include <iostream>

Triangle::Triangle() {
}

GLfloat* Triangle::vertexBufferData() {
    if (vertexBufferSize() == 0) {
        std::cerr << "Error: vertex data is of size 0. Exiting." << std::endl;
        exit(1);
    }

    return vertexData;
}

int Triangle::vertexBufferSize() {
    return sizeof(vertexData);
}
