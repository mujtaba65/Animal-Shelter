#ifndef CLIENT_H
#define CLIENT_H

#include "CriteriaArray.h"
#include "Criteria.h"
#include "Identifiable.h"

/*
The purpose of this class is to make a client object with a specific criteria for the type of animal they want. And the criteria is stored in the Criteria Array, which is added into using the addCriteria function. This is a derived class and Identifiable being the base class.

*/
class Client : public Identifiable
{
  public:
    Client(string="");
    string getClientName();
    ~Client();
    CriteriaArray& getCriteriaArray();
    void addCriteria(Criteria*);
    void print();
    
  private:
    static int nextId;
    string cName;
    CriteriaArray cArr;

};

#endif
