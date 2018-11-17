//
// Created by n30phyte on 17/11/18.
//

#include "BaseGame.h"

int player1score = 0;
int player2score = 0;

void Ball::Reset() {
    x = originalX;
    y = originalY;
    direction = STOP;
}

void Ball::changeDirection(eDirec d) {
    // takes in former direction
    direction = d;
}

void Ball::randomDirection() {
    // generates random numbers from 1 to 6,
    // numbers corresponding to possible directions
    direction = (eDirec) ((rand() % 6) + 1);
}

int Ball::getX() {
    return x;
}

int Ball::getY() {
    return y;
}

eDirec getDirection() { return direction; }

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

void BaseGame::Loop() {

}

void BaseGame::Start() {

}

void BaseGame::Stop() {
    // stop the game
}

bool BaseGame::Stopped() {
    // if it
}