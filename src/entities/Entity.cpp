//
// Created by bdol on 12/26/17.
//

#include "Entity.h"

int Entity::idPool = 0;

Entity::Entity() {
    id = Entity::idPool++;
    depth = 0;
}

int Entity::getID() const {
    return id;
}

void Entity::setDepth(int depth) {
    this->depth = depth;
}

int Entity::getDepth() const {
    return depth;
}

void Entity::draw() const {

    drawChildren();
}

void Entity::drawChildren() const {

}
