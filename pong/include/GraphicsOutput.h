//
// Created by n30phyte on 17/11/18.
//

#ifndef HACKEDBETA_GRAPHICSOUTPUT_H
#define HACKEDBETA_GRAPHICSOUTPUT_H

#include <SFML/Graphics.hpp>
#include <iostream>

#include "BaseOutput.h"

class GraphicsOutput : public BaseOutput {
public:
    GraphicsOutput();
    void Update(std::vector<int>, std::vector<int>, std::vector<int>);
private:
    sf::RenderWindow _window = sf::RenderWindow(sf::VideoMode(800, 800), "Player vs Player");

    void generateBoard() {

    }
};

#endif //HACKEDBETA_GRAPHICSOUTPUT_H
