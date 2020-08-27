/*
Program: MysticImp (Implementation File)
Description: This is the implementation file.
This file will hold all of the function definitions
for the declared class type in the header file.

Date: August-27-2020
*/

#include "mystic.h"

// Function Definition - theAbilityTable()
void mystic::theAbilityTable()
{

	// local function variables
	bool abilityTableMenu = false;
	int choice = 0;

	// statements
	while (!abilityTableMenu) // the ability table menu
	{
		cout << "<|||THE ABILITY TABLE|||>" << endl;
		cout << "(1) Tier 1: The apprentice" << endl;
		cout << "(2) Tier 2: Rise" << endl;
		cout << "(3) Tier 3: New Found Discovery" << endl;
		cout << "(4) Tier 4: The Epilouge" << endl;
		cout << "(5) Leave" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			tier1();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			cout << "Invalid input, please try again." << endl << endl;
		} // end switch
	} // end abilityTableMenu

	// TODO: May add a option setting after leaving the menu.
}

// Function Definition - tier1()
void mystic::tier1()
{
	// TODO: Add all the tier 1 perks
	//		 May add unlockables just for more realism.
}