#include <string>
#include <iostream>
#include <vector>
#include "State.h"

using namespace std;

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
    State Minesota = State("Minesota", 10, false);
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
    finalVector.push_back(Minesota);
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


int main() {

    vector<State> Country = stateVector();
    int total = 0;
    for(int i = 0; i < 51; i++) {
        total = total + Country.at(i).getElectorals();
    }
    cout << total << endl;

    return 0;
}