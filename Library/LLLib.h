#pragma once

#include "IncludeHeader.h"

// Doubly Linked-list
#ifndef LLNODE
#define LLNODE
typedef struct LNode
{
	int data;
	LNode* next;
	LNode* prev;

	LNode(int Data)
	{
		data = Data;
		next = NULL;
		prev = NULL;
	}
}LNode;

#endif // !LLNODE

class LLLib
{
public:
	// Add a new Node in front of the Linked List
	void pushFront(LNode** headNode, int data);
	// Add a new Node at the end of the Linked List
	void pushBack(LNode** headNode, int data);
	// Insert a new Node after a certain Node in the Linked list
	void insertAfter(LNode* prevNode, int data);
	// Insert a new Node after the Node at a given position;
	void insertAfterPos(LNode** headNode, int pos, int data);
	// Delete a certain node in a list
	void deleteNode(LNode** headNode, LNode* delNode);
	// Delete a certain node at a certain position
	void deleteNodeAtPos(LNode** headNode, int pos);
	void deleteNodeAtData(LNode** headNode, int data);
	// Delete the entire Linked List
	void deleteList(LNode** headNode);

	// Other Misc Funtion
	// Print Out the linked list from head to end
	void printList(LNode* headNode);
	// Count how many Node in a linkedlist
	int nodeCount(LNode* headNode);
	// Count how many Node in a linkedlist and Print
	void nodeCountPrint(LNode* headNode);
};
