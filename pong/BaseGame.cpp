//
// Created by n30phyte on 17/11/18.
//

#include <BaseGame.h>

void GameStateManager::ScoreCheck() {
    // Check ball location
    // If ball is < 8, Player1++
    // else player2++
    Reset();
}

GameStateManager::GameStateManager() {

    scores[0] = 0;
    scores[1] = 0;

    ball = Ball();
    players[0] = new Paddle(8);
    players[1] = new Paddle(40 - 8);

}

void GameStateManager::Reset() {
    ball.Reset();
    players[0]->Reset();
    players[1]->Reset();

}

void GameStateManager::Step() {

}

void BaseGame::Start() {
    is_running = true;

    gameState = GameStateManager();
}

void BaseGame::Stop() {
    is_running = false;
}

void BaseGame::Loop() {
    inputManager->GetInput1();
    inputManager->GetInput2();
    gameState.Step();
}
BaseGame::BaseGame() {

}
void BaseGame::SetMode(BaseGame::GameMode mode) {

    BaseInput *input0 = nullptr;
    BaseInput *input1 = nullptr;

    switch (mode) {
        case AIvsAI:
            input0 = new AIInput();
            input1 = new AIInput();
            break;
        case AIvsPlayer:
            input0 = new AIInput();
            input1 = new KeyboardInput(0);
            break;
        case PlayervsPlayer:
            input0 = new KeyboardInput(0);
            input1 = new KeyboardInput(1);
            break;
    }

    inputManager = new InputManager(input0, input1);
}
