#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "House");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({500, 400});
    shape1.setPosition({100, 300});
    shape1.setFillColor(sf::Color(0x8B, 0x45, 0x13));
    window.draw(shape1);

    sf::ConvexShape shape2;
    shape2.setFillColor(sf::Color(0xA5, 0x2A, 0x2A));
    shape2.setPosition(350, 300);
    shape2.setPointCount(4);
    shape2.setPoint(0, {-250, 0});
    shape2.setPoint(1, {+250, 0});
    shape2.setPoint(2, {+300, 90});
    shape2.setPoint(3, {-300, 90});
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({50, 90});
    shape3.setPosition({500, 250});
    shape3.setFillColor(sf::Color(0xC0, 0xC0, 0xC0));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({90, 40});
    shape4.setPosition({480, 250});
    shape4.setFillColor(sf::Color(0xC0, 0xC0, 0xC0));
    window.draw(shape4);

    sf::CircleShape shape5(15);
    shape5.setPosition({540, 220});
    shape5.setFillColor(sf::Color(0xD3, 0xD3, 0xD3));
    window.draw(shape5);

    sf::CircleShape shape6(20);
    shape6.setPosition({545, 190});
    shape6.setFillColor(sf::Color(0xD3, 0xD3, 0xD3));
    window.draw(shape6);

    sf::CircleShape shape7(25);
    shape7.setPosition({560, 160});
    shape7.setFillColor(sf::Color(0xD3, 0xD3, 0xD3));
    window.draw(shape7);

    sf::CircleShape shape8(25);
    shape8.setPosition({570, 130});
    shape8.setFillColor(sf::Color(0xD3, 0xD3, 0xD3));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({100, 150});
    shape9.setPosition({130, 450});
    shape9.setFillColor(sf::Color(0x80, 0x80, 0x80));
    window.draw(shape9);

    window.display();

    sf::sleep(sf::seconds(5));
}