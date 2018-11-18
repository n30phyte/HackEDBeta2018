//
// Created by n30phyte on 17/11/18.
//

#include <BaseGame.h>

void GameStateManager::ScoreCheck() {
    // Check ball location
    // If ball is < 8, Player1++
    // else player2++
    if (ball.getX() < 8) {
        scores[0]++;
    }
    if (ball.getX() > 72) {
        scores[1]++;
    }
    Reset();
}

GameStateManager::GameStateManager() {

    scores[0] = 0;
    scores[1] = 0;

    ball = Ball();
    players[0] = new Paddle(8);
    players[1] = new Paddle(40 - 8);
}

std::vector<int> GameStateManager::GetBallLocation() {
    std::vector<int> output;
    output.emplace_back(ball.getX());
    output.emplace_back(ball.getY());
    return output;
}

std::vector<int> GameStateManager::GetPaddleLocation(int playerID) {
    std::vector<int> output;
    output.emplace_back(players[playerID]->getX());
    output.emplace_back(players[playerID]->getY());
    return output;
}

void GameStateManager::Reset() {
    ball.Reset();
    players[0]->Reset();
    players[1]->Reset();

}

void GameStateManager::Step() {
    ball.step();
    players[0]->step();
    players[1]->step();

    ScoreCheck();
    CollisionCheck();
}
void GameStateManager::MovePaddle(int paddle, BaseInput::InputDirection direction) {
    if (direction == BaseInput::InputDirection::DOWN) {
        players[paddle]->setVelocityY(-2);
    } else if (direction == BaseInput::InputDirection::UP) {
        players[paddle]->setVelocityY(2);
    } else if (direction == BaseInput::InputDirection::NONE){
        players[paddle]->setVelocityY(0);
    }

}
void GameStateManager::CollisionCheck() {
    if ((ball.getY() > players[0]->getX() - 4) && (ball.getY() > players[0]->getY() + 4) && (ball.getX() == 10)) {
        ball.setVelocityX(-ball.getVelocityX());
    }
    if ((ball.getY() > players[0]->getX() - 4) && (ball.getY() > players[0]->getY() + 4) && (ball.getX() == 70)) {
        ball.setVelocityX(-ball.getVelocityX());
    }
    if (ball.getY() < 0 || ball.getY() > 80) {
        ball.setVelocityY(-ball.getVelocityY());
    }
}

void BaseGame::Start() {
    is_running = true;
    gameState = GameStateManager();
}

void BaseGame::Stop() {
    is_running = false;
}

void BaseGame::Loop() {

    if (HumanInput != nullptr) {
        gameState.MovePaddle(0, HumanInput->Poll());

    }
    if (AiInput != nullptr) {
        gameState.MovePaddle(0, AiInput->Poll());

    }
    if (HumanInput != nullptr) {
        gameState.MovePaddle(0, HumanInput2->Poll());

    }
    gameState.Step();

    if (SFMLOutput != nullptr) {
        SFMLOutput->Update(gameState.GetBallLocation(), gameState.GetPaddleLocation(0), gameState.GetPaddleLocation(1));
    }
    if (AIOutput != nullptr) {
        AIOutput->Update(gameState.GetBallLocation(), gameState.GetPaddleLocation(0), gameState.GetPaddleLocation(1));
    }

}
BaseGame::BaseGame() {

}
void BaseGame::SetMode(BaseGame::GameMode mode) {

    switch (mode) {
        case AIvsPlayer:
            AiInput = new AIInput();
            HumanInput = new KeyboardInput(BaseInput::PlayerSide::LEFT);
            HumanInput2 = nullptr;
            SFMLOutput = new GraphicsOutput();
            AIOutput = new HeadlessOutput();
            break;
        case PlayervsPlayer:
            AiInput = nullptr;
            HumanInput = new KeyboardInput(BaseInput::PlayerSide::LEFT);
            HumanInput2 = new KeyboardInput(BaseInput::PlayerSide::RIGHT);
            SFMLOutput = new GraphicsOutput();
            AIOutput = nullptr;
            break;
    }

}
