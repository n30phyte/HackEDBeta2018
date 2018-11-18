//
// Created by n30phyte on 17/11/18.
//

#include <WindowManager.h>
#include <iostream>

WindowManager::WindowManager(BaseGame game) {
    Game = game;
}

void WindowManager::Render() {
    windowContext.setPosition(sf::Vector2i(10, 50));
    Menu menu(windowContext.getSize().x, windowContext.getSize().y);

    while (windowContext.isOpen()) {
        sf::Event event;

        while (windowContext.pollEvent(event)) {
            switch (event.type) {
                case sf::Event::KeyReleased:
                    switch (event.key.code) {
                        case sf::Keyboard::Up:
                            menu.MoveUp();
                            break;
                        case sf::Keyboard::Down:
                            menu.MoveDown();
                            break;
                        case sf::Keyboard::Return:
                            switch (menu.GetPressedItem()) {
                                case 0:
                                    std::cout << "Play button pressed" << std::endl;
                                    windowContext.clear();
                                    windowContext.close();

                                    Game.SetMode(BaseGame::GameMode::PlayervsPlayer);

                                    Game.Start();
                                    while(Game.is_running)
                                    {
                                        Game.Loop();
                                    }
                                    break;
                                case 1:
                                    std::cout << "VS AI pressed" << std::endl;
                                    windowContext.clear();
                                    windowContext.close();

                                    Game.SetMode(BaseGame::GameMode::AIvsPlayer);

                                    Game.Start();
                                    while(Game.is_running)
                                    {
                                        Game.Loop();
                                    }
                                    break;
                                case 2:
                                    windowContext.close();
                                    break;
                                default:
                                    break;
                            }
                            break;
                    }

                    break;
                case sf::Event::Closed:
                    windowContext.close();

                    break;
            }
        }

        windowContext.clear();

        menu.draw(windowContext);

        windowContext.display();
    }
}
