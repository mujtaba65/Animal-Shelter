#include<iostream>
#include<string>
using namespace std;
#include <iomanip>
#include <cmath>

#include "Match.h"


Match::Match(Animal* a, Client* c, float s)
	: scoreCounter(s), animalMatch(a), clientMatch(c)
{
	//cout<<"inside the match ctor" << endl;

}


float Match::getScore()
{
	return scoreCounter;
}

string Match::getClientId()
{
	return clientMatch->getUniqueChar();
}

void Match::print()
{
	cout << setw(10) << left << getClientId() << setw(10) << left << clientMatch->getClientName() << "  : " ;
	cout << setw(10) << left << animalMatch->getUniqueChar() << setw(10) << left << animalMatch->getName() << "     :";
	int scorePercentage = (scoreCounter*5);
	
	cout << "    " << setprecision(4)<<(float) scoreCounter << "  (" << round(scorePercentage) << "%)" <<endl;
	
}
