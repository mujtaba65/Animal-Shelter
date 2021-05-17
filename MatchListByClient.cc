#include <iostream>
#include <string>
using namespace std;

#include "MatchList.h"
#include "MatchListByClient.h"

MatchListByClient::MatchListByClient()
{
	cout << "in matchlist by client ctor" << endl; 
}


void MatchListByClient::add(Match* m)
{
	//add in descending(decreasing) order by match score...
	Node* newNode;
	Node* currNode;
	Node* prevNode;

	newNode = new Node;
	newNode->data = m;
	newNode->next = NULL;

	currNode = head;
	prevNode = NULL;

	
	while (currNode != NULL) {
		
		if(newNode->data->getClientId() < currNode->data->getClientId() ||newNode->data->getClientId() == currNode->data->getClientId() )
		{

			if (newNode->data->getScore() > currNode->data->getScore())
			{
					break;

			}

		}		
		
		prevNode = currNode;
		currNode = currNode->next;
	}

	if (prevNode == NULL)
		head = newNode;
	else
		prevNode->next = newNode;

  	newNode->next = currNode;
}
