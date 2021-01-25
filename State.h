#include <string>
#include <iostream>

#ifndef STATE_H
#define STATE_H

using namespace std;

class State {
    
   private:
   string name;                                                //the name of the state
   int electorals;                                             //the number of electoral votes the state has
   bool thisSubset;                                            //true if the state is being included in the subset

   public:
   State();                                                    //default constructor for state object
   State(string name, int electorals);                         //paramaterized constructor for state object
   ~State();                                                   //destructor for state object
   void setName(string name);                                  //sets the name of the state
   void setElectorals(int electorals);                         //sets the number of electoral votes for the state
   void setThisSubset(bool thisSubset);                        //sets if the state is being included in the subset
   string getName();                                           //returns the name of the state
   int getElectorals();                                        //returns the number of electoral votes the state has
   bool getThisSubset();                                       //returns if the state is being included in the subset
};

#endif