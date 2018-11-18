

#include "WindowManager.h"

int main(int argc, char *argv[]) {

    BaseGame pong;

    if (argc == 1) {
        std::cout << "Running in Graphics mode." << std::endl;

        WindowManager window(pong);
        window.Render();

    } else {
        std::cout << "Running in Headless mode." << std::endl;
    }
}