//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_BASEGAME_H
#define HACKEDBETA_BASEGAME_H

#include <iostream>
using namespace std;
#include <ctime>
// #include <conio.h>

enum eDirec { STOP = 0, LEFT = 1, UPLEFT = 2, UPRIGHT = 3, RIGHT = 4, DOWNRIGHT = 5, DOWNLEFT = 6 };

class cBall {
    // position of ball
private:
    int x, y;
    int oriX, oriY;
    eDirec direction;

public:
    cBall(int posX, int posY)
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

    int getX();
    int getY();
    eDirec getDirection() {return direction; }

    void move();

    friend ostream & operator <<(ostream & o, cBall c) {
        o << "cBall [" << c.x << "," << c.y << "][" << c.direction << "]";
        return o;
    }

};

class cPaddle {
private:
    int x, y;
    int oriX, oriY;

public:
    cPaddle()
    {
        x = y = 0;
    }

    cPaddle( int posX, int posY) : cPaddle()
    {
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

    friend ostream & operator <<(ostream & o, cPaddle c) {
        o << "Paddle [" << c.x << "," << c.y << "]";
        return o;
    }
};

class cGameManager{
private :
    int width, height;
    int score1, score2;
    char up1, down1, up2, down2;
    bool quit;
    cBall * ball;
    cPaddle *player1;
    cPaddle *player2;

public:
    cGameManager(int w, int h){
        srand(time(NULL));

        quit = false;
        score1 = score2 = 0;
        up1 = 'w'; down1 = 's';
        up2 = 'i'; down2 = 'k';
        width = w, height = h;
        ball = new cBall( w/2, h/2);
        player1 = new cPaddle(1, h/2-3 );
        player2 = new cPaddle(w-2, h/2 -3);
    }
    ~cGameManager()
    {
        delete ball, player1, player2;
    }

    void scoreUp(cPaddle * player)
    {
        if (player == player1){
            score1++;
        }
        else if (player == player2) {
            score2++;
        }

        ball ->Reset();
        player1->Reset();
        player2->Reset();
    }
};

class BaseGame {
public:
    void Start();
    void Loop();
    void Stop();
    bool Stopped();

};

#endif //HACKEDBETA_BASEGAME_H
