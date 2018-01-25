//
// Created by bdol on 12/26/17.
//

#include "RenderEngine.h"

RenderEngine::RenderEngine() {}

RenderEngine::~RenderEngine() {
  if (window_) {
      delete window_;
  }
}

int RenderEngine::init() {
  window_ = new sf::RenderWindow(sf::VideoMode(640, 480), "SFML works!");

  return 0;
}

int RenderEngine::render() {
  sf::Event event;
  if (window_->isOpen()) {
    while(window_->pollEvent(event)) {
      if (event.type == sf::Event::EventType::Closed) {
        window_->close();
      }

      if (eventCallback_) {
        eventCallback_(event);
      }
    }

    window_->clear(sf::Color::Black);
    window_->display();
  }

  return 0;
}

void RenderEngine::registerWindowEventCallback(std::function<void(sf::Event)> callback) {
  eventCallback_ = callback;
}
