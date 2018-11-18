//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_GAMEOBJECT_H
#define HACKEDBETA_GAMEOBJECT_H

#include <random>

enum Direction {
    STOP,
    LEFT,
    UPLEFT,
    UPRIGHT,
    RIGHT,
    DOWNRIGHT,
    DOWNLEFT,
    UP,
    DOWN,
};

class GameObject {
public:
    GameObject(int x, int y);

    void Reset();
    virtual void setDirection(Direction target);

    int getX();
    int getY();

    Direction getDirection();

protected:
    Direction direction;

    void setX(int);
    void setY(int);

    void step();

    virtual void randomDirection();


    int coordinates[2];             // X in 0, Y in 1
    int startingCoordinates[2];     // X in 0, Y in 1
};

class Ball : private GameObject {
public:
    Ball();

};

class Paddle : private GameObject {

public:
    explicit Paddle(int);
    void setDirection(Direction target) final;

    void randomDirection();
};

#endif //HACKEDBETA_GAMEOBJECT_H
