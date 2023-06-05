#include "BTLib.h"
#include <iostream>
#include <queue>

void BTLib::InsertNode(BNode** root, int data)
{
	if (*root == NULL)
	{
		*root = new BNode(data);
		return;
	}

	std::queue<BNode*> q;
	q.push(*root);

	while (!q.empty())
	{
		BNode* tNode = q.front();
		q.pop();

		if (tNode->left == NULL)
		{
			tNode->left = new BNode(data);
			return;
		}
		else
			q.push(tNode->left);

		if (tNode->right == NULL)
		{
			tNode->right = new BNode(data);
			return;
		}
		else
			q.push(tNode->right);
	}
}

void BTLib::InOrderTraversal(BNode* root)
{
	if (root == NULL)
	{
		//std::cout << "Root is Null" << '\n';
		return;
	}

	InOrderTraversal(root->left);
	std::cout << root->data << "-->";
	InOrderTraversal(root->right);
}

void BTLib::PostOrderTraversal(BNode* root)
{
	if (root == NULL)
	{
		//std::cout << "Root is Null" << '\n';
		return;
	}

	PostOrderTraversal(root->left);
	PostOrderTraversal(root->right);
	std::cout << root->data << "-->";
}

void BTLib::PreOrderTraversal(BNode* root)
{
	if (root == NULL)
	{
		//std::cout << "Root is Null" << '\n';
		return;
	}

	std::cout << root->data << "-->";
	PreOrderTraversal(root->left);
	PreOrderTraversal(root->right);
}

void BTLib::PostOrderDelete(BNode* root)
{
	if (root == NULL)
	{
		//std::cout << "Root is Null" << '\n';
		return;
	}

	PostOrderDelete(root->left);
	PostOrderDelete(root->right);
	free(root);
}