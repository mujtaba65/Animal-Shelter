#ifndef MATCH_H
#define MATCH_H
using namespace std;
#include "Client.h"
#include "Animal.h"

/*
The purpose of match class is to take an animal pointer and client pointer. Match the animals characteristics with clients criteria, if 2 characteristics match score is to be added, however the score is computed inside the shelter compute function. 2 getter functions for the data members. The scoreCounter keeps track of score.

*/

class Match
{
  public:
    	Match(Animal* = NULL , Client* = NULL , float = 0.0f);
    	float getScore();
    	string getClientId();
    	void print();
    
  private:
	Animal* animalMatch;
	Client* clientMatch;
	float scoreCounter;

};

#endif
