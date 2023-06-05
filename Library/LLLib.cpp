#include "LLLib.h"
#include <iostream>

void LLLib::pushFront(LNode** headNode, int data)
{
	// Initialize the new Node
	LNode* tempNode = new LNode(data);
	// set tempNode in front of headNode;
	tempNode->next = (*headNode);
	// connect headNode back to tempNode with prev
	if ((*headNode) != NULL)
		(*headNode)->prev = tempNode;
	// set TempNode as the new headNode
	(*headNode) = tempNode;
}

void LLLib::pushBack(LNode** headNode, int data)
{
	// Initialize the new Node
	LNode* tempNode = new LNode(data);

	// Store a copy of Head for iterating
	LNode* currNode = (*headNode);

	// If head is NULL
	if ((*headNode) == NULL)
	{
		// Set tempNode as new Head;
		*headNode = tempNode;
		return;
	}

	// Iterate till currNode->next is NULL which mean it is at the end
	while (currNode->next != NULL)
		currNode = currNode->next;
	// Set the new Node as the end at currNode
	currNode->next = tempNode;
	// Connect the tempNode->prev back to the currNode;
	tempNode->prev = currNode;
}

void LLLib::insertAfter(LNode* prevNode, int data)
{
	if (prevNode == NULL)
	{
		std::cout << "insertAfter: prevNode can't be NULL";
		return;
	}
	// Initialize the new Node
	LNode* tempNode = new LNode(data);
	// Set the tempNode next as the prevNode->next
	tempNode->next = prevNode->next;
	// Attach the tempNode->prev back prevNode;
	tempNode->prev = prevNode;
	// Set prevNode->next as the tempNode;
	prevNode->next = tempNode;

	//If the Node next to the tempNode is not Null set it prev back to tempNode
	if (tempNode->next != NULL)
		tempNode->next->prev = tempNode;
}

void LLLib::insertAfterPos(LNode** headNode, int pos, int data)
{
	/*return case*/
	if ((*headNode) == NULL || pos <= 0)
		return;

	LNode* currNode = (*headNode);

	for (int i = 1; currNode != NULL && i < pos; i++)
		currNode = currNode->next;

	// If iteration going through linkedList is out of bounf of pos
	if (currNode == NULL)
	{
		std::cout << "Out of Bound of Pos: " << pos;
		return;
	}
	LNode* newNode = new LNode(data);

	//set the newNode after the currNode
	newNode->next = currNode->next;
	newNode->prev = currNode;

	currNode->next = newNode;
	//If the Node next to the newNode is not Null set it prev back to newNode
	if (newNode->next != NULL)
		newNode->next->prev = newNode;
}

void LLLib::deleteNode(LNode** headNode, LNode* delNode)
{
	/* If headNode or delNode is Null*/
	if (headNode == NULL || delNode == NULL)
		return;

	/*If HeadNode == DelNode*/
	/*Set the headNode->next as the new Head*/
	if ((*headNode) == delNode)
		(*headNode) = delNode->next;

	/* If delNode is not the last Node, change next*/
	if (delNode->next != NULL)
		delNode->next->prev = delNode->prev;

	/* If delNode is not the head/first node, change prev*/
	if (delNode->prev != NULL)
		delNode->prev->next = delNode->next;

	free(delNode);
}

void LLLib::deleteNodeAtPos(LNode** headNode, int pos)
{
	/*return case*/
	if ((*headNode) == NULL || pos <= 0)
		return;

	LNode* currNode = (*headNode);

	for (int i = 1; currNode != NULL && i < pos; i++)
		currNode = currNode->next;

	// If iteration going through linkedList is out of bounf of pos
	if (currNode == NULL)
	{
		std::cout << "Out of Bound of Pos: " << pos;
		return;
	}

	deleteNode(headNode, currNode);
}

void LLLib::deleteNodeAtData(LNode** headNode, int data)
{
	LNode* currNode = (*headNode);
	LNode* prevNode = NULL;

	// If Data is at Head
	if (currNode != NULL && currNode->data == data)
	{
		(*headNode) = currNode->next;
		(*headNode)->prev = NULL;
		free(currNode);
		return;
	}
	else // If Data is not at Head and is somewhere in the LinkedList
	{
		while (currNode != NULL && currNode->data != data)
		{
			prevNode = currNode;
			currNode = currNode->next;
		}

		if (currNode == NULL)
			return;

		deleteNode(headNode, currNode);
	}
}

void LLLib::deleteList(LNode** headNode)
{
	LNode* currNode = (*headNode);
	LNode* iterNode = NULL;
	while (currNode != NULL)
	{
		iterNode = currNode;
		currNode = currNode->next;
		free(iterNode);
	}

	(*headNode) = NULL;
}

void LLLib::printList(LNode* headNode)
{
	std::cout << "Linked List Data: ";

	while (headNode != NULL)
	{
		std::cout << headNode->data << " ";
		headNode = headNode->next;
	}

	std::cout << "\n";
}

int LLLib::nodeCount(LNode* headNode)
{
	int count = 0;
	while (headNode != NULL)
	{
		count++;
		headNode = headNode->next;
	}
	return count;
}

void LLLib::nodeCountPrint(LNode* headNode)
{
	std::cout << "Linked List Node Count: ";

	int count = nodeCount(headNode);

	std::cout << count << "\n";
}