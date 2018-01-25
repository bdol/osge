//
// Created by bdol on 12/26/17.
//

#include "Surface.h"


Surface::Surface() {}

Surface::~Surface() {
  if (window) {
      delete window;
  }
}

int Surface::init() {
  window = new sf::RenderWindow(sf::VideoMode(640, 480), "SFML works!");

  return 0;
}


int Surface::render() {
  sf::Event event;
  if (window->isOpen()) {
    while(window->pollEvent(event)) {
        if (event.type == sf::Event::EventType::Closed) {
            window->close();
        }
    }

    window->
        clear(sf::Color::Black);
    window->display();
  }
}

