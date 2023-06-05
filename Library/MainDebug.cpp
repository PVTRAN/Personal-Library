// Library.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "MathLib.h"
#include "LLLib.h"
#include "BTLib.h"
/// <summary>
/// #define
/// </summary>
/// <returns></returns>

int main()
{
	MathLib ml;
	std::cout << "Hello World!\n";

	float2 fv1(1.1f, 2.2f);

	float2 fv2;

	fv2.x = 3.3f;
	fv2.y = 4.4f;

	float2 fvARR[] =
	{
		{1.0f, 2.0f},
		{3.0f, 4.0f},
		{5.0f, 6.0f},
		{7.0f, 8.0f}
	};

	if (fv1 == fvARR[0])
	{
		fv1 += fvARR[0];

		fv1 -= fvARR[0];

		//fv1 /= fvARR[0];
		//
		//fv1 *= fvARR[0];
	}

	int i = 0;

	if (i != i)
	{
		cout << "yes";
	}

	float2 fv3 = fv1 + fv2;

	fv1 = -fv1;

	float4 fv4 = { 2.0f, 3.0f, 4.0f, 5.0f };
	float4 fv5;
	matrix4x4 m;
	m.identity();

	fv5 = m * fv4;
	fv5 = fv4 * m;

	float val = m(3, 2);
	float length = ml.squareRoot(fv1.lengthSquared());
	std::cout << "X :" << fv1.x << " Y :" << fv1.y << "\n";
	std::cout << "X :" << fv2.x << " Y :" << fv2.y << "\n";
	float degree = MathLib::toDegree(45);

	float degree2 = ml.toDegree(45);

	LLLib lllib;
	LNode* mainHead = new LNode(10);
	lllib.insertAfter(mainHead, 50);
	lllib.printList(mainHead);
	lllib.pushFront(&mainHead, 5);
	lllib.printList(mainHead);
	lllib.pushBack(&mainHead, 20);
	lllib.printList(mainHead);
	lllib.insertAfter(mainHead->next, 15);
	lllib.printList(mainHead);
	lllib.deleteNodeAtPos(&mainHead, 4);
	lllib.pushBack(&mainHead, 25);
	lllib.pushBack(&mainHead, 30);
	lllib.pushBack(&mainHead, 35);
	lllib.pushBack(&mainHead, 40);
	lllib.insertAfterPos(&mainHead, 8, 50);
	lllib.insertAfterPos(&mainHead, 8, 45);
	lllib.printList(mainHead);
	lllib.nodeCountPrint(mainHead);
	lllib.deleteList(&mainHead);

	std::cout << '\n' << '\n';

	BTLib btlib;
	BNode* mTreeNode = new BNode(5);

	btlib.InsertNode(&mTreeNode, 10);
	btlib.PostOrderTraversal(mTreeNode);
	std::cout << '\n';
	btlib.InsertNode(&mTreeNode, 12);
	btlib.PostOrderTraversal(mTreeNode);
	std::cout << '\n';
	btlib.InsertNode(&mTreeNode, 14);
	btlib.PostOrderTraversal(mTreeNode);
	std::cout << '\n';
	btlib.InsertNode(&mTreeNode, 15);
	btlib.PostOrderTraversal(mTreeNode);
	std::cout << '\n';
	btlib.InsertNode(&mTreeNode, 20);
	btlib.PostOrderTraversal(mTreeNode);
	std::cout << '\n';
	btlib.InsertNode(&mTreeNode, 30);
	btlib.PostOrderTraversal(mTreeNode);
	std::cout << '\n' << '\n';
	btlib.InsertNode(&mTreeNode, 35);
	std::cout << "Post Order: ";
	btlib.PostOrderTraversal(mTreeNode);
	std::cout << '\n';
	std::cout << "In Order: ";
	btlib.InOrderTraversal(mTreeNode);
	std::cout << '\n';
	std::cout << "Pre Order: ";
	btlib.PreOrderTraversal(mTreeNode);
	std::cout << '\n';
	btlib.PostOrderDelete(mTreeNode);
}