//
// Created by n30phyte on 17/11/18.
//

#include "BaseGame.h"

void GameStateManager::scoreUp(Paddle *player) {
    if (player == player1) {
        score1++;
    } else if (player == player2) {
        score2++;
    }

    ball->Reset();
    player1->Reset();
    player2->Reset();
}

GameStateManager::GameStateManager() {

    quit = false;
    score1 = score2 = 0;
    up1 = 'w';
    down1 = 's';
    up2 = 'i';
    down2 = 'k';
    width = w, height = h;
    ball = new Ball(w / 2, h / 2);
    player1 = new Paddle(1, h / 2 - 3);
    player2 = new Paddle(w - 2, h / 2 - 3);
}

void BaseGame::Start() {
    BaseGame::Loop();

    running = true;
    // setup?!?!?
}

void BaseGame::setInputManager(InputManager<BaseInput, BaseInput> manager) {

    inputManager = manager;
}

void BaseGame::Stop() {
    running = false;
}