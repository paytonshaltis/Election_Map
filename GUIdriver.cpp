#include <iostream>
#include <vector>
#include <string>
#include "State.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;

//function that modifies a vector that contains all 56 states and regions as RectangleShapes
void allStateSquares(vector<sf::RectangleShape> &stateSquares) {

    sf::RectangleShape Alabama(sf::Vector2f(50, 50));
    Alabama.setOrigin(sf::Vector2f(25, 25));
    Alabama.setPosition(475, 475);
    Alabama.setFillColor(sf::Color::White);
    stateSquares.push_back(Alabama);

    sf::RectangleShape Alaska(sf::Vector2f(50, 50));
    Alaska.setOrigin(sf::Vector2f(25, 25));
    Alaska.setPosition(90, 145);
    Alaska.setFillColor(sf::Color::White);
    stateSquares.push_back(Alaska);

    sf::RectangleShape Arizona(sf::Vector2f(50, 50));
    Arizona.setOrigin(sf::Vector2f(25, 25));
    Arizona.setPosition(200, 420);
    Arizona.setFillColor(sf::Color::White);
    stateSquares.push_back(Arizona);

    sf::RectangleShape Arkansas(sf::Vector2f(50, 50));
    Arkansas.setOrigin(sf::Vector2f(25, 25));
    Arkansas.setPosition(365, 420);
    Arkansas.setFillColor(sf::Color::White);
    stateSquares.push_back(Arkansas);

    sf::RectangleShape California(sf::Vector2f(50, 50));
    California.setOrigin(sf::Vector2f(25, 25));
    California.setPosition(145, 365);
    California.setFillColor(sf::Color::White);
    stateSquares.push_back(California);

    sf::RectangleShape Colorado(sf::Vector2f(50, 50));
    Colorado.setOrigin(sf::Vector2f(25, 25));
    Colorado.setPosition(255, 365);
    Colorado.setFillColor(sf::Color::White);
    stateSquares.push_back(Colorado);

    sf::RectangleShape Connecticut(sf::Vector2f(50, 50));
    Connecticut.setOrigin(sf::Vector2f(25, 25));
    Connecticut.setPosition(640, 310);
    Connecticut.setFillColor(sf::Color::White);
    stateSquares.push_back(Connecticut);
        
    sf::RectangleShape Delaware(sf::Vector2f(50, 50));
    Delaware.setOrigin(sf::Vector2f(25, 25));
    Delaware.setPosition(640, 365);
    Delaware.setFillColor(sf::Color::White);
    stateSquares.push_back(Delaware); 

    sf::RectangleShape District_Of_Columbia(sf::Vector2f(50, 50));
    District_Of_Columbia.setOrigin(sf::Vector2f(25, 25));
    District_Of_Columbia.setPosition(585, 420);
    District_Of_Columbia.setFillColor(sf::Color::White);
    stateSquares.push_back(District_Of_Columbia); 

    sf::RectangleShape Florida(sf::Vector2f(50, 50));
    Florida.setOrigin(sf::Vector2f(25, 25));
    Florida.setPosition(585, 530);
    Florida.setFillColor(sf::Color::White);
    stateSquares.push_back(Florida);
        
    sf::RectangleShape Georgia(sf::Vector2f(50, 50));
    Georgia.setOrigin(sf::Vector2f(25, 25));
    Georgia.setPosition(530, 475);
    Georgia.setFillColor(sf::Color::White);
    stateSquares.push_back(Georgia);
        
    sf::RectangleShape Hawaii(sf::Vector2f(50, 50));
    Hawaii.setOrigin(sf::Vector2f(25, 25));
    Hawaii.setPosition(90, 530);
    Hawaii.setFillColor(sf::Color::White);
    stateSquares.push_back(Hawaii);
        
    sf::RectangleShape Idaho(sf::Vector2f(50, 50));
    Idaho.setOrigin(sf::Vector2f(25, 25));
    Idaho.setPosition(200, 255);
    Idaho.setFillColor(sf::Color::White);
    stateSquares.push_back(Idaho);
        
    sf::RectangleShape Illinois(sf::Vector2f(50, 50));
    Illinois.setOrigin(sf::Vector2f(25, 25));
    Illinois.setPosition(420, 255);
    Illinois.setFillColor(sf::Color::White);
    stateSquares.push_back(Illinois);
        
    sf::RectangleShape Indiana(sf::Vector2f(50, 50));
    Indiana.setOrigin(sf::Vector2f(25, 25));
    Indiana.setPosition(420, 310);
    Indiana.setFillColor(sf::Color::White);
    stateSquares.push_back(Indiana);
        
    sf::RectangleShape Iowa(sf::Vector2f(50, 50));
    Iowa.setOrigin(sf::Vector2f(25, 25));
    Iowa.setPosition(365, 310);
    Iowa.setFillColor(sf::Color::White);
    stateSquares.push_back(Iowa);
        
    sf::RectangleShape Kansas(sf::Vector2f(50, 50));
    Kansas.setOrigin(sf::Vector2f(25, 25));
    Kansas.setPosition(310, 420);
    Kansas.setFillColor(sf::Color::White);
    stateSquares.push_back(Kansas);
        
    sf::RectangleShape Kentucky(sf::Vector2f(50, 50));
    Kentucky.setOrigin(sf::Vector2f(25, 25));
    Kentucky.setPosition(420, 365);
    Kentucky.setFillColor(sf::Color::White);
    stateSquares.push_back(Kentucky);
        
    sf::RectangleShape Louisiana(sf::Vector2f(50, 50));
    Louisiana.setOrigin(sf::Vector2f(25, 25));
    Louisiana.setPosition(365, 475);
    Louisiana.setFillColor(sf::Color::White);
    stateSquares.push_back(Louisiana);
        
    sf::RectangleShape Maine_State(sf::Vector2f(50, 50));
    Maine_State.setOrigin(sf::Vector2f(25, 25));
    Maine_State.setPosition(695, 145);
    Maine_State.setFillColor(sf::Color::White);
    stateSquares.push_back(Maine_State);
    /*
    sf::RectangleShape Maine_Congressional_1(sf::Vector2f(50, 50));
    Maine_Congressional_1.setOrigin(sf::Vector2f(25, 25));
    //Maine_Congressional_1.setPosition();
    Maine_Congressional_1.setFillColor(sf::Color::White);
    stateSquares.push_back(Maine_Congressional_1);
        
    sf::RectangleShape Maine_Congressional_2(sf::Vector2f(50, 50));
    Maine_Congressional_2.setOrigin(sf::Vector2f(25, 25));
    //Maine_Congressional_2.setPosition();
    Maine_Congressional_2.setFillColor(sf::Color::White);
    stateSquares.push_back(Maine_Congressional_2);
    */
    sf::RectangleShape Maryland(sf::Vector2f(50, 50));
    Maryland.setOrigin(sf::Vector2f(25, 25));
    Maryland.setPosition(585, 365);
    Maryland.setFillColor(sf::Color::White);
    stateSquares.push_back(Maryland);
        
    sf::RectangleShape Massachusetts(sf::Vector2f(50, 50));
    Massachusetts.setOrigin(sf::Vector2f(25, 25));
    Massachusetts.setPosition(640, 255);
    Massachusetts.setFillColor(sf::Color::White);
    stateSquares.push_back(Massachusetts);
        
    sf::RectangleShape Michigan(sf::Vector2f(50, 50));
    Michigan.setOrigin(sf::Vector2f(25, 25));
    Michigan.setPosition(475, 255);
    Michigan.setFillColor(sf::Color::White);
    stateSquares.push_back(Michigan);
        
    sf::RectangleShape Minnesota(sf::Vector2f(50, 50));
    Minnesota.setOrigin(sf::Vector2f(25, 25));
    Minnesota.setPosition(365, 255);
    Minnesota.setFillColor(sf::Color::White);
    stateSquares.push_back(Minnesota);
        
    sf::RectangleShape Mississippi(sf::Vector2f(50, 50));
    Mississippi.setOrigin(sf::Vector2f(25, 25));
    Mississippi.setPosition(420, 475);
    Mississippi.setFillColor(sf::Color::White);
    stateSquares.push_back(Mississippi);
        
    sf::RectangleShape Missouri(sf::Vector2f(50, 50));
    Missouri.setOrigin(sf::Vector2f(25, 25));
    Missouri.setPosition(365, 365);
    Missouri.setFillColor(sf::Color::White);
    stateSquares.push_back(Missouri);
        
    sf::RectangleShape Montana(sf::Vector2f(50, 50));
    Montana.setOrigin(sf::Vector2f(25, 25));
    Montana.setPosition(255, 255);
    Montana.setFillColor(sf::Color::White);
    stateSquares.push_back(Montana);
        
    sf::RectangleShape Nebraska_State(sf::Vector2f(50, 50));
    Nebraska_State.setOrigin(sf::Vector2f(25, 25));
    Nebraska_State.setPosition(310, 365);
    Nebraska_State.setFillColor(sf::Color::White);
    stateSquares.push_back(Nebraska_State);
    /*
    sf::RectangleShape Nebraska_Congressional_1(sf::Vector2f(50, 50));
    Nebraska_Congressional_1.setOrigin(sf::Vector2f(25, 25));
    //Nebraska_Congressional_1.setPosition();
    Nebraska_Congressional_1.setFillColor(sf::Color::White);
    stateSquares.push_back(Nebraska_Congressional_1);
        
    sf::RectangleShape Nebraska_Congressional_2(sf::Vector2f(50, 50));
    Nebraska_Congressional_2.setOrigin(sf::Vector2f(25, 25));
    //Nebraska_Congressional_2.setPosition();
    Nebraska_Congressional_2.setFillColor(sf::Color::White);
    stateSquares.push_back(Nebraska_Congressional_2);
        
    sf::RectangleShape Nebraska_Congressional_3(sf::Vector2f(50, 50));
    Nebraska_Congressional_3.setOrigin(sf::Vector2f(25, 25));
    //Nebraska_Congressional_3.setPosition();
    Nebraska_Congressional_3.setFillColor(sf::Color::White);
    stateSquares.push_back(Nebraska_Congressional_3);
    */
    sf::RectangleShape Nevada(sf::Vector2f(50, 50));
    Nevada.setOrigin(sf::Vector2f(25, 25));
    Nevada.setPosition(200, 310);
    Nevada.setFillColor(sf::Color::White);
    stateSquares.push_back(Nevada);
        
    sf::RectangleShape New_Hampshire(sf::Vector2f(50, 50));
    New_Hampshire.setOrigin(sf::Vector2f(25, 25));
    New_Hampshire.setPosition(695, 200);
    New_Hampshire.setFillColor(sf::Color::White);
    stateSquares.push_back(New_Hampshire);
        
    sf::RectangleShape New_Jersey(sf::Vector2f(50, 50));
    New_Jersey.setOrigin(sf::Vector2f(25, 25));
    New_Jersey.setPosition(585, 310);
    New_Jersey.setFillColor(sf::Color::White);
    stateSquares.push_back(New_Jersey);
        
    sf::RectangleShape New_Mexico(sf::Vector2f(50, 50));
    New_Mexico.setOrigin(sf::Vector2f(25, 25));
    New_Mexico.setPosition(255, 420);
    New_Mexico.setFillColor(sf::Color::White);
    stateSquares.push_back(New_Mexico);
        
    sf::RectangleShape New_York(sf::Vector2f(50, 50));
    New_York.setOrigin(sf::Vector2f(25, 25));
    New_York.setPosition(585, 255);
    New_York.setFillColor(sf::Color::White);
    stateSquares.push_back(New_York);
        
    sf::RectangleShape North_Carolina(sf::Vector2f(50, 50));
    North_Carolina.setOrigin(sf::Vector2f(25, 25));
    North_Carolina.setPosition(475, 420);
    North_Carolina.setFillColor(sf::Color::White);
    stateSquares.push_back(North_Carolina);
        
    sf::RectangleShape North_Dakota(sf::Vector2f(50, 50));
    North_Dakota.setOrigin(sf::Vector2f(25, 25));
    North_Dakota.setPosition(310, 255);
    North_Dakota.setFillColor(sf::Color::White);
    stateSquares.push_back(North_Dakota);
        
    sf::RectangleShape Ohio(sf::Vector2f(50, 50));
    Ohio.setOrigin(sf::Vector2f(25, 25));
    Ohio.setPosition(475, 310);
    Ohio.setFillColor(sf::Color::White);
    stateSquares.push_back(Ohio);
        
    sf::RectangleShape Oklahoma(sf::Vector2f(50, 50));
    Oklahoma.setOrigin(sf::Vector2f(25, 25));
    Oklahoma.setPosition(310, 475);
    Oklahoma.setFillColor(sf::Color::White);
    stateSquares.push_back(Oklahoma);
        
    sf::RectangleShape Oregon(sf::Vector2f(50, 50));
    Oregon.setOrigin(sf::Vector2f(25, 25));
    Oregon.setPosition(145, 310);
    Oregon.setFillColor(sf::Color::White);
    stateSquares.push_back(Oregon);
        
    sf::RectangleShape Pennsylvania(sf::Vector2f(50, 50));
    Pennsylvania.setOrigin(sf::Vector2f(25, 25));
    Pennsylvania.setPosition(530, 310);
    Pennsylvania.setFillColor(sf::Color::White);
    stateSquares.push_back(Pennsylvania);
        
    sf::RectangleShape Rhode_Island(sf::Vector2f(50, 50));
    Rhode_Island.setOrigin(sf::Vector2f(25, 25));
    Rhode_Island.setPosition(695, 310);
    Rhode_Island.setFillColor(sf::Color::White);
    stateSquares.push_back(Rhode_Island);
        
    sf::RectangleShape South_Carolina(sf::Vector2f(50, 50));
    South_Carolina.setOrigin(sf::Vector2f(25, 25));
    South_Carolina.setPosition(530, 420);
    South_Carolina.setFillColor(sf::Color::White);
    stateSquares.push_back(South_Carolina);
        
    sf::RectangleShape South_Dakota(sf::Vector2f(50, 50));
    South_Dakota.setOrigin(sf::Vector2f(25, 25));
    South_Dakota.setPosition(310, 310);
    South_Dakota.setFillColor(sf::Color::White);
    stateSquares.push_back(South_Dakota);

    sf::RectangleShape Tennessee(sf::Vector2f(50, 50));
    Tennessee.setOrigin(sf::Vector2f(25, 25));
    Tennessee.setPosition(420, 420);
    Tennessee.setFillColor(sf::Color::White);
    stateSquares.push_back(Tennessee);

    sf::RectangleShape Texas(sf::Vector2f(50, 50));
    Texas.setOrigin(sf::Vector2f(25, 25));
    Texas.setPosition(310, 530);
    Texas.setFillColor(sf::Color::White);
    stateSquares.push_back(Texas);

    sf::RectangleShape Utah(sf::Vector2f(50, 50));
    Utah.setOrigin(sf::Vector2f(25, 25));
    Utah.setPosition(200, 365);
    Utah.setFillColor(sf::Color::White);
    stateSquares.push_back(Utah);

    sf::RectangleShape Vermont(sf::Vector2f(50, 50));
    Vermont.setOrigin(sf::Vector2f(25, 25));
    Vermont.setPosition(640, 200);
    Vermont.setFillColor(sf::Color::White);
    stateSquares.push_back(Vermont);

    sf::RectangleShape Virginia(sf::Vector2f(50, 50));
    Virginia.setOrigin(sf::Vector2f(25, 25));
    Virginia.setPosition(530, 365);
    Virginia.setFillColor(sf::Color::White);
    stateSquares.push_back(Virginia);

    sf::RectangleShape Washington(sf::Vector2f(50, 50));
    Washington.setOrigin(sf::Vector2f(25, 25));
    Washington.setPosition(145, 255);
    Washington.setFillColor(sf::Color::White);
    stateSquares.push_back(Washington);

    sf::RectangleShape West_Virginia(sf::Vector2f(50, 50));
    West_Virginia.setOrigin(sf::Vector2f(25, 25));
    West_Virginia.setPosition(475, 365);
    West_Virginia.setFillColor(sf::Color::White);
    stateSquares.push_back(West_Virginia);

    sf::RectangleShape Wisconsin(sf::Vector2f(50, 50));
    Wisconsin.setOrigin(sf::Vector2f(25, 25));
    Wisconsin.setPosition(420, 200);
    Wisconsin.setFillColor(sf::Color::White);
    stateSquares.push_back(Wisconsin);

    sf::RectangleShape Wyoming(sf::Vector2f(50, 50));
    Wyoming.setOrigin(sf::Vector2f(25, 25));
    Wyoming.setPosition(255, 310);
    Wyoming.setFillColor(sf::Color::White);
    stateSquares.push_back(Wyoming);

}

//tests to see if the mouse is currently hovered over a certain state
bool testHoverOverState(sf::RectangleShape state, sf::Vector2i mousePos) {
    
    //if both the x and y coordinates are within the state's bounding box...
    if(mousePos.x >= state.getPosition().x - 25 && mousePos.x <= state.getPosition().x + 25) {

        if(mousePos.y >= state.getPosition().y - 25 && mousePos.y <= state.getPosition().y + 25) {
            
            //...this function returns true
            return true;
        }
    }
    
    //else, it returns false
    return false;
}

//function that englarges a state if the mouse is currently over it
void enlargeState(sf::RectangleShape &state) {

    //changes the origing of the shape to what will be the new center
    state.setOrigin(sf::Vector2f(26.25, 26.25));

    //expands the shape by a very small amount
    state.setSize(sf::Vector2f(52.5, 52.5));
}

//function that resets the state to its default size when not being hovered over
void defaultState(sf::RectangleShape &state) {
    
    //changes the origin of the shape back to its default
    state.setOrigin(sf::Vector2f(25, 25));

    //changes the size of the shape back to its default
    state.setSize(sf::Vector2f(50, 50));
}

int main() {
    
    int windowWidth = sf::VideoMode::getDesktopMode().width / 1.25;
    int windowHeight = sf::VideoMode::getDesktopMode().height / 1.25;

    cout << windowWidth << " by " << windowHeight << endl;

    //creates the render window object with the following settings
    sf::RenderWindow window(sf::VideoMode(1100, 750), "Election Outcomes Map", sf::Style::Titlebar | sf::Style::Close);

    //creates an empty vector to be sent to the function that puts all of the states into it
    vector<sf::RectangleShape> stateSquares;
    allStateSquares(stateSquares);

    //game loop that continues for as long as the window is open
    while(window.isOpen()) {
        
//==============================POLLING LOOP==============================//
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
            
            //if the event indicates clicking with the mouse...
            if(event.type == sf::Event::MouseButtonPressed) {
                
                //...use the mouse's position to display the coordinates in the terminal
                sf::Vector2i currentMosPos = sf::Mouse::getPosition(window);
                cout << currentMosPos.x << " " << currentMosPos.y << endl;
            }
            
        }

//==============================NORMAL GAME LOOP==============================//
        //creates the mouse object for tracking the position of the moust in the window
        sf::Vector2i mousePos = sf::Mouse::getPosition(window);
        
        //for each of the states in the stateSquares vectors...
        for(int i = 0; !stateSquares.empty() && i < stateSquares.size(); i++) {

            //...if the moust is hovered over that state...
            if(testHoverOverState(stateSquares.at(i), mousePos)) {

                //...enlarge the state in the window
                enlargeState(stateSquares.at(i));
            }
            else {

                //otherwise, reset it to its default size
                defaultState(stateSquares.at(i));
            }
        }

        //clears the window and draws all of the states / other assets
        window.clear();
        for(int i = 0; !stateSquares.empty() && i < stateSquares.size(); i++) {
            window.draw(stateSquares.at(i));
        }
        window.display();
    }

    return 0;
}