#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <cmath>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Workshop1.3");
    window.clear(sf::Color(255, 255, 255));

    sf::Texture texture;
    texture.loadFromFile("images/cat.png");

    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(400, 300);
    window.draw(sprite);
    window.display();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
    }
}