#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

#include "Animal.h"

int Animal::nextId = 1001;

Animal::Animal(SpeciesType s, string bree, string col, string n, string gend, int y, int mons)
	: specy(s), Identifiable("A", nextId), aniName(n), breed(bree), gender(gend), colour(col), age((y*12)+mons)
{
	nextId++;
	//cout<< "in animal ctor"<< endl;
}
Animal::~Animal()
{
	//cout << "in animals dtor" << endl;
}

string Animal::getName()
{
	return aniName;
}
string Animal::getBreed()
{
	return breed;
}

string Animal::getGender()
{
	return gender;
}
string Animal::getSpecies()
{
	string x;
	if(specy == C_DOG)
	{ 
		x ="Dog";
		return x;
	}else if(specy == C_CAT)
	{ 
		x= "Cat";
		return x;
	}else if(specy == C_RABBIT) 
	{
		x= "Rabbit";
		return x;
	}else if(specy == C_BIRD)
	{
		x= "Bird";
		return x;
	}
		
	x ="Other";	
	return x;

}

int Animal::getAge()
{
	return age;
}
void Animal::print()
{
	string s;
	s = getSpecies();
	int years = age /12;
	int months = age - (years*12);
	cout << setw(10) << left << Identifiable::uniqueChar << setw(10) << left << s << setw(23) << left << breed << setw(6) << left  <<gender << setw(10) << left<< aniName << setw(15) << left << colour << setw(2) << left << years << "y  ,"  << setw(2) << left << months << "m" << endl;
}

