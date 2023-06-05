#pragma once
#include "IncludeHeader.h"

#ifndef BNODE
#define BNODE
typedef struct BNode
{
	int data;

	BNode* left;
	BNode* right;
	BNode()
	{
		data = 0;
		left = NULL;
		right = NULL;
	}
	BNode(int Data)
	{
		data = Data;
		left = NULL;
		right = NULL;
	}
}BNode;

#endif // !BNODE
class BTLib
{
public:
	void InsertNode(BNode** root, int data);

	void InOrderTraversal(BNode* root);

	void PostOrderTraversal(BNode* root);

	void PreOrderTraversal(BNode* root);

	void PostOrderDelete(BNode* delNode);
};
