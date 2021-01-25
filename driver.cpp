#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "State.h"
#include <cmath>
#include <time.h>
#include <ctime>

using namespace std;

//DONE
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

//DONE
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

//DONE
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

//DONE
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

//DONE
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

//DONE
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

//DONE
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

//DONE
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

//DONE
//displays all of the possible winning subsets of remaining states
//be sure to call subsetsOfRemaining() with the same subsetsVector BEFORE any calls to this function!
void displayWinningSubsets(vector<State> party, vector<State> remaining, vector< vector<State> > &subsetsVector) {
    
    //displays all of the subsets of states created from the remaining states
    for(int i = 0; !subsetsVector.empty() && i < subsetsVector.size(); i++) {
        cout << "Subset #" << i + 1 << ": ";
        for(int j = 0; !subsetsVector.at(i).empty() && j < subsetsVector.at(i).size(); j++) {
            cout << subsetsVector.at(i).at(j).getName() << " ";
        }
        cout << endl;
    }
}

//DONE
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

//DONE
//moves a state from one source and puts it back into destination
void moveState(string stateName, vector<State> &source, vector<State> &destination) {
    
    //for all of the states in the source...
    for(int i = 0; !source.empty() && i < source.size(); i++) {
        
        //...if the state is found in the source...
        if(toUpper(source.at(i).getName()) == toUpper(stateName)) {
            
            //...for all of the states in the destination section...
            for(int j = 0; !destination.empty() && j < destination.size(); j++) {
                
                //...if the name matches...
                if(destination.at(j).getName() == source.at(i).getName()) {
                    cout << "Error, the state was found in the destination too!" << endl;
                    return;
                }
            }
            //reaches this if the state is not found in destination, puts the state in destination and deletes it from the source
            destination.push_back(source.at(i));
            source.erase(source.begin() + i);
            return;
        }
    }
    //reaches this if the state is not found in the source
    cout << "Error, the state was not found in the source!" << endl;
}

//DONE
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

int main() {
    
    //creates a vector of all 56 states called 'Country'
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

    //outputs the number of states in each category
    cout << endl << "Republican States: " << republican.size() << endl;
    cout << "Democratic States: " << democrat.size() << endl;
    cout << "Remaining States: " << remaining.size() << endl << endl; 
    
    //outputs the total number of electoral votes each vector has
    cout << "Republican Electoral Votes: " << totalElectorals(republican) << endl;
    cout << "Democratic Electoral Votes: " << totalElectorals(democrat) << endl;
    cout << "Remaining Electoral Votes: " << totalElectorals(remaining) << endl << endl;
    
    //displays the number of subsets of the remaining states that can win the election
    vector< vector<State> > subsetsVectorDemocrat;
    vector< vector<State> > subsetsVectorRepublican;
    int rsubs = subsetsOfRemaining(democrat, remaining, subsetsVectorDemocrat);
    int dsubs = subsetsOfRemaining(republican, remaining, subsetsVectorRepublican);
    cout << "With " << remaining.size() << " remaining states, there are " << rsubs << " subsets that can win the election for Democrats." << endl;
    cout << "With " << remaining.size() << " remaining states, there are " << dsubs << " subsets that can win the election for Republicans." << endl << endl;
    
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

    return 0;
}