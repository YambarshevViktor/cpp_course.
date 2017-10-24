#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({100, 300}), "traffic light");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({150, 300});
    shape1.setFillColor(sf::Color(0x80, 0x80, 0x80));
    window.draw(shape1);

    sf::CircleShape shape2(45);
    shape2.setPosition({10, 200});
    shape2.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape2);

    sf::CircleShape shape3(45);
    shape3.setPosition({10, 105});
    shape3.setFillColor(sf::Color(0xFF, 0xFF, 0x0));
    window.draw(shape3);

    sf::CircleShape shape4(45);
    shape4.setPosition({10, 10});
    shape4.setFillColor(sf::Color(0x0, 0xFF, 0x0));
    window.draw(shape4);

    window.display();

    sf::sleep(sf::seconds(5));
}