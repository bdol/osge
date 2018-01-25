//
// Created by bdol on 12/26/17.
//

#ifndef OSGE_RENDERENGINE_H
#define OSGE_RENDERENGINE_H

#include <functional>
#include <SFML/Graphics.hpp>


class RenderEngine {
public:
  RenderEngine();
  ~RenderEngine();

  int init();
  int render();

  void registerEntity();
  void deregisterEntity();

  void registerWindowEventCallback(std::function<void(sf::Event)> callback);

private:
  sf::RenderWindow* window_;
  std::function<void(sf::Event)> eventCallback_;
};


#endif //OSGE_RENDERENGINE_H
