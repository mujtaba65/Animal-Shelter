#include <iostream>
#include <string>
using namespace std;


#include "MatchListByScore.h"

MatchListByScore::MatchListByScore()
{
	cout << "in matchlist by score  ctor" << endl; 
}



void MatchListByScore::add(Match* m)
{
	Node* newNode;
	Node* currNode;
	Node* prevNode;

	newNode = new Node;
	newNode->data = m;
	newNode->next = NULL;

	currNode = head;
	prevNode = NULL;

	while (currNode != NULL) {
		if (newNode->data->getScore() > currNode->data->getScore())
			break;
		prevNode = currNode;
		currNode = currNode->next;
	}

	if (prevNode == NULL)
		head = newNode;
	else
		prevNode->next = newNode;

  	newNode->next = currNode;
}
