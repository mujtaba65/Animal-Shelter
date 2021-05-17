#include <iostream>
using namespace std;
#include <string>
#include <sstream>

#include "Identifiable.h"

Identifiable::Identifiable(string id, int &next)
{
	stringstream x;
	x<<id;
	x<< "-"<<next;
	uniqueChar = x.str();
}

string Identifiable::getUniqueChar()
{
	return uniqueChar;
}


