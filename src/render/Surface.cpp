//
// Created by bdol on 12/26/17.
//

#include "Surface.h"

#include <iostream>



Surface::Surface() {}

Surface::~Surface() {
    if (window) {
        delete window;
    }
}

int Surface::init() {
    window = new sf::RenderWindow(sf::VideoMode(200, 200), "SFML works!");

    return 0;
}


int Surface::render() {
    if (window->isOpen()) {
        window->clear(sf::Color::Blue);
        window->display();
    }
}

