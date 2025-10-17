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

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        shape.move(5,0);
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
