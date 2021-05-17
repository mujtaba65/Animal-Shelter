#ifndef MATCHLISTBYCLIENT_H
#define MATCHLISTBYCLIENT_H

#include "MatchList.h"

/*
The purpose of this is class is to be a linked list, with adding into the list in specific order that is adding with ascending client id and inside that client sort the score in descending order that is with the help of add function. This is a derived class from the matchlist class. Matchlist being the base class.

*/

class MatchListByClient : public MatchList
{
	public:
		MatchListByClient();
		void add(Match* );
	
	
	private:


};

#endif
