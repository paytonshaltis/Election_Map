#include <iostream>
#include <vector>
#include <string>
#include "State.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;

int main() {
    
    //creates the render window object with the following settings
    sf::RenderWindow window(sf::VideoMode(1100, 750), "Election Outcomes Map", sf::Style::Default | sf::Style::Resize);
    
    //creates a rectangle shape
    sf::RectangleShape rectangle1(sf::Vector2f(50, 50));
    rectangle1.setPosition(150.f, 40.f);
    rectangle1.setFillColor(sf::Color::Blue);

    sf::RectangleShape rectangle2(sf::Vector2f(50, 50));
    rectangle2.setPosition(205.f, 40.f);
    rectangle2.setFillColor(sf::Color::Red);

    sf::RectangleShape rectangle3(sf::Vector2f(50, 50));
    rectangle3.setPosition(260.f, 40.f);
    rectangle3.setFillColor(sf::Color::Red);

    sf::RectangleShape rectangle4(sf::Vector2f(50, 50));
    rectangle4.setPosition(315.f, 40.f);
    rectangle4.setFillColor(sf::Color::Red);

    sf::RectangleShape rectangle5(sf::Vector2f(50, 50));
    rectangle5.setPosition(370.f, 40.f);
    rectangle5.setFillColor(sf::Color::Blue);

    sf::RectangleShape rectangle6(sf::Vector2f(50, 50));
    rectangle6.setPosition(425.f, 40.f);
    rectangle6.setFillColor(sf::Color::Blue);

    sf::RectangleShape rectangle7(sf::Vector2f(50, 50));
    rectangle7.setPosition(480.f, 40.f);
    rectangle7.setFillColor(sf::Color::Blue);

    //sets the framerate limit to 60 fps
    //window.setFramerateLimit(120);

    //game loop that continues for as long as the window is open
    while(window.isOpen()) {

        //creates an event object called event
        sf::Event event;

        //polling loop that continues when the event object detects an event has occurred
        while(window.pollEvent(event)) {
            
            //if the event indicates closing the window...
            if(event.type == sf::Event::Closed) {

                //...close the window
                window.close();
                cout << "Successfully closed the window." << endl;
            }
            if(event.type == sf::Event::MouseButtonPressed) {
                sf::Vector2i currentMosPos = sf::Mouse::getPosition(window);
                cout << currentMosPos.x << " " << currentMosPos.y << endl;
            }
        }

        /*
        //moves rectangle1 to wherever the mouse is
        sf::Vector2i mousePos = sf::Mouse::getPosition(window);
        sf::Vector2f mousePosFloat = static_cast<sf::Vector2f>(mousePos);
        rectangle1.setPosition(mousePosFloat);
        */

        //clears the window
        window.clear();
        
        //draws rectangle1 after the screen has been cleared
        window.draw(rectangle1);
        window.draw(rectangle2);
        window.draw(rectangle3);
        window.draw(rectangle4);
        window.draw(rectangle5);
        window.draw(rectangle6);
        window.draw(rectangle7);

        //displays whatever is in the window buffer
        window.display();
    }

    return 0;
}