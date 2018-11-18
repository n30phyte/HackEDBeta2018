//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_GRAPHICSOUTPUT_H
#define HACKEDBETA_GRAPHICSOUTPUT_H

#include <SFML/Graphics.hpp>

class GraphicsOutput {
private:
    sf::RenderWindow gameWindow = sf::RenderWindow(sf::VideoMode(560, 560), "Pong");

};

#endif //HACKEDBETA_GRAPHICSOUTPUT_H
