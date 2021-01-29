#include <string>
#include <iostream>
#include "State.h"

using namespace std;

//default constructor
State::State() {
    this->name = "no_name";
    this->electorals = 0;
    this->thisSubset = false;
}

//paramaterized constructor for state object
State::State(string name, int electorals) {
    this->name = name;
    this->electorals = electorals;
    this->thisSubset = false;
}

//destructor for state object
State::~State() {

}

//sets the name of the state
void State::setName(string name) {
    this->name = name;
}

//sets the number of electoral votes for the state
void State::setElectorals(int electorals) {
    this->electorals = electorals;
}

//sets if the state is being included in the subset
void State::setThisSubset(bool thisSubset) {
    this->thisSubset = thisSubset;
}

//returns the name of the state
string State::getName() {
    return name;
}

//returns the display name of the state
string State::getDisplayName() {
    string stringToReturn = "";
    for(int i = 0; i < this->getName().size(); i++) {
        if(this->getName().at(i) == '_') {
            stringToReturn += " ";
        }
        else {
            stringToReturn += this->getName().at(i);
        }
    }
    return stringToReturn;
}

//returns the number of electoral votes the state has
int State::getElectorals() {
    return electorals;
}

//returns if the state is being included in the subset
bool State::getThisSubset() {
    return thisSubset;
}