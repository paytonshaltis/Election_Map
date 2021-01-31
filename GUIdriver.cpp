#include <iostream>
#include <vector>
#include <string>
#include "State.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <cmath>
#include <fstream>


using namespace std;


//==============================FUNCTIONS USING STATE OBJECTS==============================//
//accepts a string and returns the uppercase version of the word
string toUpper(string word) {
    
    int wordSize = word.size();                 //size of the word passed to function
    string finalWord = "";                      //the lowercase word that will be returned
    
    //for each letter, if it is an uppercase letter, it becomes lowercase, otherwise it remains the same
    for(int i = 0; i < wordSize; i++) {
        if(word.at(i) == 'a')
            finalWord += "A";
        else if(word.at(i) == 'b')
            finalWord += "B";
        else if(word.at(i) == 'c')
            finalWord += "C";
        else if(word.at(i) == 'd')
            finalWord += "D";
        else if(word.at(i) == 'e')
            finalWord += "E";
        else if(word.at(i) == 'f')
            finalWord += "F";
        else if(word.at(i) == 'g')
            finalWord += "G";
        else if(word.at(i) == 'h')
            finalWord += "H";
        else if(word.at(i) == 'i')
            finalWord += "I";
        else if(word.at(i) == 'j')
            finalWord += "J";
        else if(word.at(i) == 'k')
            finalWord += "K";
        else if(word.at(i) == 'l')
            finalWord += "L";
        else if(word.at(i) == 'm')
            finalWord += "M";
        else if(word.at(i) == 'n')
            finalWord += "N";
        else if(word.at(i) == 'o')
            finalWord += "O";
        else if(word.at(i) == 'p')
            finalWord += "P";
        else if(word.at(i) == 'q')
            finalWord += "Q";
        else if(word.at(i) == 'r')
            finalWord += "R";
        else if(word.at(i) == 's')
            finalWord += "S";
        else if(word.at(i) == 't')
            finalWord += "T";
        else if(word.at(i) == 'u')
            finalWord += "U";
        else if(word.at(i) == 'v')
            finalWord += "V";
        else if(word.at(i) == 'w')
            finalWord += "W";
        else if(word.at(i) == 'x')
            finalWord += "X";
        else if(word.at(i) == 'y')
            finalWord += "Y";
        else if(word.at(i) == 'z')
            finalWord += "Z";
        else
            finalWord += word.at(i);
    }

    //returns the final lowercase version of the word
    return finalWord;
}

//returns a vector with all of the states in alphabetical order.
//composed of 50 states, 1 district, 5 congressionals for a total 'state' count of 56
vector<State> stateVector() {
    
    //vector to be returned with 56 states
    vector<State> finalVector;

    //creates 56 state objects, initialized with their name and electoral values
    State Alabama = State("Alabama", 9);
    State Alaska = State("Alaska", 3);
    State Arizona = State("Arizona", 11);
    State Arkansas = State("Arkansas", 6);
    State California = State("California", 55);
    State Colorado = State("Colorado", 9);
    State Connecticut = State("Connecticut", 7);
    State Delaware = State("Delaware", 3);
    State District_Of_Columbia = State("District_Of_Columbia", 3);
    State Florida = State("Florida", 29);
    State Georgia = State("Georgia", 16);
    State Hawaii = State("Hawaii", 4);
    State Idaho = State("Idaho", 4);
    State Illinois = State("Illinois", 20);
    State Indiana = State("Indiana", 11);
    State Iowa = State("Iowa", 6);
    State Kansas = State("Kansas", 6);
    State Kentucky = State("Kentucky", 8);
    State Louisiana = State("Louisiana", 8);
    State Maine_State = State("Maine_State", 2);
    State Maine_Congressional_1 = State("Maine_Congressional_1", 1);
    State Maine_Congressional_2 = State("Maine_Congressional_2", 1);
    State Maryland = State("Maryland", 10);
    State Massachusetts = State("Massachusetts", 11);
    State Michigan = State("Michigan", 16);
    State Minnesota = State("Minnesota", 10);
    State Mississippi = State("Mississippi", 6);
    State Missouri = State("Missouri", 10);
    State Montana = State("Montana", 3) ;
    State Nebraska_State = State("Nebraska_State", 2);
    State Nebraska_Congressional_1 = State("Nebraska_Congressional_1", 1);
    State Nebraska_Congressional_2 = State("Nebraska_Congressional_2", 1);
    State Nebraska_Congressional_3 = State("Nebraska_Congressional_3", 1);
    State Nevada = State("Nevada", 6);
    State New_Hampshire = State("New_Hampshire", 4);
    State New_Jersey = State("New_Jersey", 14);
    State New_Mexico = State("New_Mexico", 5);
    State New_York = State("New_York", 29);
    State North_Carolina = State("North_Carolina", 15);
    State North_Dakota = State("North_Dakota", 3);
    State Ohio = State("Ohio", 18);
    State Oklahoma = State("Oklahoma", 7);
    State Oregon = State("Oregon", 7);
    State Pennsylvania = State("Pennsylvania", 20);
    State Rhode_Island = State("Rhode_Island", 4);
    State South_Carolina = State("South_Carolina", 9);
    State South_Dakota = State("South_Dakota", 3);
    State Tennessee = State("Tennessee", 11);
    State Texas = State("Texas", 38);
    State Utah = State("Utah", 6);
    State Vermont = State("Vermont", 3);
    State Virginia = State("Virginia", 13);
    State Washington = State("Washington", 12);
    State West_Virginia = State("West_Virginia", 5);
    State Wisconsin = State("Wisconsin", 10);
    State Wyoming = State("Wyoming", 3);
    
    //insert each of the 56 states into the vector to be returned
    finalVector.push_back(Alabama);
    finalVector.push_back(Alaska);
    finalVector.push_back(Arizona);
    finalVector.push_back(Arkansas);
    finalVector.push_back(California);
    finalVector.push_back(Colorado);
    finalVector.push_back(Connecticut);
    finalVector.push_back(Delaware);
    finalVector.push_back(District_Of_Columbia);
    finalVector.push_back(Florida);
    finalVector.push_back(Georgia);
    finalVector.push_back(Hawaii);
    finalVector.push_back(Idaho);
    finalVector.push_back(Illinois);
    finalVector.push_back(Indiana);
    finalVector.push_back(Iowa);
    finalVector.push_back(Kansas);
    finalVector.push_back(Kentucky);
    finalVector.push_back(Louisiana);
    finalVector.push_back(Maine_State);
    finalVector.push_back(Maine_Congressional_1);
    finalVector.push_back(Maine_Congressional_2);
    finalVector.push_back(Maryland);
    finalVector.push_back(Massachusetts);
    finalVector.push_back(Michigan);
    finalVector.push_back(Minnesota);
    finalVector.push_back(Mississippi);
    finalVector.push_back(Missouri);
    finalVector.push_back(Montana);
    finalVector.push_back(Nebraska_State);
    finalVector.push_back(Nebraska_Congressional_1);
    finalVector.push_back(Nebraska_Congressional_2);
    finalVector.push_back(Nebraska_Congressional_3);
    finalVector.push_back(Nevada);
    finalVector.push_back(New_Hampshire);
    finalVector.push_back(New_Jersey);
    finalVector.push_back(New_Mexico);
    finalVector.push_back(New_York);
    finalVector.push_back(North_Carolina);
    finalVector.push_back(North_Dakota);
    finalVector.push_back(Ohio);
    finalVector.push_back(Oklahoma);
    finalVector.push_back(Oregon);
    finalVector.push_back(Pennsylvania);
    finalVector.push_back(Rhode_Island);
    finalVector.push_back(South_Carolina);
    finalVector.push_back(South_Dakota);
    finalVector.push_back(Tennessee);
    finalVector.push_back(Texas);
    finalVector.push_back(Utah);
    finalVector.push_back(Vermont);
    finalVector.push_back(Virginia);
    finalVector.push_back(Washington);
    finalVector.push_back(West_Virginia);
    finalVector.push_back(Wisconsin);
    finalVector.push_back(Wyoming);
    
    return finalVector;
}

//when "states.txt" cannot be found, this function is called to create the proper default file
void makeStatestxt() {
    
    //output file stream object used for this write
    ofstream OFS;

    //creates the file that we have confirmed does not exists
    OFS.open("resources/states.txt");

    //writes this default text as backup in case the file is lost
    OFS << "Republican:" << endl;
    OFS << endl;
    OFS << "Democrat:" << endl;
    OFS << endl;
    OFS << "Remaining:" << endl;
    OFS << endl;
    OFS << "Alabama" << endl;
    OFS << "Alaska" << endl;
    OFS << "Arizona" << endl;
    OFS << "Arkansas" << endl;
    OFS << "California" << endl;
    OFS << "Colorado" << endl;
    OFS << "Connecticut" << endl;
    OFS << "Delaware" << endl;
    OFS << "District_Of_Columbia" << endl;
    OFS << "Florida" << endl;
    OFS << "Georgia" << endl;
    OFS << "Hawaii" << endl;
    OFS << "Idaho" << endl;
    OFS << "Illinois" << endl;
    OFS << "Indiana" << endl;
    OFS << "Iowa" << endl;
    OFS << "Kansas" << endl;
    OFS << "Kentucky" << endl;
    OFS << "Louisiana" << endl;
    OFS << "Maine_State" << endl;
    OFS << "Maine_Congressional_1" << endl;
    OFS << "Maine_Congressional_2" << endl;
    OFS << "Maryland" << endl;
    OFS << "Massachusetts" << endl;
    OFS << "Michigan" << endl;
    OFS << "Minnesota" << endl;
    OFS << "Mississippi" << endl;
    OFS << "Missouri" << endl;
    OFS << "Montana" << endl;
    OFS << "Nebraska_State" << endl;
    OFS << "Nebraska_Congressional_1" << endl;
    OFS << "Nebraska_Congressional_2" << endl;
    OFS << "Nebraska_Congressional_3" << endl;
    OFS << "Nevada" << endl;
    OFS << "New_Hampshire" << endl;
    OFS << "New_Jersey" << endl;
    OFS << "New_Mexico" << endl;
    OFS << "New_York" << endl;
    OFS << "North_Carolina" << endl;
    OFS << "North_Dakota" << endl;
    OFS << "Ohio" << endl;
    OFS << "Oklahoma" << endl;
    OFS << "Oregon" << endl;
    OFS << "Pennsylvania" << endl;
    OFS << "Rhode_Island" << endl;
    OFS << "South_Carolina" << endl;
    OFS << "South_Dakota" << endl;
    OFS << "Tennessee" << endl;
    OFS << "Texas" << endl;
    OFS << "Utah" << endl;
    OFS << "Vermont" << endl;
    OFS << "Virginia" << endl;
    OFS << "Washington" << endl;
    OFS << "West_Virginia" << endl;
    OFS << "Wisconsin" << endl;
    OFS << "Wyoming" << endl;
    
    //closes the file
    OFS.close();
}

//tests to see if the "states.txt" file is in the "resources" directory, otherwise it tries to make one.
bool checkStatestxt() {
    
    //output file stream and input file stream used to find files
    ofstream OFS;
    ifstream IFS;

    //tries to open the "resources/states.txt" file with the input stream
    IFS.open("resources/states.txt");

    //if it fails, it means that it does not exist.
    if(!IFS.is_open()) {
        cout << "\"states.txt\" file not found. Creating one now..." << endl;
        
        //calls the makeStatestxt() function that creates the backup in "resources/" directory
        makeStatestxt();
        
        //tries to open the file once again with an input stream
        IFS.open("resources/states.txt");

        //if it still does not open, some error has occurred, likely a missing directory
        if(!IFS.is_open()) {
            cout << "\"resources\" directory is missing. Unable to create file." << endl;
            return false;
        }
        
        //otherwise the backup file has been created successfully
        else {
            cout << "\"states.txt\" was successfully created!" << endl;
            IFS.close();
            return true;
        }
    }
    
    //if the file already exists, then we can close the file
    else {
        
        //since we successfully opened it, we should close it now
        IFS.close();
        return true;
    }
}

//modifies references to three vectors to add the proper strings to each
void statesFromFile(vector<string> &republicanStates, vector<string> &democratStates, vector<string> &remainingStates, vector<State> Country, vector<int> &colorVector, vector<sf::RectangleShape> &stateSquares) {

    //the input file stream for this function
    ifstream statesFile;
    //current word stored in the stream
    string currentWord;
    
    //if the "states.txt" file exists or has been created...
    if(checkStatestxt()) {
        
        //open the file using the input stream
        statesFile.open("resources/states.txt");

        while(!statesFile.eof() && toUpper(currentWord) != "REPUBLICAN:") {
            statesFile >> currentWord;
        }
        statesFile >> currentWord;
        while(!statesFile.eof() && toUpper(currentWord) != "DEMOCRAT:") {
            
            if(currentWord != toUpper("DEMOCRAT:"))
                republicanStates.push_back(currentWord);
                for(int i = 0; !Country.empty() && i < Country.size(); i++) {
                    if(toUpper(republicanStates.back()) == toUpper(Country.at(i).getName())) {
                        colorVector.at(i) = 2;
                        stateSquares.at(i).setFillColor(sf::Color(230, 10, 10));
                    }
                }
            statesFile >> currentWord;
        }
        statesFile >> currentWord;
        while(!statesFile.eof() && toUpper(currentWord) != "REMAINING:") {

            if(currentWord != toUpper("REMAINING:"))
                democratStates.push_back(currentWord);
                for(int i = 0; !Country.empty() && i < Country.size(); i++) {
                    if(toUpper(democratStates.back()) == toUpper(Country.at(i).getName())) {
                        colorVector.at(i) = 1;
                        stateSquares.at(i).setFillColor(sf::Color(10, 104, 247));
                    }
                }
            statesFile >> currentWord;
        }
        statesFile >> currentWord;
        while(!statesFile.eof()) {
            
            remainingStates.push_back(currentWord);
            for(int i = 0; !Country.empty() && i < Country.size(); i++) {
                    if(toUpper(remainingStates.back()) == toUpper(Country.at(i).getName())) {
                        colorVector.at(i) = 0;
                        stateSquares.at(i).setFillColor(sf::Color::White);
                    }
                }
            statesFile >> currentWord;
        }
    }
}

//returns a vector of states according to a vector of strings containing state names
vector<State> stringToState(vector<string> statesAsStrings, vector<State> allStates) {
    
    //final vector that will end up being returned
    vector<State> finalVector;

    //for all of the strings in the statesAsStrings vector...
    for(int i = 0; !statesAsStrings.empty() && i < statesAsStrings.size(); i++) {
        //...we have to find the matching state by name...
        for(int j = 0; !allStates.empty() && j < allStates.size(); j++) {
            //...case insensitive, of course...
            if(toUpper(statesAsStrings.at(i)) == toUpper(allStates.at(j).getName())) {
                //...then we add that state to the finalVector...
                finalVector.push_back(allStates.at(j));
                //...then remove the state from allStates, making the next iteration quicker
                allStates.erase(allStates.begin() + j);
            }
        }
    }

    //final vector is returned
    return finalVector;
}

//returns the total number of electoral votes a vector of states currently has
int totalElectorals(vector<State> states) {
    
    //total to be returned
    int total = 0;

    //simple loop to total up all of the electorals
    for(int i = 0; i < states.size(); i++) {
        total += states.at(i).getElectorals();
    }

    //returns the total electorals
    return total;
}

//returns the number of subsets of the remaining states that exist that allow a party to win; fills subsetsVector with all subsets
//currently takes about 0:30 for 22 remaining, 1:00 for 23 remaining, etc. This means 30 states is 2:10:00!!
int subsetsOfRemaining(vector<State> party, vector<State> remaining, vector< vector<State> > &subsetsVector) {
    
    //clears the subsetsVector to prevent issues with push_back
    vector< vector<State> > tempVector;
    subsetsVector = tempVector;
    
    //gets the remaining number of electoral votes needed for the party to reach 270
    int needed = 270 - totalElectorals(party);

    //if needed is negative or zero, the party has already won
    if(needed <= 0) {
        cout << "It looks like this party already has enough electoral votes to win!" << endl << endl;
        return 0;
    }

    //counter that returns the number of successful subsets
    int counter = 0;

    //loop goes from 0 to 2^(# of remaining states). This gives all subsets (bit combinations)
    for(int i = 0; !remaining.empty() && i < pow(2, remaining.size()); i++) {
        
        //this loop assigns the thisSubset boolean values to each state. It represents a single subset
        for(int j = 0; !remaining.empty() && j < remaining.size(); j++) {
            int thisBit = (i>>j) & (1);
            remaining.at(j).setThisSubset(thisBit);
        }

        //creates a vector for this subset
        vector<State> subset;

        //does the calculations for one individual subset
        for(int i = 0; !remaining.empty() && i < remaining.size(); i++) {
            
            //for each state, if it should be in this subset... 
            if(remaining.at(i).getThisSubset()) {
                
                //...pushes this state back in the current subset vector
                subset.push_back(remaining.at(i));
            }
        }

        //if the totalElectorals of this subset is at least the needed value...
        if(totalElectorals(subset) >= needed) {
            
            //puts this subset vector into subsetsVector
            subsetsVector.push_back(subset);
            counter++;
        }
    }
    //if the counter is 0, it means that this party cannot win the election
    if(counter == 0) {
        cout << "It looks like this party cannot win the election!" << endl << endl;
        return 0;            
    }
    
    return counter;
}

//finds all of the subsets that contain the lowest number of states to win, returns them in a vector of vector<State>
vector< vector<State> > allMinSubsets(vector< vector<State> > subsetsVector) {
    
    //this is the vector to be returned
    vector< vector<State> > returnVector;

    //if the subsets vector is empty, return with an empty vector
    if(subsetsVector.empty()) {
        return returnVector;
    }

    //assigns the size of the first subset to low, will be edited in loop
    int low = subsetsVector.at(0).size();
    
    //goes through all of the subsets in the vector, updating low
    for(int i = 1; i < subsetsVector.size(); i++) {
        if(subsetsVector.at(i).size() < low) {
            low = subsetsVector.at(i).size();
        }
    }

    //goes through all of the subsets in the vector, finds the ones of size low
    for(int i = 0; i < subsetsVector.size(); i++) {
        
        //if they are of the right size, they are pushed into the return vector
        if(subsetsVector.at(i).size() == low) {
            returnVector.push_back(subsetsVector.at(i));
        }
    }

    //returns the vector containing all vector<State> with the smallest size
    return returnVector;
}

//moves a state from one source and puts it back into destination
void moveState(State state, vector<State> &source, vector<State> &destination) {
    
    //for all of the states in the source...
    for(int i = 0; !source.empty() && i < source.size(); i++) {
        
        //...if the state is found in the source...
        if(source.at(i).getName() == state.getName()) {
            
            //...for all of the states in the destination section...
            for(int j = 0; !destination.empty() && j < destination.size(); j++) {
                
                //...if the name matches...
                if(destination.at(j).getName() == source.at(i).getName()) {
                    return;
                }
            }
            //reaches this if the state is not found in destination, puts the state in destination and deletes it from the source
            destination.push_back(source.at(i));
            source.erase(source.begin() + i);
            cout << "Moved " << destination.back().getName() << endl;
            return;
        }
    }
    //reaches this if the state is not found in the source
    cout << "Error, the state was not found in the source!" << endl;
}

//saves the changes made regarding states in the states.txt file
void saveStates(vector<State> republican, vector<State> democrat, vector<State> remaining) {
    
    //creates an instance of the output file stream to write to a text file
    ofstream OFS;
    
    //open the original "states.txt" file to overwrite
    OFS.open("resources/states.txt");

    //if it cannot be opened, display this message
    if(!OFS.is_open()) {
        cout << "Could not open file to save states!" << endl;
    }

    //writes all of the republican states to the file
    OFS << "Republican:" << endl << endl;
    for(int i = 0; !republican.empty() && i < republican.size(); i++) {
        OFS << republican.at(i).getName() << endl;
    }
    OFS << endl;

    //writes all of the democratic states to the file
    OFS << "Democrat:" << endl << endl;
    for(int i = 0; !democrat.empty() && i < democrat.size(); i++) {
        OFS << democrat.at(i).getName() << endl;
    }
    OFS << endl;

    //writes all of the remaining states to the file
    OFS << "Remaining:" << endl << endl;
    for(int i = 0; !remaining.empty() && i < remaining.size(); i++) {
        OFS << remaining.at(i).getName() << endl;
    }
    OFS << endl;

    //closes the file
    OFS.close();
}




//==============================FUNCTIONS FOR GUI==============================//
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
        
    sf::RectangleShape Maine_State(sf::Vector2f(50, 22.5));
    Maine_State.setOrigin(sf::Vector2f(25, 11.25));
    Maine_State.setPosition(695, 131.25);
    Maine_State.setFillColor(sf::Color::White);
    stateSquares.push_back(Maine_State);

    sf::RectangleShape Maine_Congressional_1(sf::Vector2f(22.5, 22.5));
    Maine_Congressional_1.setOrigin(sf::Vector2f(11.25, 11.25));
    Maine_Congressional_1.setPosition(681.25, 158.75);
    Maine_Congressional_1.setFillColor(sf::Color::White);
    stateSquares.push_back(Maine_Congressional_1);
        
    sf::RectangleShape Maine_Congressional_2(sf::Vector2f(22.5, 22.5));
    Maine_Congressional_2.setOrigin(sf::Vector2f(11.25, 11.25));
    Maine_Congressional_2.setPosition(708.75, 158.75);
    Maine_Congressional_2.setFillColor(sf::Color::White);
    stateSquares.push_back(Maine_Congressional_2);
    
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
        
    sf::RectangleShape Nebraska_State(sf::Vector2f(50, 22.5));
    Nebraska_State.setOrigin(sf::Vector2f(25, 11.25));
    Nebraska_State.setPosition(310, 351.25);
    Nebraska_State.setFillColor(sf::Color::White);
    stateSquares.push_back(Nebraska_State);
    
    sf::RectangleShape Nebraska_Congressional_1(sf::Vector2f(13 + 1/3, 22.5));
    Nebraska_Congressional_1.setOrigin(sf::Vector2f(6 + 2/3, 11.25));
    Nebraska_Congressional_1.setPosition(292, 378.75);
    Nebraska_Congressional_1.setFillColor(sf::Color::White);
    stateSquares.push_back(Nebraska_Congressional_1);
        
    sf::RectangleShape Nebraska_Congressional_2(sf::Vector2f(13 + 1/3, 22.5));
    Nebraska_Congressional_2.setOrigin(sf::Vector2f(6 + 2/3, 11.25));
    Nebraska_Congressional_2.setPosition(310, 378.75);
    Nebraska_Congressional_2.setFillColor(sf::Color::White);
    stateSquares.push_back(Nebraska_Congressional_2);
        
    sf::RectangleShape Nebraska_Congressional_3(sf::Vector2f(13 + 1/3, 22.5));
    Nebraska_Congressional_3.setOrigin(sf::Vector2f(6 + 2/3, 11.25));
    Nebraska_Congressional_3.setPosition(328 + 1/3, 378.75);
    Nebraska_Congressional_3.setFillColor(sf::Color::White);
    stateSquares.push_back(Nebraska_Congressional_3);
    
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

//tests to see if the mouse is currently hovered over a full state
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

//tests to see if the mouse is currently hovered over a half-state
bool testHoverOverHalfState(sf::RectangleShape state, sf::Vector2i mousePos) {

    //if both the x and y coordinates are within the state's bounding box...
    if(mousePos.x >= state.getPosition().x - 25 && mousePos.x <= state.getPosition().x + 25) {

        if(mousePos.y >= state.getPosition().y - 11.25 && mousePos.y <= state.getPosition().y + 11.25) {
            
            //...this function returns true
            return true;
        }
    }
    
    //else, it returns false
    return false;
}

//tests to see if the mouse is currently hovered over a quarter-state
bool testHoverOverQuarterState(sf::RectangleShape state, sf::Vector2i mousePos) {

    //if both the x and y coordinates are within the state's bounding box...
    if(mousePos.x >= state.getPosition().x - 11.25 && mousePos.x <= state.getPosition().x + 11.25) {

        if(mousePos.y >= state.getPosition().y - 11.25 && mousePos.y <= state.getPosition().y + 11.25) {
            
            //...this function returns true
            return true;
        }
    }
    
    //else, it returns false
    return false;
}

//tests to see if the mouse is currently hovered over a quarter-state
bool testHoverOverSixthState(sf::RectangleShape state, sf::Vector2i mousePos) {

    //if both the x and y coordinates are within the state's bounding box...
    if(mousePos.x >= state.getPosition().x - 6.6666 && mousePos.x <= state.getPosition().x + 6.6666) {

        if(mousePos.y >= state.getPosition().y - 11.25 && mousePos.y <= state.getPosition().y + 11.25) {
            
            //...this function returns true
            return true;
        }
    }
    
    //else, it returns false
    return false;
}

//returns true if the user is hovering over a button of size button1
bool testHoverOverButton1(sf::RectangleShape button1, sf::Vector2i mousePos) {
    
    //if both the x and y position of the mouse are withing the button's bounding box...
    if(mousePos.x >= button1.getPosition().x - 50 && mousePos.x <= button1.getPosition().x + 50) {

        if(mousePos.y >= button1.getPosition().y - 25 && mousePos.y <= button1.getPosition().y + 25) {

            //returns true
            return true;
        }
    }

    //else, returns false
    return false;
}

//returns true if the user is hovering over the status dot
bool testHoverOverStatusDot(sf::CircleShape dot, sf::Vector2i mousePos) {

    //if both the x and y position of the mouse are withing the dot's bounding box...
    if(mousePos.x >= dot.getPosition().x - 5 && mousePos.x <= dot.getPosition().x + 5) {

        if(mousePos.y >= dot.getPosition().y - 5 && mousePos.y <= dot.getPosition().y + 5) {

            //returns true
            return true;
        }
    }

    //else, returns false
    return false;
}

//function that enlargens a button1
void enlargeButton1(sf::RectangleShape &button, sf::Text &label) {
    button.setOrigin(sf::Vector2f(51.25, 26.25));
    button.setSize(sf::Vector2f(102.5, 52.5));
    label.setCharacterSize(21);
    sf::FloatRect statusLabelRect = label.getLocalBounds();
    label.setOrigin(statusLabelRect.left + statusLabelRect.width/2, statusLabelRect.top + statusLabelRect.height/2);
    label.setPosition(sf::Vector2f(button.getPosition().x, button.getPosition().y));
}

//function that returns a button1 to its default size
void defaultButton1(sf::RectangleShape &button, sf::Text &label) {
    button.setOrigin(sf::Vector2f(50, 25));
    button.setSize(sf::Vector2f(100, 50));
    label.setCharacterSize(20);
    sf::FloatRect statusLabelRect = label.getLocalBounds();
    label.setOrigin(statusLabelRect.left + statusLabelRect.width/2, statusLabelRect.top + statusLabelRect.height/2);
    label.setPosition(sf::Vector2f(button.getPosition().x, button.getPosition().y));
}

//function that englarges a state if the mouse is currently over it
void enlargeState(sf::RectangleShape &state) {
    
    //Maine_State condition
    if(state.getPosition().x == 695 && state.getPosition().y == 131.25) {
        state.setOrigin(26.25, 11.875);
        state.setSize(sf::Vector2f(52.5, 23.75));
    }
    //Maine_Congressional_1 condition
    else if(state.getPosition().x == 681.25 && state.getPosition().y == 158.75) {
        state.setOrigin(12.5, 12.5);
        state.setSize(sf::Vector2f(25, 25));
    }
    //Maine_Congressional_2 condition
    else if(state.getPosition().x == 708.75 && state.getPosition().y == 158.75) {
        state.setOrigin(12.5, 12.5);
        state.setSize(sf::Vector2f(25, 25));
    }
    //Nebraska_State condition
    else if(state.getPosition().x == 310 && state.getPosition().y == 351.25) {
        state.setOrigin(26.25, 11.875);
        state.setSize(sf::Vector2f(52.5, 23.75));
    }
    //Nebraska_Congressional_1 condition
    else if(state.getPosition().x == 310 && state.getPosition().y == 378.75) {
        state.setOrigin(7.9166, 12.5);
        state.setSize(sf::Vector2f(15.8333, 25));
    }
    //Nebraska_Congressional_2 condition
    else if(state.getPosition().x == 292 && state.getPosition().y == 378.75) {
        state.setOrigin(7.9166, 12.5);
        state.setSize(sf::Vector2f(15.8333, 25));
    }
    //Nebraska_Congressional_3 condition
    else if(state.getPosition().x == 328 + 1/3 && state.getPosition().y == 378.75) {
        state.setOrigin(7.9166, 12.5);
        state.setSize(sf::Vector2f(15.8333, 25));
    }
    else {
        state.setOrigin(sf::Vector2f(26.25, 26.25));
        state.setSize(sf::Vector2f(52.5, 52.5));
    }

}

//function that resets the state to its default size when not being hovered over
void defaultState(sf::RectangleShape &state) {
    
    //Maine_State condition
    if(state.getPosition().x == 695 && state.getPosition().y == 131.25) {
        state.setOrigin(25, 11.25);
        state.setSize(sf::Vector2f(50, 22.5));
    }
    //Maine_Congressional_1 condition
    else if(state.getPosition().x == 681.25 && state.getPosition().y == 158.75) {
        state.setOrigin(11.25, 11.25);
        state.setSize(sf::Vector2f(22.5, 22.5));
    }
    //Maine_Congressional_2 condition
    else if(state.getPosition().x == 708.75 && state.getPosition().y == 158.75) {
        state.setOrigin(11.25, 11.25);
        state.setSize(sf::Vector2f(22.5, 22.5));
    }
    //Nebraska_State condition
    else if(state.getPosition().x == 310 && state.getPosition().y == 351.25) {
        state.setOrigin(25, 11.25);
        state.setSize(sf::Vector2f(50, 22.5));
    }
    //Nebraska_Congressional_1 condition
    else if(state.getPosition().x == 310 && state.getPosition().y == 378.75) {
        state.setOrigin(6.6666, 11.25);
        state.setSize(sf::Vector2f(13.3333, 22.5));
    }
    //Nebraska_Congressional_2 condition
    else if(state.getPosition().x == 292 && state.getPosition().y == 378.75) {
        state.setOrigin(6.6666, 11.25);
        state.setSize(sf::Vector2f(13.3333, 22.5));
    }
    //Nebraska_Congressional_3 condition
    else if(state.getPosition().x == 328 + 1/3 && state.getPosition().y == 378.75) {
        state.setOrigin(6.6666, 11.25);
        state.setSize(sf::Vector2f(13.3333, 22.5));
    }
    else {
        state.setOrigin(sf::Vector2f(25, 25));
        state.setSize(sf::Vector2f(50, 50));
    }

}

//calculates what the size of the democrat bar should be each frame
void adjustDemocratBar(sf::RectangleShape &democratBar, vector<State> democrat) {

    //keeps the bar proportional to the number of democrat electoral votes
    int electorals = totalElectorals(democrat);
    int length = 655 * ((float)electorals / 538);
    democratBar.setSize(sf::Vector2f(length + 1, 18));
}

//calculates what the size and position of the republican bar should be each frame
void adjustRepublicanBar(sf::RectangleShape &republicanBar, vector<State> republican) {

    //keeps the bar proportional to the number of republican electoral votes
    int electorals = totalElectorals(republican);
    int length = 655 * ((float)electorals / 538);
    republicanBar.setSize(sf::Vector2f(length, 18));

    //moves the bar so that it 'grows' from the right side of the screen
    republicanBar.setPosition(sf::Vector2f(655 - length + 65, 26));
}




//==============================MAIN==============================//
int main() {
    
    //creates the render window object with the following settings
    sf::RenderWindow window(sf::VideoMode(1100, 750), "Election Outcomes Map", sf::Style::Default);

    //vectors will store the strings from the input file
    vector<string> republicanStates;
    vector<string> democratStates;
    vector<string> remainingStates;

    //creates the three empty vectors of states
    vector<State> republican;
    vector<State> democrat;
    vector<State> remaining;

    //creates a vector with all of the State objects in it
    vector<State> Country = stateVector();

    //creates an empty vector to be sent to the function that puts all of the states into it
    vector<sf::RectangleShape> stateSquares;
    allStateSquares(stateSquares);

    //creates a vector of ints that incremented and used to determing color, sets all 56 values to 0
    vector<int> colorVector;
    for(int i = 0; i < 56; i++) {
        colorVector.push_back(0);
    }

    //boolean variable that identifies if the current distribution of states has statistics calculated for it
    bool calculatedSubsets = false;

    //decides if results are preloaded or not
    string userRequest;
    while(toUpper(userRequest) != "PRELOAD" && toUpper(userRequest) != "EMPTY") {
        cout << "For a preloaded map, type \"preload\". For an empty map, type \"empty\"." << endl << "Enter: ";
        cin >> userRequest;

        if(toUpper(userRequest) == "PRELOAD") {
            
            //fills the vectors from the file
            statesFromFile(republicanStates, democratStates, remainingStates, Country, colorVector, stateSquares);

            //converts the vectors of strings into vectors of states
            republican = stringToState(republicanStates, Country);
            democrat = stringToState(democratStates, Country);
            remaining = stringToState(remainingStates, Country);
        }
        else if(toUpper(userRequest) == "EMPTY") {

            //loads the remaining vector with all of the states to begin with
            for(int i = 0; !Country.empty() && i < Country.size(); i++) {
                remaining.push_back(Country.at(i));
            }
        }
    }
    
    //creates the total bar at the top of the screen
    sf::RectangleShape totalBar(sf::Vector2f(655, 18));
    totalBar.setOrigin(327.5, 9);
    totalBar.setFillColor(sf::Color::White);
    totalBar.setPosition(sf::Vector2f(367.5 + 25, 35));

    //creates the division in the middle of the total bar
    sf::RectangleShape totalBarDivision(sf::Vector2f(5, 30));
    totalBarDivision.setFillColor(sf::Color(193, 185, 185, 150));
    totalBarDivision.setOrigin(2.5, 15);
    totalBarDivision.setPosition(sf::Vector2f(367.5 + 25, 35));

    //creates the total bar at the top of the screen for democrats
    sf::RectangleShape democratBar;
    democratBar.setFillColor(sf::Color(10, 104, 247));
    democratBar.setPosition(sf::Vector2f(65, 26));

    //creates the total bar at the top of the screen for republicans
    sf::RectangleShape republicanBar;
    republicanBar.setFillColor(sf::Color(230, 10, 10));

    //test text for labels for the states
    sf::Font stateLabelFont;
    stateLabelFont.loadFromFile("26601088587.ttf");
    sf::Text stateLabel;
    sf::FloatRect stateLabelRect;
    stateLabel.setString("");
    stateLabel.setFont(stateLabelFont);
    stateLabel.setCharacterSize(40);
    stateLabel.setFillColor(sf::Color::White);
    
    //calculates the bounds of the enclosing rectangle, origin, and position after the string
    stateLabelRect = stateLabel.getLocalBounds();
    stateLabel.setOrigin(stateLabelRect.left + stateLabelRect.width/2, stateLabelRect.top + stateLabelRect.height/2);
    stateLabel.setPosition(sf::Vector2f(367.5 + 26, 80));

    //creates the background for the control panel to the right of the map
    sf::RectangleShape controlBack;
    controlBack.setSize(sf::Vector2f(325, 700));
    controlBack.setPosition(sf::Vector2f(741, 31));
    controlBack.setFillColor(sf::Color(190, 190, 190));
    controlBack.setOutlineColor(sf::Color(114, 132, 140));
    controlBack.setOutlineThickness(5.f);

    //creates the label for the control panel
    sf::Text controlLabel;
    controlLabel.setFont(stateLabelFont);
    controlLabel.setString("Controls");
    controlLabel.setCharacterSize(30);
    controlLabel.setFillColor(sf::Color::Black);
    sf::FloatRect controlLabelRect;
    controlLabelRect = controlLabel.getLocalBounds();
    controlLabel.setOrigin(controlLabelRect.left + controlLabelRect.width/2, controlLabelRect.top + controlLabelRect.height/2);
    controlLabel.setPosition(sf::Vector2f(controlBack.getPosition().x + (controlBack.getSize().x/2), 57));
    
    //creates the background for the screen of text
    sf::RectangleShape textScreenBack;
    textScreenBack.setSize(sf::Vector2f(645, 120));
    textScreenBack.setOrigin(sf::Vector2f(327.5, 60));
    textScreenBack.setPosition(sf::Vector2f(totalBar.getPosition().x + 5, 671));
    textScreenBack.setFillColor(sf::Color::Black);
    textScreenBack.setOutlineColor(sf::Color::White);
    textScreenBack.setOutlineThickness(5);

    //creates the button for "showStatus"
    sf::RectangleShape showStatusButton;
    showStatusButton.setSize(sf::Vector2f(100, 50));
    showStatusButton.setOrigin(sf::Vector2f(50, 25));
    showStatusButton.setFillColor(sf::Color(114, 132, 140));
    showStatusButton.setPosition(controlBack.getPosition().x + controlBack.getSize().x/5, 115);
    showStatusButton.setOutlineColor(sf::Color::Black);
    showStatusButton.setOutlineThickness(2);

    //creates the label for the "showStatus" button
    sf::Text showStatusLabel;
    showStatusLabel.setFont(stateLabelFont);
    showStatusLabel.setString("Status");
    showStatusLabel.setCharacterSize(20);
    showStatusLabel.setFillColor(sf::Color::Black);
    sf::FloatRect statusLabelRect;
    statusLabelRect = showStatusLabel.getLocalBounds();
    showStatusLabel.setOrigin(statusLabelRect.left + statusLabelRect.width/2, statusLabelRect.top + statusLabelRect.height/2);
    showStatusLabel.setPosition(sf::Vector2f(showStatusButton.getPosition().x, showStatusButton.getPosition().y));

    //creates the small dot at the top right of the screen, notifies state of calculations
    sf::CircleShape statusDot;
    statusDot.setFillColor(sf::Color(230, 10, 10));
    statusDot.setRadius(6);
    sf::FloatRect dotRect = statusDot.getLocalBounds();
    statusDot.setOrigin(sf::Vector2f(dotRect.left + dotRect.width/2, dotRect.top + dotRect.height/2));
    statusDot.setPosition(sf::Vector2f(1085, 15));

    //game loop that continues for as long as the window is open
    while(window.isOpen()) {
        
        //creates the mouse object for tracking the position of the moust in the window
        sf::Vector2i mousePos = sf::Mouse::getPosition(window);
        
        //maps the pixels to coordinates to use when resizing the window - IMPORTANT!
        sf::Vector2f coord_pos2 = window.mapPixelToCoords(mousePos);
        sf::Vector2i coord_pos = (sf::Vector2i)(coord_pos2);

        //creates an event object called event
        sf::Event event;
        //==============================POLLING LOOP==================================//
        while(window.pollEvent(event)) {
            
            //if the event indicates closing the window...
            if(event.type == sf::Event::Closed) {
                //...close the window
                window.close();
                cout << "Successfully closed the window." << endl;
            }
            
            //if the mouse is moved...
            if(event.type == sf::Event::MouseMoved) {
                
                //determines if the mouse is hovered over the status dot
                if(testHoverOverStatusDot(statusDot, coord_pos)) {

                    cout << "This is the status dot." << endl;

                }
                else {

                }

                //determines if the mouse is over the showStatus button
                if(testHoverOverButton1(showStatusButton, coord_pos)) {

                    //if so, enlargen the button
                    enlargeButton1(showStatusButton, showStatusLabel);
                }
                else {

                    //otherwise, return the button to its default size
                    defaultButton1(showStatusButton, showStatusLabel);
                }

                //for each of the states in the stateSquares vectors...
                for(int i = 0; !stateSquares.empty() && i < stateSquares.size(); i++) {
                    
                    //half-state condition
                    if(i == 19 || i == 29) {
                        //...if the mouse is hovered over that state...
                        if(testHoverOverHalfState(stateSquares.at(i), coord_pos)) {

                            //...enlarge the state in the window
                            enlargeState(stateSquares.at(i));
                        }
                        else {

                            //otherwise, reset it to its default size
                            defaultState(stateSquares.at(i));
                        }
                    }
                    //quarter-state condition
                    else if(i == 20 || i == 21) {
                        //...if the mouse is hovered over that state...
                        if(testHoverOverQuarterState(stateSquares.at(i), coord_pos)) {

                            //...enlarge the state in the window
                            enlargeState(stateSquares.at(i));
                        }
                        else {

                            //otherwise, reset it to its default size
                            defaultState(stateSquares.at(i));
                        }
                    }
                    //sixth-state condition
                    else if(i == 30 || i == 31 || i == 32) {
                        //...if the mouse is hovered over that state...
                        if(testHoverOverSixthState(stateSquares.at(i), coord_pos)) {

                            //...enlarge the state in the window
                            enlargeState(stateSquares.at(i));
                        }
                        else {

                            //otherwise, reset it to its default size
                            defaultState(stateSquares.at(i));
                        }
                    }
                    else {
                        //...if the mouse is hovered over that state...
                        if(testHoverOverState(stateSquares.at(i), coord_pos)) {

                            //...enlarge the state in the window
                            enlargeState(stateSquares.at(i));
                        }
                        else {

                            //otherwise, reset it to its default size
                            defaultState(stateSquares.at(i));
                        }
                    }

                    //decides which state to display, or none at all
                    if( (((i == 19 || i == 29) && (testHoverOverHalfState(stateSquares.at(i), coord_pos))) || ((i == 20 || i == 21) && (testHoverOverQuarterState(stateSquares.at(i), coord_pos))) || ((i == 30 || i == 31 || i == 32) && (testHoverOverSixthState(stateSquares.at(i), coord_pos))) || ((i != 19 && i != 20 && i != 21 && i != 29 && i != 30 && i != 31 && i != 32) && (testHoverOverState(stateSquares.at(i), coord_pos))))   ) {

                        //changes the state label to whatever state is being hovered over
                        stateLabel.setString(Country.at(i).getDisplayName());
                        stateLabelRect = stateLabel.getLocalBounds();
                        stateLabel.setOrigin(stateLabelRect.left + stateLabelRect.width/2, stateLabelRect.top + stateLabelRect.height/2);
                        break;
                    }
                    else {

                        //changes the state label to blank
                        stateLabel.setString("");
                        stateLabelRect = stateLabel.getLocalBounds();
                        stateLabel.setOrigin(stateLabelRect.left + stateLabelRect.width/2, stateLabelRect.top + stateLabelRect.height/2);
                    }
                }
            }

            //if the event indicates clicking with the mouse...
            if(event.type == sf::Event::MouseButtonPressed) {
                
                //check to see if a button has been pressed
                if(testHoverOverButton1(showStatusButton, coord_pos)) {
                    cout << "You clicked the Show Status button!" << endl;
                }

                //...for each of the states in the stateSquares vector...
                for(int i = 0; !stateSquares.empty() && i < stateSquares.size(); i++) {
                    
                    //Half-State test condition
                    if(i == 19 || i == 29) {
                        if(testHoverOverHalfState(stateSquares.at(i), coord_pos)) {
                        
                            //increment the number in position i of the color vector
                            colorVector.at(i) += 1;

                            //sets state's color base on integer value
                            if(colorVector.at(i) % 3 == 0) {
                                stateSquares.at(i).setFillColor(sf::Color::White);
                                moveState(Country.at(i), republican, remaining);
                            }
                            if(colorVector.at(i) % 3 == 1) {
                                stateSquares.at(i).setFillColor(sf::Color(10, 104, 247));
                                moveState(Country.at(i), remaining, democrat);
                            }
                            if(colorVector.at(i) % 3 == 2) {
                                stateSquares.at(i).setFillColor(sf::Color(230, 10, 10));
                                moveState(Country.at(i), democrat, republican);
                            }
                        }
                    }
                    else if(i == 20 || i == 21) {
                        if(testHoverOverQuarterState(stateSquares.at(i), coord_pos)) {
                        
                            //increment the number in position i of the color vector
                            colorVector.at(i) += 1;

                            //sets state's color base on integer value
                            if(colorVector.at(i) % 3 == 0) {
                                stateSquares.at(i).setFillColor(sf::Color::White);
                                moveState(Country.at(i), republican, remaining);
                            }
                            if(colorVector.at(i) % 3 == 1) {
                                stateSquares.at(i).setFillColor(sf::Color(10, 104, 247));
                                moveState(Country.at(i), remaining, democrat);
                            }
                            if(colorVector.at(i) % 3 == 2) {
                                stateSquares.at(i).setFillColor(sf::Color(230, 10, 10));
                                moveState(Country.at(i), democrat, republican);
                            }
                        }
                    }
                    else if(i == 30 || i == 31 || i == 32) {
                        if(testHoverOverSixthState(stateSquares.at(i), coord_pos)) {
                        
                            //increment the number in position i of the color vector
                            colorVector.at(i) += 1;

                            //sets state's color base on integer value
                            if(colorVector.at(i) % 3 == 0) {
                                stateSquares.at(i).setFillColor(sf::Color::White);
                                moveState(Country.at(i), republican, remaining);
                            }
                            if(colorVector.at(i) % 3 == 1) {
                                stateSquares.at(i).setFillColor(sf::Color(10, 104, 247));
                                moveState(Country.at(i), remaining, democrat);
                            }
                            if(colorVector.at(i) % 3 == 2) {
                                stateSquares.at(i).setFillColor(sf::Color(230, 10, 10));
                                moveState(Country.at(i), democrat, republican);
                            }
                        }
                    }
                    else {
                        //...if the mouse is over the square...
                        if(testHoverOverState(stateSquares.at(i), coord_pos)) {
                        
                            //increment the number in position i of the color vector
                            colorVector.at(i) += 1;

                            //sets state's color base on integer value
                            if(colorVector.at(i) % 3 == 0) {
                                stateSquares.at(i).setFillColor(sf::Color::White);
                                moveState(Country.at(i), republican, remaining);
                            }
                            if(colorVector.at(i) % 3 == 1) {
                                stateSquares.at(i).setFillColor(sf::Color(10, 104, 247));
                                moveState(Country.at(i), remaining, democrat);
                            }
                            if(colorVector.at(i) % 3 == 2) {
                                stateSquares.at(i).setFillColor(sf::Color(230, 10, 10));
                                moveState(Country.at(i), democrat, republican);
                            }
                        }
                    }  
                }
                //...use the mouse's position to display the coordinates in the terminal
                sf::Vector2i currentMosPos = sf::Mouse::getPosition(window);
                cout << currentMosPos.x << " " << currentMosPos.y << endl;
            }
            
        }

        //adjusts the size of the two parties' total bars
        adjustDemocratBar(democratBar, democrat);
        adjustRepublicanBar(republicanBar, republican);

        //updates the color of the status bar
        if(calculatedSubsets)
            statusDot.setFillColor(sf::Color::Green);
        else if(remaining.size() > 20)
            statusDot.setFillColor(sf::Color(230, 10, 10));
        else if(remaining.size() <= 20)
            statusDot.setFillColor(sf::Color::Yellow);
        

        //clears the window and draws all of the states / other assets
        window.clear();
        for(int i = 0; !stateSquares.empty() && i < stateSquares.size(); i++) {
            window.draw(stateSquares.at(i));
        }
        window.draw(totalBar);
        window.draw(democratBar);
        window.draw(republicanBar);
        window.draw(totalBarDivision);
        window.draw(stateLabel);
        window.draw(controlBack);
        window.draw(controlLabel);
        window.draw(textScreenBack);
        window.draw(showStatusButton);
        window.draw(showStatusLabel);
        window.draw(statusDot);
        window.display();
    }
    return 0;
}