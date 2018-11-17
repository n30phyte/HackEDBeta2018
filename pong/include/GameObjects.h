//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_GAMEOBJECT_H
#define HACKEDBETA_GAMEOBJECT_H

class Ball {
    // position of ball
private:
    int x, y;
    int oriX, oriY;
    eDirec direction;

public:
    Ball(int posX, int posY) {
        // saves original location of ball
        oriX = posX;
        oriY = posY;
        x = posX;
        y = posY;
        direction = STOP;
    }

    void Reset();

    void changeDirection(eDirec d);

    void randomDirection();

    int getX();
    int getY();
    eDirec getDirection() { return direction; }
    int getX();
    int getY();
    eDirec getDirection();

    void move();

    friend ostream &operator<<(ostream &o, cBall c) {
        o << "cBall [" << c.x << "," << c.y << "][" << c.direction << "]";
        return o;
    }

};

class Paddle {
private:
    int x, y;
    int oriX, oriY;

public:
    Paddle() {
        x = y = 0;
    }

    Paddle(int posX, int posY) : Paddle() {
        oriX = posX;
        oriY = posY;
        x = posX;
        y = posY;
    }

    void Reset();
    int getX();
    int getY();

    // might be the other way around? up = y--;  idk lol
    void goUp();
    void goDown();

    friend ostream &operator<<(ostream &o, Paddle c) {
        o << "Paddle [" << c.x << "," << c.y << "]";
        friend std::ostream &operator<<(std::ostream &o, Ball c) {
            o << "Ball [" << c.x << "," << c.y << "][" << c.direction << "]";
            return o;
        }
    };

#endif //HACKEDBETA_GAMEOBJECT_H
