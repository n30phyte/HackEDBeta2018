//
// Created by n30phyte on 17/11/18.
//

#include "BaseGame.h"

void GameStateManager::ScoreCheck() {
    // Check ball location
    // If ball is < 8, Player1++
    // else player2++
    Reset();
}

GameStateManager::GameStateManager() {

    scores[0] = 0;
    scores[1] = 0;

    ball = Ball(2, 1);
    players[0] = Paddle(8);
    players[1] = Paddle(40-8);

}
void GameStateManager::Reset() {
    ball.Reset();
    players[0].Reset();
    players[1].Reset();

}

void BaseGame::Start() {
    is_running = true;

    gameState = GameStateManager();
}

void BaseGame::setInputManager(InputManager<BaseInput, BaseInput> manager) {

    inputManager = manager;
}

void BaseGame::Stop() {
    is_running = false;
}
void BaseGame::Loop() {
    gameState.Step();
}
