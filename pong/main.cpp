#include <iostream>
#include "BaseGame.h"

int main(int argc, char *argv[]) {


    if(argc == 1) {
        std::cout << "Graphics mode" << std::endl;
    }
    else
    {
        std::cout << argv[1] << std::endl;
    }

    BaseGame game;

    game.Start();

    while(true)
    {
        game.Loop();
    }

    return 0;
}