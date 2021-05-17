#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

#include "defs.h"
#include "Identifiable.h"

/*
The purpose of animal class is to, initialize an animal object with specific characteristics and this is a derived class, with the base class being the identifiable class. It has name, breed, colour, specy and age as the data members. It also has couple of print functions aside from the getters.


*/

class Animal : public Identifiable
{
	public:
		Animal(SpeciesType=C_OTHER, string="", string="", string="", string="", int=0, int=0);
		~Animal();
		string getName();
		string getBreed();
		string getGender();
		int getAge();
		void print();
		string getSpecies();
	
	
	private:
		static int nextId;
		string aniName;
		string breed;
		string gender;
		string colour;
		SpeciesType specy;
		int age; //in months

};

#endif

