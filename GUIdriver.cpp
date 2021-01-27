#include <iostream>
#include <vector>
#include <string>
#include "State.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;

int main() {
    
    int windowWidth = sf::VideoMode::getDesktopMode().width / 1.25;
    int windowHeight = sf::VideoMode::getDesktopMode().height / 1.25;

    cout << windowWidth << " by " << windowHeight << endl;

    //creates the render window object with the following settings
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Election Outcomes Map", sf::Style::Titlebar | sf::Style::Close);

    //rectangle shapes for row 3 of the map
    sf::RectangleShape rectangle1(sf::Vector2f(50, 50));
    rectangle1.setOrigin(sf::Vector2f(25, 25));
    rectangle1.setPosition(175.f, 65.f);
    rectangle1.setFillColor(sf::Color::White);
    
    sf::RectangleShape rectangle2(sf::Vector2f(50, 50));
    rectangle2.setPosition(205.f, 40.f);
    rectangle2.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle3(sf::Vector2f(50, 50));
    rectangle3.setPosition(260.f, 40.f);
    rectangle3.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle4(sf::Vector2f(50, 50));
    rectangle4.setPosition(315.f, 40.f);
    rectangle4.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle5(sf::Vector2f(50, 50));
    rectangle5.setPosition(370.f, 40.f);
    rectangle5.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle6(sf::Vector2f(50, 50));
    rectangle6.setPosition(425.f, 40.f);
    rectangle6.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle7(sf::Vector2f(50, 50));
    rectangle7.setPosition(480.f, 40.f);
    rectangle7.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle8(sf::Vector2f(50, 50));
    rectangle8.setPosition(590.f, 40.f);
    rectangle8.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle9(sf::Vector2f(50, 50));
    rectangle9.setPosition(645.f, 40.f);
    rectangle9.setFillColor(sf::Color::White);

    //rectangle shapes for row 4 on the map
    sf::RectangleShape rectangle10(sf::Vector2f(50, 50));
    rectangle10.setPosition(150.f, 95.f);
    rectangle10.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle11(sf::Vector2f(50, 50));
    rectangle11.setPosition(205.f, 95.f);
    rectangle11.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle12(sf::Vector2f(50, 50));
    rectangle12.setPosition(260.f, 95.f);
    rectangle12.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle13(sf::Vector2f(50, 50));
    rectangle13.setPosition(315.f, 95.f);
    rectangle13.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle14(sf::Vector2f(50, 50));
    rectangle14.setPosition(370.f, 95.f);
    rectangle14.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle15(sf::Vector2f(50, 50));
    rectangle15.setPosition(425.f, 95.f);
    rectangle15.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle16(sf::Vector2f(50, 50));
    rectangle16.setPosition(480.f, 95.f);
    rectangle16.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle17(sf::Vector2f(50, 50));
    rectangle17.setPosition(535.f, 95.f);
    rectangle17.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle18(sf::Vector2f(50, 50));
    rectangle18.setPosition(590.f, 95.f);
    rectangle18.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle19(sf::Vector2f(50, 50));
    rectangle19.setPosition(645.f, 95.f);
    rectangle19.setFillColor(sf::Color::White);

    //rectangle shapes for row 5 on the map
    sf::RectangleShape rectangle20(sf::Vector2f(50, 50));
    rectangle20.setPosition(150.f, 150.f);
    rectangle20.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle21(sf::Vector2f(50, 50));
    rectangle21.setPosition(205.f, 150.f);
    rectangle21.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle22(sf::Vector2f(50, 50));
    rectangle22.setPosition(260.f, 150.f);
    rectangle22.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle23(sf::Vector2f(50, 50));
    rectangle23.setPosition(315.f, 150.f);
    rectangle23.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle24(sf::Vector2f(50, 50));
    rectangle24.setPosition(370.f, 150.f);
    rectangle24.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle25(sf::Vector2f(50, 50));
    rectangle25.setPosition(425.f, 150.f);
    rectangle25.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle26(sf::Vector2f(50, 50));
    rectangle26.setPosition(480.f, 150.f);
    rectangle26.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle27(sf::Vector2f(50, 50));
    rectangle27.setPosition(535.f, 150.f);
    rectangle27.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle28(sf::Vector2f(50, 50));
    rectangle28.setPosition(590.f, 150.f);
    rectangle28.setFillColor(sf::Color::White);

    sf::RectangleShape rectangle29(sf::Vector2f(50, 50));
    rectangle29.setPosition(645.f, 150.f);
    rectangle29.setFillColor(sf::Color::White);

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
            
            if(event.type == sf::Event::Resized) {


            }
            
        }
        
        //enlarges Washington if the user hovers over it
        sf::Vector2i mousePos = sf::Mouse::getPosition(window);
        if(mousePos.x >= 150 && mousePos.x <= 200 && mousePos.y >= 40 && mousePos.y <= 90) {
            rectangle1.setOrigin(sf::Vector2f(26.25, 26.25));
            rectangle1.setSize(sf::Vector2f(52.5, 52.5));
        }
        else{
            rectangle1.setOrigin(sf::Vector2f(25, 25));
            rectangle1.setSize(sf::Vector2f(50, 50));
        }


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
        window.draw(rectangle8);
        window.draw(rectangle9);
        window.draw(rectangle10);
        window.draw(rectangle11);
        window.draw(rectangle12);
        window.draw(rectangle13);
        window.draw(rectangle14);
        window.draw(rectangle15);
        window.draw(rectangle16);
        window.draw(rectangle17);
        window.draw(rectangle18);
        window.draw(rectangle19);
        window.draw(rectangle20);
        window.draw(rectangle21);
        window.draw(rectangle22);
        window.draw(rectangle23);
        window.draw(rectangle24);
        window.draw(rectangle25);
        window.draw(rectangle26);
        window.draw(rectangle27);
        window.draw(rectangle28);
        window.draw(rectangle29);

        //displays whatever is in the window buffer
        window.display();
    }

    return 0;
}