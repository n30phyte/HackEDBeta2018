//
// Created by n30phyte on 17/11/18.
//

#include <BaseGame.h>

void GameStateManager::ScoreCheck() {
    // Check ball location
    // If ball is < 8, Player1++
    // else player2++
    if (ball.getX() == 0) {
        scores[0]++;
        Reset();
    }
    if (ball.getX() == 79) {
        scores[1]++;
        Reset();
    }

}

GameStateManager::GameStateManager() {

    scores[0] = 0;
    scores[1] = 0;

    ball = Ball();
    players[0] = new Paddle(8);
    players[1] = new Paddle(80 - 8);
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
}

void GameStateManager::Step() {
    ball.step();
    players[0]->step();
    players[1]->step();

    CollisionCheck();
    ScoreCheck();
}
void GameStateManager::MovePaddle(int paddle, BaseInput::InputDirection direction) {
    if (direction == BaseInput::InputDirection::DOWN) {
        // std::cout << "Moving paddle down" << std::endl;
        players[paddle]->setVelocityY(2);
    } else if (direction == BaseInput::InputDirection::UP) {
        // std::cout << "Moving paddle up" << std::endl;
        players[paddle]->setVelocityY(-2);
    } else if (direction == BaseInput::InputDirection::NONE) {
        players[paddle]->setVelocityY(0);
    }

}
void GameStateManager::CollisionCheck() {
    // Check if hit side walls
    if (ball.getY() >= 78 or ball.getY() <= 1) {
        ball.setY(ball.getY());
        ball.setVelocityY(-ball.getVelocityY());
    }

    // Check if hit paddle0
    if (ball.getX() == 9 and (ball.getY() < players[0]->getY() + 4 and ball.getY() > players[0]->getY() - 3)) {
        ball.setVelocityX(-ball.getVelocityX());
    }
    // Check if hit paddle1
    if (ball.getX() == 71 and (ball.getY() < players[1]->getY() + 4 and ball.getY() > players[1]->getY() - 3)) {
        ball.setVelocityX(-ball.getVelocityX());
    }

}

void BaseGame::Start() {
    is_running = true;
    gameState = GameStateManager();
}

void BaseGame::Loop() {

    if (HumanInput != nullptr) {
        gameState.MovePaddle(0, HumanInput->Poll());

    }
    if (HumanInput2 != nullptr) {
        gameState.MovePaddle(1, HumanInput2->Poll());

    }
    if (AiInput != nullptr) {
        gameState.MovePaddle(1, AiInput->Poll());
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
        case PlayervsPlayer:
            AiInput = nullptr;
            HumanInput = new KeyboardInput(BaseInput::PlayerSide::LEFT);
            HumanInput2 = new KeyboardInput(BaseInput::PlayerSide::RIGHT);
            SFMLOutput = new GraphicsOutput();
            AIOutput = nullptr;
            break;
        case AIvsPlayer:
            AiInput = new AIInput();
            HumanInput = new KeyboardInput(BaseInput::PlayerSide::LEFT);
            HumanInput2 = nullptr;
            SFMLOutput = new GraphicsOutput();
            AIOutput = new HeadlessOutput();
            break;
    }

}
