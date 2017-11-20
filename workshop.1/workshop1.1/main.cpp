#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode({800, 600}), "Workshop");
    window.clear(sf::Color(255, 255, 255));

    sf::ConvexShape strelka;
    strelka.setFillColor(sf::Color(255, 255, 0));
    strelka.setOutlineThickness(3);
    strelka.setOutlineColor(sf::Color(0, 0, 0));
    strelka.setPosition(100, 100);
    strelka.setRotation(50);
    strelka.setPointCount(7);

    strelka.setPoint(0, {0, -50});
    strelka.setPoint(1, {50, 0});
    strelka.setPoint(2, {30, 0});
    strelka.setPoint(3, {30, 50});
    strelka.setPoint(4, {-30, 50});
    strelka.setPoint(5, {-30, 0});
    strelka.setPoint(6, {-50, 0});
    window.draw(strelka);
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