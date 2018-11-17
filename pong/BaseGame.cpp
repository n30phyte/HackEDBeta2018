//
// Created by n30phyte on 17/11/18.
//

#include <iostream>
#include "BaseGame.h"
#include <ctime>
using namespace std;

//int player1score = 0;
//int player2score = 0;

void cBall::Reset() {
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



//

void BaseGame::Loop() {
    cBall c(0,0);
    cout << c << endl;
    c.randomDirection();
    cout << c << endl;
    c.move();
    cout << c << endl;

    cPaddle p1(0,0);
    cPaddle p2(10,0);
    cout << p1 << endl;
    cout << p2 << endl;
    p1.goUp();
    p2.goDown();
    cout << p1 << endl;
    cout << p2 << endl;
}

void BaseGame::Start() {
    BaseGame::Loop();
}

void BaseGame::Stop() {
    // stop the game
}

bool BaseGame::Stopped() {
    // return true if game has stopped
}