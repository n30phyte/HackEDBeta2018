//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_GAMEOBJECT_H
#define HACKEDBETA_GAMEOBJECT_H

#include <random>

class GameObject {
public:
    GameObject(int x, int y);

    void Reset();

    int getX();
    int getY();

    void step();

protected:

    void setVelocityX(int);
    void setVelocityY(int);

    void setX(int);
    void setY(int);

    virtual void randomDirection();

    int coordinates[2];             // X in 0, Y in 1
    int startingCoordinates[2];     // X in 0, Y in 1

private:
    int velocityX;
    int velocityY;
};

class Ball : public GameObject {
public:
    Ball();
};

class Paddle : public GameObject {

public:
    explicit Paddle(int);

    void setVelocityX(int) {
        GameObject::setVelocityX(0);
    }

};

#endif //HACKEDBETA_GAMEOBJECT_H
