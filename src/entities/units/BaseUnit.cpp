//
// Created by bdol on 12/26/17.
//

#include "BaseUnit.h"

int BaseUnit::idPool = 0;

BaseUnit::BaseUnit() {
    id = BaseUnit::idPool++;
}

int BaseUnit::getDepthLevel() const {
    return depthLevel;
}

void BaseUnit::setDepthLevel(int depthLevel) {
    BaseUnit::depthLevel = depthLevel;
}

int BaseUnit::getID() {
    return this->id;
}