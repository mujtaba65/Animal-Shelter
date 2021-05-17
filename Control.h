#ifndef CONTROL_H
#define CONTROL_H

#include "Shelter.h"
#include "View.h"
#include "MatchList.h"

#include "Criteria.h"


class Control
{
  public:
  	void launch();
  	Control();
  	~Control();
 	
		
  private:
  	void initShelter();
	void initAnimals();
	void initClients();
	Shelter* shelter;
};

#endif
