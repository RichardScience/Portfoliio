// PointersAndMemory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Grill.h"
#include "HotDog.h"
#include "Person.h"


//For this, you are going to need some classes.Grill, Hotdog, and Person.The goal is to show how two different objects can both do something to the same other object.
//
//Create those classes
//Create a local Grill variable in main
//Dynamically create a Hotdog and a Person
//Give Grill a method that takes a hotdog pointer and sets a cooked flag in the hotdog to true
//Give Person a method that takes a hotdog pointer and outputs that flag
//Make main call those two methods
//

int main()
{
	int x = 0;
	Grill tMyGrill;
	HotDog *tADog = new HotDog;
	Person *tAPerson = new Person;

	tMyGrill.CookHotDog(tADog);
	tAPerson->CheckHotDog(tADog);
	// (*tAPerson).CheckHotDog(tADog)


	delete tADog;
	tADog = nullptr;
	delete tAPerson;
	tAPerson = nullptr;

	if (tADog != nullptr)
	{
		// tADog->
	}
}
