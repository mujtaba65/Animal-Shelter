#ifndef SHELTER_H
#define SHELTER_H

#include <string>
using namespace std;

#define MAX_ARR 64

#include "Animal.h"
#include "Client.h"
#include "MatchListByScore.h"
#include "MatchListByClient.h"
#include "Match.h"

/*
The purpose of this class is to act as a Vet which keeps record of the animals they have along with there characteristics, which is stored as an Animal* array. Same goes for the clients with there specific criterias, it is to be stored in Client* array. These 2 arrays are populated with their respective add functions. Similarly both of them have a print function as well. Lastly the heart of the code that is the compute function, it matches criteria with each animal, and adds score according to the property, and at the end makes a new match object which upadtes the score for the client-animal combo this happens if the score is not 0. And after creating the match object it is added in the matchlist, by score and by client. 
*/

class Shelter
{
	public:
		Shelter(string="");
		~Shelter();	
		bool add(Animal*);
		bool add(Client*);
		void printAnimals();
		void printClients();
		void computeMatches(MatchListByScore& , MatchListByClient&);
			
	private:
		string name;
		Animal* animalArr[MAX_ARR];
		Client* clientArr[MAX_ARR];
		int numAnimals;
		int numClients;


};

#endif
