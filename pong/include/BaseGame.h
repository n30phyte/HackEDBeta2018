//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_BASEGAME_H
#define HACKEDBETA_BASEGAME_H

#include <iostream>
#include "GameObject.h"
#include "InputManager.h"
#include "OutputManager.h"


class GameStateManager {
public:
    GameStateManager();

private:
    // Game properties
    uint width = 80;
    uint height = 80;
    uint scores[2] ;

    Ball ball = Ball();
    Paddle* players[2];

    void Reset();

    void CollisionCheck();
    void ScoreCheck();

};

class BaseGame {
public:
    BaseGame();
    void Start();
    void Loop();
    void Stop();
    bool is_running = true;
    void setInputManager(InputManager);

private:
    InputManager inputManager;
    OutputManager<BaseOutput> graphicsManager;

    GameStateManager gameState;
};

#endif //HACKEDBETA_BASEGAME_H
