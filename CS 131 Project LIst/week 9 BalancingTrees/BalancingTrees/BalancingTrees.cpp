// TreeSetup.cpp : Defines the entry point for the console application.
//


#include<iostream>
#include<string>
#include <list>
#include "Tree.h"

using namespace std;

int main()
{
	Tree<int> tTreeOne;

	tTreeOne.Add(50);
	tTreeOne.Add(30);
	tTreeOne.Add(80);
	tTreeOne.Add(90);
	tTreeOne.Add(100);
	tTreeOne.Add(60);
	tTreeOne.Add(20);
	tTreeOne.Add(10);
	tTreeOne.Add(15);
	tTreeOne.Add(55);
	tTreeOne.Add(110);
	tTreeOne.Add(120);
	// I bet drawing that out on paper first would help.
	cout << "Tree one at start\n";
	tTreeOne.PrintTree();
	cout << endl;

	if (tTreeOne.Contains(15))
		cout << "Check 1" << endl;
	if (tTreeOne.Contains(50))
		cout << "Check 2" << endl;
	if (tTreeOne.Contains(60))
		cout << "Check 3" << endl;
	if (tTreeOne.Contains(110))
		cout << "Check 4" << endl;
	if (!tTreeOne.Contains(99))
		cout << "Check 5" << endl;

	Tree<int> tTreeTwo(tTreeOne);
	tTreeOne.Remove(90);
	if (tTreeTwo.Contains(90))
		cout << "Check 6" << endl;
	cout << "Tree one without 90\n";
	tTreeOne.PrintTree();
	cout << endl;

	Tree<int> tTreeThree;
	tTreeThree = tTreeOne;
	tTreeOne.Remove(20);
	cout << "Tree one without 20\n";
	tTreeOne.PrintTree();
	if (tTreeThree.Contains(20))
		cout << "Check 7" << endl;
	if (!tTreeOne.Contains(20))
		cout << "Check 8" << endl;

	tTreeOne.Add(90);
	if (tTreeOne.Contains(90))
		cout << "Check 9" << endl;
	cout << "Tree one with 90\n";
	tTreeOne.PrintTree();
	cout << endl;

	return 0;
}

