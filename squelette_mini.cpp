#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

/* Directive de compilation 
 *
 *	g++ main.cpp -I /usr/local/include -o main.app -L /usr/local/lib -lsfml-graphics -lsfml-window -lsfml-system
 *
 */

int main()
{
    sf::RenderWindow window(sf::VideoMode(800,600), "TEST SFML");
    
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            switch (event.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
                    
                default:
                    break;
            }
        }
        
        window.clear();
        window.display();
    }
}
