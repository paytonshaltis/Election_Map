#include <string>
#include <iostream>
#include "State.h"

using namespace std;

//default constructor
State::State() {
    this->name = "no_name";
    this->electorals = 0;
    this->untraditional = false;
    //cout << "State created with default constructor" << endl;
}

//paramaterized constructor for state object
State::State(string name, int electorals, bool untraditional) {
    this->name = name;
    this->electorals = electorals;
    this->untraditional = untraditional;
    //cout << "State created with paramaterized constructor." << endl;
}

//destructor for state object
State::~State() {
    //cout << "Deleted a state object" << endl;
}

//sets the name of the state
void State::setName(string name) {
    this->name = name;
}

//sets the number of electoral votes for the state
void State::setElectorals(int electorals) {
    this->electorals = electorals;
}

//sets if the state has an untraditional vote division system
void State::setUntraditional(bool untraditional) {
    this->untraditional = untraditional;
}

//returns the name of the state
string State::getName() {
    return name;
}

//returns the number of electoral votes the state has
int State::getElectorals() {
    return electorals;
}

//returns if the state has an untraditional vote distribution system
bool State::getUntraditional() {
    return untraditional;
}