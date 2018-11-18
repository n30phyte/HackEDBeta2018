//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_BASEGAME_H
#define HACKEDBETA_BASEGAME_H

#include <iostream>
#include <vector>

#include "GameObject.h"

#include "BaseInput.h"
#include "KeyboardInput.h"
#include "AIInput.h"

#include "BaseOutput.h"
#include "HeadlessOutput.h"
#include "GraphicsOutput.h"

class GameStateManager {
public:
    GameStateManager();

    void Step();

    void MovePaddle(int, BaseInput::InputDirection);

    std::vector<int> GetPaddleLocation(int);
    std::vector<int> GetBallLocation();
private:
    // Game properties
    const static uint width = 80;
    const static uint height = 80;
    uint scores[2];

    Ball ball = Ball();
    Paddle *players[2];

    void Reset();

    void CollisionCheck();
    void ScoreCheck();

};

class BaseGame {

public:
    enum GameMode {
        AIvsPlayer,
        PlayervsPlayer,
    };

    BaseGame();
    void Start();
    void Loop();
    void Stop();
    bool is_running = true;

    void SetMode(GameMode);

private:
    GraphicsOutput  * SFMLOutput;
    HeadlessOutput * AIOutput;

    KeyboardInput* HumanInput;
    AIInput * AiInput;

    KeyboardInput* HumanInput2;


    GameStateManager gameState;
};

#endif //HACKEDBETA_BASEGAME_H
