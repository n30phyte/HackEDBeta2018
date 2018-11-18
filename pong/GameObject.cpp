//
// Created by n30phyte on 17/11/18.
//
#include <GameObject.h>

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
    coordinates[0] = coordinates[0] + velocityX;
    coordinates[1] = coordinates[1] + velocityY;
}

void GameObject::randomDirection() {

    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> dice(1, 6);

    setVelocityX(dice(rng));
    setVelocityY(dice(rng));

}

GameObject::GameObject(int x, int y) {
    startingCoordinates[0] = x;
    startingCoordinates[1] = y;

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
    randomDirection();
}

Paddle::Paddle(int x) : GameObject(40, x) {

}