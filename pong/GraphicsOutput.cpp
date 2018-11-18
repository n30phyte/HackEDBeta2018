//
// Created by n30phyte on 17/11/18.
//

#include "GraphicsOutput.h"
void GraphicsOutput::Update(std::vector<std::vector<bool>> input) {

    sf::Image board;
    board.create(80, 80, sf::Color(0, 0, 0));

    for (int x = 0; x < 80; x++) {
        for (int y = 0; y < 80; y++) {
            if (input[x][y]) {
                board.setPixel(x, y, sf::Color(255, 255, 255));
            }
        }
    }

    sf::Texture texture;

    texture.create(80,80);
    texture.update(board);
    sf::Sprite sprite(texture);
    _window.draw(sprite);

}
GraphicsOutput::GraphicsOutput() {

}
