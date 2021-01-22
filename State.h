#include <string>
#include <iostream>

#ifndef STATE_H
#define STATE_H

using namespace std;

class State {
    
   private:
   string name;                                                //the name of the state
   int electorals;                                             //the number of electoral votes the state has
   bool untraditional;                                         //true if the state does not give all votes to one candidate

   public:
   State();                                                    //default constructor for state object
   State(string name, int electorals, bool untraditional);     //paramaterized constructor for state object
   ~State();                                                   //destructor for state object
   void setName(string name);                                             //sets the name of the state
   void setElectorals(int electorals);                                       //sets the number of electoral votes for the state
   void setUntraditional(bool untraditional);                                    //sets if the state has an untraditional vote division system
   string getName();                                           //returns the name of the state
   int getElectorals();                                        //returns the number of electoral votes the state has
   bool getUntraditional();                                    //returns if the state has an untraditional vote distribution system
};

#endif