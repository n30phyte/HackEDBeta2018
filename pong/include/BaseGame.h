//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_BASEGAME_H
#define HACKEDBETA_BASEGAME_H

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "GameObjects.h"
#include "InputManager.h"
#include "OutputManager.h"

enum Direction { STOP = 0, LEFT = 1, UPLEFT = 2, UPRIGHT = 3, RIGHT = 4, DOWNRIGHT = 5, DOWNLEFT = 6 };

class GameStateManager {
private:
    int width, height;
    int score1, score2;
    char up1, down1, up2, down2;
    bool quit;
    Ball *ball;
    Paddle *player1;
    Paddle *player2;

public:
    GameStateManager();
    void scoreUp(Paddle *player);
};

class BaseGame {
public:
    void Start();
    void Loop();
    void Stop();
    bool running;
    void setInputManager(InputManager<BaseInput, BaseInput>);

private:
    InputManager<BaseInput, BaseInput> inputManager;
    OutputManager<BaseOutput> graphicsManager;

    GameStateManager gameState;
};

#endif //HACKEDBETA_BASEGAME_H
