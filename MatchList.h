#ifndef MATCHLIST_H
#define MATCHLIST_H

#include "Match.h"
/*
The purpose of this class is to be a linked list with the nested class representing nodes, and those nodes and having a pointer to the next node, and data for that node. It also a pointer for the head node. It has a const print function, as well as a cleanup function that frees up the data not the node.
Aside from that constructor and destructor, the destructor deletes the node.

*/



class MatchList
{
  protected:
  	class Node
  	{
  	  public:
  	    Match* data;
  	    Node* next;
  	};

  public:
    MatchList();
    ~MatchList();
    void print() const;
    void cleanup();

  protected:
    Node* head;

};

#endif

