#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(160, 160, 8), "pong");
    sf::Vector2f paddleSize(4, 16);
    sf::Vector2f ballSize(2, 4);

    sf::RectangleShape leftPaddle;
    leftPaddle.setSize(paddleSize);
    leftPaddle.setFillColor(sf::Color::White);
    leftPaddle.setPosition(8, 80);

    sf::RectangleShape rightPaddle;
    rightPaddle.setSize(paddleSize);
    rightPaddle.setFillColor(sf::Color::White);
    rightPaddle.setPosition(152, 80);

    sf::RectangleShape ball;
    ball.setSize(ballSize);
    ball.setFillColor(sf::Color::White);
    ball.setPosition(80, 80);
    sf::Vector2f ballVelocity(2,1.6);

    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        ball.setPosition(ball.getPosition() + ballVelocity);

        if (ball.getPosition().y > 156) {
            ballVelocity.y *= -1;
        }
        if (ball.getPosition().y < 0) {
            ballVelocity.y *= -1;
        }
        if (ball.getPosition().x > 158) {
            ballVelocity.x *= -1;
        }
        if (ball.getPosition().x < 0) {
            ballVelocity.x *= -1;
        }

        window.clear();
        window.draw(leftPaddle);
        window.draw(rightPaddle);
        window.draw(ball);
        window.display();
        window.setFramerateLimit(60);
    }

    return 0;
}