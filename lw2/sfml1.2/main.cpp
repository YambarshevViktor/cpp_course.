#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({1000, 360}), "YVV");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({80, 80});
    shape1.setPosition({50, 50});
    shape1.setFillColor(sf::Color(0xFF, 0x0, 0x00));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({80, 80});
    shape2.setPosition({130, 130});
    shape2.setFillColor(sf::Color(0xFF, 0x0, 0x00));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({80, 80});
    shape3.setPosition({130, 210});
    shape3.setFillColor(sf::Color(0xFF, 0x0, 0x00));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({80, 80});
    shape4.setPosition({210, 50});
    shape4.setFillColor(sf::Color(0xFF, 0x0, 0x00));
    window.draw(shape4);

    sf::RectangleShape shape5;
    shape5.setSize({80, 80});
    shape5.setPosition({370, 50});
    shape5.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({80, 80});
    shape6.setPosition({370, 130});
    shape6.setFillColor(sf::Color(0xFF, 0x0, 0x00));
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({80, 80});
    shape7.setPosition({450, 210});
    shape7.setFillColor(sf::Color(0xFF, 0x0, 0x00));
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({80, 80});
    shape8.setPosition({530, 130});
    shape8.setFillColor(sf::Color(0xFF, 0x0, 0x00));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({80, 80});
    shape9.setPosition({530, 50});
    shape9.setFillColor(sf::Color(0xFF, 0x0, 0x00));
    window.draw(shape9);

    sf::RectangleShape shape10;
    shape10.setSize({80, 80});
    shape10.setPosition({690, 50});
    shape10.setFillColor(sf::Color(0xFF, 0x0, 0x00));
    window.draw(shape10);

    sf::RectangleShape shape11;
    shape11.setSize({80, 80});
    shape11.setPosition({690, 130});
    shape11.setFillColor(sf::Color(0xFF, 0x0, 0x00));
    window.draw(shape11);

    sf::RectangleShape shape12;
    shape12.setSize({80, 80});
    shape12.setPosition({770, 210});
    shape12.setFillColor(sf::Color(0xFF, 0x0, 0x00));
    window.draw(shape12);

    sf::RectangleShape shape13;
    shape13.setSize({80, 80});
    shape13.setPosition({850, 130});
    shape13.setFillColor(sf::Color(0xFF, 0x0, 0x00));
    window.draw(shape13);

    sf::RectangleShape shape14;
    shape14.setSize({80, 80});
    shape14.setPosition({850, 50});
    shape14.setFillColor(sf::Color(0xFF, 0x0, 0x00));
    window.draw(shape14);

    window.display();

    sf::sleep(sf::seconds(5));
}