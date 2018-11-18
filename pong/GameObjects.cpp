//
// Created by n30phyte on 17/11/18.
//

#include "GameObjects.h"

void Ball::Reset() {
    x = oriX;
    y = oriY;
    direction = STOP;
}

void Ball::changeDirection(Direction d) {
    // takes in former direction
    direction = d;
}

void Ball::randomDirection() {
    // generates random numbers from 1 to 6,
    // numbers corresponding to possible directions
    direction = (Direction) ((rand() % 6) + 1);
}

int Ball::getX() {
    return x;
}

int Ball::getY() {
    return y;
}

Direction Ball::getDirection() { return direction; }

void Ball::move() {
    switch (direction) {
        case STOP:break;
        case LEFT:
            // moving left: decrease x coord
            x--;
            break;
        case UPLEFT:x--;
            y++;
            break;
        case UPRIGHT:x++;
            y++;
            break;
        case RIGHT:x++;
            break;
        case DOWNRIGHT:x++;
            y--;
            break;
        case DOWNLEFT:y--;
            x--;
            break;
        default:break;
    }
}

void Paddle::Reset() {
    x = oriX;
    y = oriY;
}
int Paddle::getX() { return x; }
int Paddle::getY() { return y; }

void Paddle::goUp() { y++; }
void Paddle::goDown() { y--; }