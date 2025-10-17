#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(800, 600), "SFML Window");
    window.setFramerateLimit(60);

    CircleShape shape;
    shape.setRadius(100.0);
    shape.setFillColor(Color::Magenta);

    float stepx = 5;

    while (window.isOpen() && !Keyboard::isKeyPressed(Keyboard::Escape))
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        if (shape.getPosition().x > 600)
        {
            stepx = -5;
        } else if (shape.getPosition().x < 0)
        {
            stepx = 5;
        }

        shape.move(stepx,0);
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
