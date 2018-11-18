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

    virtual void step();

    void setVelocityX(int);
    void setVelocityY(int);

    int getVelocityX();
    int getVelocityY();

    void setX(int);
    virtual void setY(int);

protected:


    virtual int randomInt();

    int coordinates[2];             // X in 0, Y in 1
    int startingCoordinates[2];     // X in 0, Y in 1

    int velocityX;
    int velocityY;
};

class Ball : public GameObject {
public:
    Ball();
    void Reset();

};

class Paddle : public GameObject {

public:
    explicit Paddle(int);

    void step();

    void setY(int target) {
        if(target < (80-4) and target > (4)){
            GameObject::setY(target);
        }
    }

};

#endif //HACKEDBETA_GAMEOBJECT_H
