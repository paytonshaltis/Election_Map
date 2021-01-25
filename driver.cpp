#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "State.h"
#include <cmath>
#include <time.h>
#include <ctime>

using namespace std;

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

//returns a vector with all of the 51 states in alphabetical order
vector<State> stateVector() {
    
    //vector to be returned with 51 states
    vector<State> finalVector;

    //creates 51 state objects, initialized with their name, electoral, and untraditional values
    State Alabama = State("Alabama", 9, false);
    State Alaska = State("Alaska", 3, false);
    State Arizona = State("Arizona", 11, false);
    State Arkansas = State("Arkansas", 6, false);
    State California = State("California", 55, false);
    State Colorado = State("Colorado", 9, false);
    State Connecticut = State("Connecticut", 7, false);
    State Delaware = State("Delaware", 3, false);
    State District_Of_Columbia = State("District_Of_Columbia", 3, false);
    State Florida = State("Florida", 29, false);
    State Georgia = State("Georgia", 16, false);
    State Hawaii = State("Hawaii", 4, false);
    State Idaho = State("Idaho", 4, false);
    State Illinois = State("Illinois", 20, false);
    State Indiana = State("Indiana", 11, false);
    State Iowa = State("Iowa", 6, false);
    State Kansas = State("Kansas", 6, false);
    State Kentucky = State("Kentucky", 8, false);
    State Louisiana = State("Louisiana", 8, false);
    State Maine = State("Maine", 4, true);
    State Maryland = State("Maryland", 10, false);
    State Massachusetts = State("Massachusetts", 11, false);
    State Michigan = State("Michigan", 16, false);
    State Minnesota = State("Minnesota", 10, false);
    State Mississippi = State("Mississippi", 6, false);
    State Missouri = State("Missouri", 10, false);
    State Montana = State("Montana", 3, false) ;
    State Nebraska = State("Nebraska", 5, true);
    State Nevada = State("Nevada", 6, false);
    State New_Hampshire = State("New_Hampshire", 4, false);
    State New_Jersey = State("New_Jersey", 14, false);
    State New_Mexico = State("New_Mexico", 5, false);
    State New_York = State("New_York", 29, false);
    State North_Carolina = State("North_Carolina", 15, false);
    State North_Dakota = State("North_Dakota", 3, false);
    State Ohio = State("Ohio", 18, false);
    State Oklahoma = State("Oklahoma", 7, false);
    State Oregon = State("Oregon", 7, false);
    State Pennsylvania = State("Pennsylvania", 20, false);
    State Rhode_Island = State("Rhode_Island", 4, false);
    State South_Carolina = State("South_Carolina", 9, false);
    State South_Dakota = State("South_Dakota", 3, false);
    State Tennessee = State("Tennessee", 11, false);
    State Texas = State("Texas", 38, false);
    State Utah = State("Utah", 6, false);
    State Vermont = State("Vermont", 3, false);
    State Virginia = State("Virginia", 13, false);
    State Washington = State("Washington", 12, false);
    State West_Virginia = State("West_Virginia", 5, false);
    State Wisconsin = State("Wisconsin", 10, false);
    State Wyoming = State("Wyoming", 3, false);
    
    //insert each of the 51 states into the vector to be returned
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
    finalVector.push_back(Maine);
    finalVector.push_back(Maryland);
    finalVector.push_back(Massachusetts);
    finalVector.push_back(Michigan);
    finalVector.push_back(Minnesota);
    finalVector.push_back(Mississippi);
    finalVector.push_back(Missouri);
    finalVector.push_back(Montana);
    finalVector.push_back(Nebraska);
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
    OFS << "Maine 4" << endl;
    OFS << "Maryland" << endl;
    OFS << "Massachusetts" << endl;
    OFS << "Michigan" << endl;
    OFS << "Minnesota" << endl;
    OFS << "Mississippi" << endl;
    OFS << "Missouri" << endl;
    OFS << "Montana" << endl;
    OFS << "Nebraska 5" << endl;
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
void statesFromFile(vector<string> &republicanStates, vector<string> &democratStates, vector<string> &remainingStates) {

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
            statesFile >> currentWord;
        }
        statesFile >> currentWord;
        while(!statesFile.eof() && toUpper(currentWord) != "REMAINING:") {

            if(currentWord != toUpper("REMAINING:"))
                democratStates.push_back(currentWord);
            statesFile >> currentWord;
        }
        statesFile >> currentWord;
        while(!statesFile.eof()) {
            
            remainingStates.push_back(currentWord);
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
                //if the state entered was an untraditional one, we must handle it.
                if(finalVector.back().getUntraditional()) {
                    //sets the electorals of this state to the integer following it
                    int temp = stoi(statesAsStrings.at(i+1));
                    finalVector.back().setElectorals(temp);
                    //increment to the next word in the vector of strings
                    i++;
                }
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
        cout << "It looks like this party already has enough electoral votes to win!" << endl;
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
            //for each state, if it is in this subset... 
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
    return counter;
}

//displays all of the possible winning subsets of remaining states
void displayWinningSubsets(vector<State> party, vector<State> remaining, vector< vector<State> > &subsetsVector) {
    //clears the subsetsVector to prevent issues with push_back
    vector< vector<State> > tempVector;
    subsetsVector = tempVector;
    
    //calculates the number of winning subsets, and modifies the subsetsVector accordingly
    subsetsOfRemaining(party, remaining, subsetsVector);

    //displays all of the subsets of states created from the remaining states
    for(int i = 0; !subsetsVector.empty() && i < subsetsVector.size(); i++) {
        cout << "Subset #" << i + 1 << ": ";
        for(int j = 0; !subsetsVector.at(i).empty() && j < subsetsVector.at(i).size(); j++) {
            cout << subsetsVector.at(i).at(j).getName() << " ";
        }
        cout << endl;
    }
}

//finds all of the subsets that contain the lowest number of states to win, returns them in a vector of vector<State>s
vector< vector<State> > allMinSubsets(vector< vector<State> > subsetsVector) {
    
    //adds all vectors of size low to the returnVector
    vector< vector<State> > returnVector;

    if(subsetsVector.empty()) {
        return returnVector;
    }

    //finds the smallest subset in the vector, stores in low
    int low = subsetsVector.at(0).size();
    
    for(int i = 1; i < subsetsVector.size(); i++) {
        if(subsetsVector.at(i).size() < low) {
            low = subsetsVector.at(i).size();
        }
    }

    for(int i = 0; i < subsetsVector.size(); i++) {
        if(subsetsVector.at(i).size() == low) {
            returnVector.push_back(subsetsVector.at(i));
        }
    }

    //returns the vector containing all vector<State> with the smallest size
    return returnVector;
}

//moves a state from one source and puts it back into destination
void moveState(string stateName, vector<State> &source, vector<State> &destination) {
    
    //for all of the states in the source...
    for(int i = 0; !source.empty() && i < source.size(); i++) {
        //...if the state is found in the source...
        if(toUpper(source.at(i).getName()) == toUpper(stateName)) {
            //...for all of the states in the destination section...
            for(int j = 0; !destination.empty() && j < destination.size(); j++) {
                //...if the name matches AND it is an untraditional...
                if(destination.at(j).getName() == source.at(i).getName() && source.at(i).getUntraditional()) {
                    cout << "Got here 1" << endl;
                    //...update the electoral count of the state in destination...
                    destination.at(j).setElectorals(destination.at(j).getElectorals() + source.at(i).getElectorals());
                    //...remove it from the source
                    source.erase(source.begin() + i);
                    return;
                }
            }
            //reaches this if the state is not found in destination
            cout << "Got here 2" << endl;
            //puts the state in destination and deletes it from the source
            destination.push_back(source.at(i));
            source.erase(source.begin() + i);
            return;
        }
    }
}

//saves the changes made regarding states in the states.txt file
void saveStates(vector<State> republican, vector<State> democrat, vector<State> remaining) {
    ofstream OFS;
    OFS.open("resources/states-modified.txt");

    if(!OFS.is_open()) {
        cout << "Could not open file to save states!" << endl;
    }

    OFS << "Republican:" << endl << endl;
    for(int i = 0; !republican.empty() && i < republican.size(); i++) {
        OFS << republican.at(i).getName();
        if(republican.at(i).getUntraditional())
            OFS << " " << republican.at(i).getElectorals();
        OFS << endl;
    }
    OFS << endl;

    OFS << "Democrat:" << endl << endl;
    for(int i = 0; !democrat.empty() && i < democrat.size(); i++) {
        OFS << democrat.at(i).getName();
        if(democrat.at(i).getUntraditional())
            OFS << " " << democrat.at(i).getElectorals();
        OFS << endl;
    }
    OFS << endl;

    OFS << "Remaining:" << endl << endl;
    for(int i = 0; !remaining.empty() && i < remaining.size(); i++) {
        OFS << remaining.at(i).getName();
        if(remaining.at(i).getUntraditional())
            OFS << " " << remaining.at(i).getElectorals();
        OFS << endl;
    }
    OFS << endl;

    OFS.close();
}

int main() {
    
    //creates a vector of all 51 states called 'Country'
    vector<State> Country = stateVector();

    //vectors will store the strings from the input file
    vector<string> republicanStates;
    vector<string> democratStates;
    vector<string> remainingStates;
    statesFromFile(republicanStates, democratStates, remainingStates);

    //converts the vectors of strings into vectors of states
    vector<State> republican = stringToState(republicanStates, Country);
    vector<State> democrat = stringToState(democratStates, Country);
    vector<State> remaining = stringToState(remainingStates, Country);

    //outputs the number of states in each category (won't add up to 51 because of untraditionals)
    cout << endl << "Republican States: " << republican.size() << endl;
    cout << "Democratic States: " << democrat.size() << endl;
    cout << "Remaining States: " << remaining.size() << endl << endl; 
    
    //outputs the total number of electoral votes each vector has
    cout << "Republican Electoral Votes: " << totalElectorals(republican) << endl;
    cout << "Democratic Electoral Votes: " << totalElectorals(democrat) << endl;
    cout << "Remaining Electoral Votes: " << totalElectorals(remaining) << endl << endl;
    /*
    //displays the number of subsets of the remaining states can be created
    vector< vector<State> > subsetsVectorDemocrat;
    vector< vector<State> > subsetsVectorRepublican;
    cout << "With " << remaining.size() << " remaining states, there are " << subsetsOfRemaining(democrat, remaining, subsetsVectorDemocrat) << " subsets that can win the election for Democrats." << endl;
    cout << "With " << remaining.size() << " remaining states, there are " << subsetsOfRemaining(republican, remaining, subsetsVectorRepublican) << " subsets that can win the election for Republicans." << endl << endl;
    
    //displays all of the subsets that win the election
    displayWinningSubsets(republican, remaining, subsetsVectorRepublican);
    displayWinningSubsets(democrat, remaining, subsetsVectorDemocrat);
    
    //calculates and displays the number of minimum states each needs to win, and what the possibilities are for each of them
    vector< vector<State> > republicanMin = allMinSubsets(subsetsVectorRepublican);
    vector< vector<State> > democratMin = allMinSubsets(subsetsVectorDemocrat);

    if(!republicanMin.empty()) {
        cout << "For Republicans, the minimum number of states that can win them the election is "  << republicanMin.at(0).size() << endl;
        cout << "They have " << republicanMin.size() << " subsets that contain " << republicanMin.at(0).size() << " states." << endl << endl;

        for(int i = 0; !republicanMin.empty() && i < republicanMin.size(); i++) {
            cout << "Subset #" << i+1 << ": ";
            for(int j = 0; j < republicanMin.at(i).size(); j++) {
                cout << republicanMin.at(i).at(j).getName() << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    if(!democratMin.empty()) {
    cout << "For Democrats, the minimum number of states that can win them the election is "  << democratMin.at(0).size() << endl;
    cout << "They have " << democratMin.size() << " subsets that contain " << democratMin.at(0).size() << " states." << endl << endl;

    for(int i = 0; !democratMin.empty() && i < democratMin.size(); i++) {
        cout << "Subset #" << i+1 << ": ";
        for(int j = 0; j < democratMin.at(i).size(); j++) {
            cout << democratMin.at(i).at(j).getName() << " ";
        }
        cout << endl;
    }
    cout << endl;
    }
    */

    moveState("Nebraska", republican, remaining);
    moveState("Oklahoma", republican, democrat);


    //outputs the number of states in each category (won't add up to 51 because of untraditionals)
    cout << endl << "Republican States: " << republican.size() << endl;
    cout << "Democratic States: " << democrat.size() << endl;
    cout << "Remaining States: " << remaining.size() << endl << endl; 
    
    //outputs the total number of electoral votes each vector has
    cout << "Republican Electoral Votes: " << totalElectorals(republican) << endl;
    cout << "Democratic Electoral Votes: " << totalElectorals(democrat) << endl;
    cout << "Remaining Electoral Votes: " << totalElectorals(remaining) << endl << endl;

    saveStates(republican, democrat, remaining);

    return 0;
}