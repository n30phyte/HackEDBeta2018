#include <iostream>

#include "InputManager.h"
#include "OutputManager.h"
#include "BaseGame.h"

int main(int argc, char *argv[]) {

    BaseGame pong;

    if(argc == 1) {
        std::cout << "Running in Graphics mode." << std::endl;

    }
    else
    {
        std::cout << "Running in Headless mode." << std::endl;

        InputManager<AIInput, AIInput> inputs;

    }

    pong.Start();
}