//
// Created by n30phyte on 17/11/18.
//

#include <cstdlib>
#include <iostream>
#include "BaseGame.h"
#include <ctime>

//int player1score = 0;
//int player2score = 0;

void cBall::Reset() {
    x = oriX;
    y = oriY;
void Ball::Reset() {
    x = oriX;
    y = oriY;
    direction = STOP;
}

void cBall::changeDirection(eDirec d) {
    // takes in former direction
    direction = d;
}

void cBall::randomDirection() {
    // generates random numbers from 1 to 6,
    // numbers corresponding to possible directions
    direction = (eDirec) ((rand() % 6) + 1);
}

int cBall::getX() {
    return x;
}

int cBall::getY() {
    return y;
}

void cBall::move() {
eDirec Ball::getDirection() { return direction; }

void Ball::move() {
    switch (direction) {
        case STOP:
            break;
        case LEFT:
            // moving left: decrease x coord
            x--;
            break;
        case UPLEFT:
            x--;
            y++;
            break;
        case UPRIGHT:
            x++;
            y++;
            break;
        case RIGHT:
            x++;
            break;
        case DOWNRIGHT:
            x++;
            y--;
            break;
        case DOWNLEFT:
            y--;
            x--;
            break;
        default:
            break;
    }
}

//

void cPaddle::Reset() {x = oriX; y = oriY;}
int cPaddle::getX() { return x; }
int cPaddle::getY() { return y; }

void cPaddle::goUp() { y++; }
void cPaddle::goDown() { y--; }

//

void cGameManager::scoreUp(cPaddle * player)
{
    if (player == player1){
        score1++;
    }
    else if (player == player2) {
        score2++;
    }

    ball ->Reset();
    player1->Reset();
    player2->Reset();
}

//

void BaseGame::Loop() {
    cGameManager c(40,20);
    c.Draw();
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

bool BaseGame::Stopped() {
    // return true if game has stopped
bool BaseGame::isStopped() {
    return not running;
}