#include<iostream>
#include <sstream>
#include<string>
using namespace std;

#include "Client.h"
#include "CriteriaArray.h"
#include "Criteria.h"

int Client::nextId = 1001;

Client::Client(string n)
	: Identifiable("C", nextId), cName(n)
	{
	//cArr[5];
	nextId++;
	//cout << "in the clients ctor" << endl;
	
	}
	
Client::~Client()
{

	//cout<< "in the clients dtor"<< endl;
}

string Client::getClientName()
{
	return cName;
}
CriteriaArray& Client::getCriteriaArray()
{
	return cArr; //read 3.5.6........
}
void Client::addCriteria(Criteria* a){
	//3.5.7
	cArr.add(a);
}

void Client::print()
{

	cout<< Identifiable::getUniqueChar() << "   " << cName  << endl;
	cArr.print();
}

