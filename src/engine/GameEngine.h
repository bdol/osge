//
// Created by Brian Dolhansky on 12/22/17.
//

#ifndef OSGE_GAMEENGINE_H
#define OSGE_GAMEENGINE_H

#include <render/RenderEngine.h>
#include <engine/timing/FrameTimer.h>
#include <SFML/Graphics.hpp>


class GameEngine {
public:
  GameEngine();

  void start();
  void quit();

private:
  bool shouldQuit;
  RenderEngine renderEngine;
  FrameTimer frameTimer;

  void eventCallback(sf::Event eventType);

};


#endif //OSGE_GAMEENGINE_H
