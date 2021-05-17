#include <iostream>
using namespace std;
#include <string>
#include <iomanip>
#include <sstream> 
#include <cmath>

#include "Shelter.h"


Shelter::Shelter(string s)
	: name(s), numAnimals(0), numClients(0)
{
	//cout << "from shelter's ctor " << endl;
}

Shelter::~Shelter()
{
	for (int b = 0; b < numAnimals; b++)
	{
		delete animalArr[b];
	}
	for (int x = 0; x < numClients; x++)
	{
		delete clientArr[x];
	}

}

bool Shelter::add(Animal* a)
{
	if(numAnimals >= MAX_ARR)
	{
		cout<< "Error animal could not be added.." << endl;
		return false;
	}
	animalArr[numAnimals] = a;
	numAnimals++;
	
	return true;


}
bool Shelter::add(Client* c)
{
	if(numClients >= MAX_ARR)
	{
		cout<< "Error client could not be added.." << endl;
		return false;
	}
	clientArr[numClients] = c;
	numClients++;

	return true;
}

void Shelter::printAnimals()
{
	cout << "Animals : " << endl;
	for(int b = 0; b < numAnimals; b++)
	{
		animalArr[b]->print();
	
	}
}


void Shelter::printClients()
{
	cout << "Clients : " << endl;
	for(int b = 0; b < numClients; b++)
	{
		clientArr[b]->print();
	
	}
}
void Shelter::computeMatches(MatchListByScore& ms, MatchListByClient& mc)
{
	float matchScore = 0.0f;
	for (int b = 0; b < numClients; b++)
	{

		for(int j = 0; j < numAnimals; j++)
		{
			matchScore = 0.0f;
			for (int k = 0; k < clientArr[b]->getCriteriaArray().getSize(); k++)
			{
				if(clientArr[b]->getCriteriaArray().get(k)->getName() == "Species")
				{
					if(clientArr[b]->getCriteriaArray().get(k)->getValue() == animalArr[j]->getSpecies())
						matchScore += 10;
				}
				if(clientArr[b]->getCriteriaArray().get(k)->getName() == "Gender")
				{
					if(clientArr[b]->getCriteriaArray().get(k)->getValue() == animalArr[j]->getGender())
						matchScore += clientArr[b]->getCriteriaArray().get(k)->getWeight();
			
				}
				if(clientArr[b]->getCriteriaArray().get(k)->getName() == "Breed")
				{
					if(clientArr[b]->getCriteriaArray().get(k)->getValue() == animalArr[j]->getBreed())
						matchScore += clientArr[b]->getCriteriaArray().get(k)->getWeight();
			
				}
				if(clientArr[b]->getCriteriaArray().get(k)->getName() == "Age")
				{
					float aniAge = animalArr[j]->getAge()/12;
					string x = clientArr[b]->getCriteriaArray().get(k)->getValue();
					stringstream str(x);
					float prefAge = 0.0f;
					str>>prefAge;
					
					float difference = abs(aniAge - prefAge);
					float prop = difference/(float)10;
					if(prop > 1)
					{
						prop = 1.0f;
					}
					matchScore += ((clientArr[b]->getCriteriaArray().get(k)->getWeight()) * (1 - prop));
				}
			}	
			if( matchScore != 0)
			{
				Match* x = new Match(animalArr[j], clientArr[b], matchScore);
				ms.add(x);
				mc.add(x);
			}
				
			else{
				continue;
			}
				
			
		}	
	}


}
