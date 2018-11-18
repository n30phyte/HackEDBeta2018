//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_WINDOWMANAGER_H
#define HACKEDBETA_WINDOWMANAGER_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "Menu.h"
#include "BaseGame.h"


class WindowManager {
public:
    explicit WindowManager(BaseGame);
    void Render();
private:
    sf::RenderWindow windowContext = sf::RenderWindow(sf::VideoMode(560, 560), "ai-pong :3c", sf::Style::Default);

    BaseGame Game;

};

#endif //HACKEDBETA_WINDOWMANAGER_H
