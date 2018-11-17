//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_BASEGAME_H
#define HACKEDBETA_BASEGAME_H

enum eDirec { STOP = 0, LEFT = 1, UPLEFT = 2, UPRIGHT = 3, RIGHT = 4, DOWNRIGHT = 5, DOWNLEFT = 6 };

class Ball {
    // position of ball
private:
    int x, y;
    int oriX, oriY;
    eDirec direction;

public:
    Ball(int posX, int posY)
    {
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

    int getX() {return x;}
    int getY() {return y;}
    eDirec getDirection() {return direction;}

    void move();

    friend ostream & operator <<(ostream & o, Ball c) {
        o << "Ball [" << c.x << "," << c.y << "][" << c.direction << "]";
        return o;
    }

};

class BaseGame {
public:
    void Start();
    void Loop();
    void Stop();
    bool Stopped;

};

#endif //HACKEDBETA_BASEGAME_H
