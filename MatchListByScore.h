#ifndef MATCHLISTBYSCORE_H
#define MATCHLISTBYSCORE_H

#include "MatchList.h"
/*
The purpose of this is class is to be a linked list, with adding into the list in specific order that is adding with descending score that is with the help of add function. This is a derived class from the matchlist class. Matchlist being the base class.

*/

class MatchListByScore : public MatchList
{
	public:
		MatchListByScore();
		void add(Match*);

};

#endif
