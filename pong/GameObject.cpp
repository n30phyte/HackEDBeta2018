//
// Created by n30phyte on 17/11/18.
//
#include <GameObject.h>

void GameObject::setDirection(Direction target) {
    direction = target;
}

int GameObject::getX() {
    return coordinates[0];
}

int GameObject::getY() {
    return coordinates[1];
}

Direction GameObject::getDirection() {
    return direction;
}

void GameObject::setX(int target) {
    coordinates[0] = target;
}

void GameObject::setY(int target) {
    coordinates[1] = target;
}

void GameObject::step() {

    switch (direction) {
        case STOP:
            break;
        case UPLEFT:
            coordinates[0]--;   // Decrease X
            coordinates[1]++;   // Increase Y
            break;
        case UPRIGHT:
            coordinates[0]++;   // Increase X
            coordinates[1]++;   // Increase Y
            break;
        case DOWNRIGHT:
            coordinates[0]++;   // Increase X
            coordinates[1]--;   // Decrease Y
            break;
        case DOWNLEFT:
            coordinates[0]--;   // Decrease X
            coordinates[1]--;   // Decrease Y
            break;
        case LEFT:
            coordinates[0]--;   // Decrease X
            break;
        case RIGHT:
            coordinates[0]++;   // Increase X
            break;
        case UP:
            coordinates[1]++;   // Increase Y
            break;
        case DOWN:
            coordinates[1]--;   // Decrease Y
            break;
    }

}

void GameObject::randomDirection() {

    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> dice(1, 6);

    setDirection(static_cast<Direction>(dice(rng)));

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

Ball::Ball() : GameObject(40, 40) {
    randomDirection();
}

Paddle::Paddle(int x) : GameObject(40, x) {

}

void Paddle::setDirection(Direction target) {
    if (target == Direction::UP || target == Direction::DOWN) {
        GameObject::setDirection(target);
    }
}

void Paddle::randomDirection() {

}