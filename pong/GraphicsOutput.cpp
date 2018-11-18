//
// Created by n30phyte on 17/11/18.
//

#include "GraphicsOutput.h"

void GraphicsOutput::Update(std::vector<int> ball_location,
                            std::vector<int> paddle0_location,
                            std::vector<int> paddle1_location) {

    sf::Image board;
    board.create(80, 80, sf::Color(0, 0, 0));

    sf::Texture texture;
    // Set ball color
    board.setPixel(ball_location[0], ball_location[1], sf::Color::White);
    board.setPixel(ball_location[0], ball_location[1] + 1, sf::Color::White);

    for (auto i = -3; i < 5; i++) {
        board.setPixel(paddle0_location[0], paddle0_location[1] + i, sf::Color::Blue);
        board.setPixel(paddle0_location[0] + 1, paddle0_location[1] + i, sf::Color::Blue);

        board.setPixel(paddle1_location[0], paddle1_location[1] + i, sf::Color::Green);
        board.setPixel(paddle1_location[0] + 1, paddle1_location[1] + i, sf::Color::Green);
    }

    texture.create(80, 80);
    texture.update(board);
    sf::Sprite sprite;
    sprite.scale(10, 10);
    sprite.setTexture(texture);
    _window.clear();
    _window.draw(sprite);
    _window.display();
    sf::Event event;
    _window.pollEvent(event);

}
GraphicsOutput::GraphicsOutput() {

    _window.setFramerateLimit(60);
}
