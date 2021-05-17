#ifndef IDENTIFIABLE_H
#define IDENTIFIABLE_H

#include <string>
using namespace std;
/*
The purpose of this class is to assign id's to animals and clients seperately. This is the base class animal and clients are derived classes from it. It has an int id, and a string Id which uses string format. The parameters are passed from respective derived classes.

*/


class Identifiable 
{
  public:
	Identifiable(string, int&);
	string getUniqueChar();
	
  protected:
  	string uniqueChar;


  private:
	int uniqueId;
};

#endif
