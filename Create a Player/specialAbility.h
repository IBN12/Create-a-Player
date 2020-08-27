#pragma once
/*
Program: specialAbility.h (Specification File)
Description: This is the specification file.
This file will hold the declared class type 
definition.

Note: This will be 'abstract class' with pure
virutal functions. You will not be able to
create an object to invoke any of the functions
in this class.

Date: August-27-2020
*/


#include <iostream> 
using namespace std;

// specialAbility is a derived class
class specialAbility
{
public:
	virtual void theAbilityTable() = 0;
	// Function that will allow the player to construct
	// and unlock ability perks on the table.

	virtual void tier1() = 0;
	// Function will allow the player to use different
	// tier categories based on the special ability that
	// that they choose.

	// TODO: More tiers will need to be added.
	//		 Example: tier1, tier2, tier3, tier4.. etc
};

