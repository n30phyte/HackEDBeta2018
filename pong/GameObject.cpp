//
// Created by n30phyte on 17/11/18.
//
#include <GameObject.h>
#include <iostream>

int GameObject::getX() {
    return coordinates[0];
}

int GameObject::getY() {
    return coordinates[1];
}

int GameObject::getVelocityX() {
    return velocityX;
}

int GameObject::getVelocityY() {
    return velocityY;
}

void GameObject::setX(int target) {
    coordinates[0] = target;
}

void GameObject::setY(int target) {
    coordinates[1] = target;
}

void GameObject::step() {
    setX(getX() + velocityX);
    setY(getY() + velocityY);

}

int GameObject::randomInt() {

    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> dice(0, 1);

    return dice(rng);
}

GameObject::GameObject(int x, int y) {
    startingCoordinates[0] = x;
    startingCoordinates[1] = y;

    setVelocityY(0);
    setVelocityX(0);

    Reset();
}

void GameObject::Reset() {
    coordinates[0] = startingCoordinates[0];
    coordinates[1] = startingCoordinates[1];
}

void GameObject::setVelocityX(int velocity) {
    velocityX = velocity;
}

void GameObject::setVelocityY(int velocity) {
    velocityY = velocity;
}

Ball::Ball() : GameObject(40, 40) {
    if (randomInt() == 0) {
        setVelocityY(-1);
    } else {
        setVelocityY(1);
    }
    if (randomInt() == 0) {
        setVelocityX(-1);
    } else {
        setVelocityX(1);
    }

}
void Ball::Reset() {
    GameObject::Reset();
    if (randomInt() == 0) {
        setVelocityY(-1);
    } else {
        setVelocityY(1);
    }
    if (randomInt() == 0) {
        setVelocityX(-1);
    } else {
        setVelocityX(1);
    }
}

Paddle::Paddle(int x) : GameObject(x, 40) {

}
void Paddle::step() {
    setX(getX() + velocityX);
    setY(getY() + velocityY);

}
