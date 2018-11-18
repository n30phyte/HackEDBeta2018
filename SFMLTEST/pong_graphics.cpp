#include "SFML/Graphics.hpp"
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(80, 80, 8), "pong");
    sf::Vector2f paddleSize(2, 8);
    sf::Vector2f ballSize(1, 2);

    sf::RectangleShape leftPaddle;
    leftPaddle.setSize(paddleSize);
    leftPaddle.setFillColor(sf::Color::White);
    leftPaddle.setPosition(4, 36);

    sf::RectangleShape rightPaddle;
    rightPaddle.setSize(paddleSize);
    rightPaddle.setFillColor(sf::Color::White);
    rightPaddle.setPosition(74, 36);

    sf::RectangleShape ball;
    ball.setSize(ballSize);
    ball.setFillColor(sf::Color::White);
    ball.setPosition(38, 39);

    sf::Vector2f ballVelocity(1, .8);

    while (window.isOpen()) {
        sf::Event event;

        ball.move(ballVelocity);
        
        // Perfect AI
        // rightPaddle.setPosition(rightPaddle.getPosition().x, ball.getPosition().y-4);
        // leftPaddle.setPosition(leftPaddle.getPosition().x, ball.getPosition().y-4);

        if ((ball.getPosition().y > leftPaddle.getPosition().y) && (ball.getPosition().y < leftPaddle.getPosition().y + 8) && (ball.getPosition().x == 5)) {
            ballVelocity.x *= -1;
        }

        if ((ball.getPosition().y > rightPaddle.getPosition().y) && (ball.getPosition().y < rightPaddle.getPosition().y + 8) && (ball.getPosition().x == 73)) {
            ballVelocity.x *= -1;
        }

        if (ball.getPosition().y > 78) {
            ballVelocity.y *= -1;
        }
        if (ball.getPosition().y < 0) {
            ballVelocity.y *= -1;
        }

        if (ball.getPosition().x > 79 || ball.getPosition().x < 0) {
            ball.setPosition(38,39);
        }

        while (window.pollEvent(event)) {
            switch (event.type) {
            case sf::Event::KeyPressed:
                switch (event.key.code) {
                case sf::Keyboard::W:
                    if (leftPaddle.getPosition().y > 0) {
                        leftPaddle.move(0, -2);    
                    }
                    break;
                case sf::Keyboard::S:
                    if (leftPaddle.getPosition().y < 72) {
                        leftPaddle.move(0, 2);
                    }
                    break;
                case sf::Keyboard::Up:
                    if (rightPaddle.getPosition().y > 0) {
                        rightPaddle.move(0, -2);
                    }
                    break;
                case sf::Keyboard::Down:
                    if (rightPaddle.getPosition().y < 72){
                        rightPaddle.move(0, 2);                          
                    }
                    break;
                }
                break;
            case sf::Event::Closed:
                window.close();
                break;
            }
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