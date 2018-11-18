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

    board = std::vector<std::vector<bool>>(80, std::vector<bool>(80, false));
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

    board[ball.getX()][ball.getY()] = true;
    board[ball.getX()][ball.getY() + 1] = true;

    for (int i = -4; i < 5; i++) {
        board[players[0]->getX()][players[0]->getY() + i] = true;
        board[players[0]->getX() + 1][players[0]->getY() + i] = true;
        board[players[1]->getX()][players[1]->getY() + i] = true;
        board[players[1]->getX() + 1][players[1]->getY() + i] = true;
    }

    ScoreCheck();
    CollisionCheck();
}
void GameStateManager::MovePaddle(int paddle, BaseInput::InputDirection direction) {
    if (direction == BaseInput::InputDirection::DOWN) {
        players[paddle]->setVelocityY(-2);
    } else if (direction == BaseInput::InputDirection::UP) {
        players[paddle]->setVelocityY(2);
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
std::vector<std::vector<bool>> GameStateManager::getBoard() {
    return board;
}

void BaseGame::Start() {
    is_running = true;
    gameState = GameStateManager();
}

void BaseGame::Stop() {
    is_running = false;
}

void BaseGame::Loop() {

    if(HumanInput != nullptr){
        gameState.MovePaddle(0, HumanInput->Poll());

    }
    if(AiInput != nullptr){
        gameState.MovePaddle(0, AiInput->Poll());

    }
    if(HumanInput != nullptr){
        gameState.MovePaddle(0, HumanInput2->Poll());

    }
    gameState.Step();

    auto _board = gameState.getBoard();

    if (SFMLOutput != nullptr) {
        SFMLOutput->Update(_board);
    }
    if (AIOutput != nullptr) {
        AIOutput->Update(_board);
    }


}
BaseGame::BaseGame() {

}
void BaseGame::SetMode(BaseGame::GameMode mode) {

    switch (mode) {
        case AIvsPlayer:
            AiInput = new AIInput();
            HumanInput = new KeyboardInput(0);
            SFMLOutput = new GraphicsOutput();
            AIOutput = new HeadlessOutput();
            break;
        case PlayervsPlayer:
            HumanInput = new KeyboardInput(0);
            HumanInput2 = new KeyboardInput(1);
            SFMLOutput = new GraphicsOutput();
            break;
    }

}
