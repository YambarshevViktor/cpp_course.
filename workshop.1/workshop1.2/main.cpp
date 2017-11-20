#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>

struct Arrow
{
    sf::ConvexShape arrow;
};

void initialization(sf::ConvexShape &arrow)
{
    arrow.setPosition(400, 300);

    arrow.setFillColor(sf::Color(255, 255, 0));
    arrow.setOutlineThickness(1);
    arrow.setOutlineColor(sf::Color(0, 0, 0));

    arrow.setPointCount(7);
    arrow.setRotation(0);
    arrow.setOrigin({0, 0});
    arrow.setScale(-1, 1);

    arrow.setPoint(0, {0, -40});
    arrow.setPoint(1, {0, -20});
    arrow.setPoint(2, {50, -20});
    arrow.setPoint(3, {50, 20});
    arrow.setPoint(4, {0, 20});
    arrow.setPoint(5, {0, 40});
    arrow.setPoint(6, {-50, 0});
}

void redrawFrame(sf::RenderWindow &window, sf::ConvexShape &arrow)
{
    window.clear(sf::Color(255, 255, 255));
    window.draw(arrow);
    window.display();
}

void OnMouseMove(sf::Event::MouseMoveEvent &event, sf::Vector2f &MousePosition)
{
    MousePosition = {float(event.x), float(event.y)};
}

float toDegrees(float radians)
{
    return float(double(radians) * 180.0 / M_PI);
}

void update(const sf::Vector2f &mousePosition, sf::ConvexShape &arrow, float time)
{

    const sf::Vector2f delta = mousePosition - arrow.getPosition();
    const float cursorAngle = atan2(delta.y, delta.x);
    float degreesCursorAngle = (toDegrees(cursorAngle));
    if (degreesCursorAngle < 0)
    {
        degreesCursorAngle = 360 + degreesCursorAngle;
    }

    const float arrowDegreesAngle = arrow.getRotation();

    float deltaAngle = degreesCursorAngle - arrowDegreesAngle;
    if (deltaAngle > 180)
    {
        deltaAngle = deltaAngle - 360;
    }
    else if (deltaAngle < -180)
    {
        deltaAngle = deltaAngle + 360;
    }

    const float maxAngleSpeed = 100;
    float speedRoute = 1;
    if (deltaAngle < 0)
    {
        speedRoute = -1;
    }
    float maxAngleRotation = speedRoute * time * maxAngleSpeed;

    float nextarrowAngle = 0;
    if (std::abs(deltaAngle) < std::abs(maxAngleRotation))
    {
        nextarrowAngle = arrow.getRotation() + deltaAngle;
        arrow.setRotation(nextarrowAngle);
    }
    else
    {
        nextarrowAngle = arrow.getRotation() + maxAngleRotation;
        arrow.setRotation(nextarrowAngle);
    }

    float maxSpeed = 100;
    sf::Vector2f uniteVextor = delta / std::hypotf(delta.x, delta.y);
    sf::Vector2f stepVector = maxSpeed * time * uniteVextor;

    if (std::hypotf(delta.x, delta.y) > std::hypotf(stepVector.x, stepVector.y))
    {
        sf::Vector2f newPosition = arrow.getPosition() + stepVector;
        arrow.setPosition(newPosition);
    }
    else
    {
        arrow.setPosition(mousePosition);
    }
}

int main()
{
    constexpr unsigned WINDOW_WIDTH = 800;
    constexpr unsigned WINDOW_HEIGHT = 600;

    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "Workshop1.1", sf::Style::Default, settings);

    sf::Clock clock;

    sf::ConvexShape arrow;
    initialization(arrow);
    sf::Vector2f MousePosition;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            if (event.type == sf::Event::MouseMoved)
            {
                OnMouseMove(event.mouseMove, MousePosition);
            }
        }
        update(MousePosition, arrow, clock.restart().asSeconds());
        redrawFrame(window, arrow);
    }
}