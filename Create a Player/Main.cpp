/*
Program: Main (main program)
Description: This is the user-defined function.

Note: This the user will enter the creative player menu
in this program.

Date: August-20-2020
*/

#include "createAPlayer.h"
#include <iomanip>
using namespace std;

int main()
{
	// local variables
	int choice;
	bool mainStopMenu = false;
	createPlayer enterCreateAPlayer;

	// statements
	while (!mainStopMenu)	// flag control while loops.
	{
		cout << setw(70) << "|Welcome to Create a Player|" << endl << endl;
		cout << "(1) To create a player." << endl;
		cout << "(2) To leave the program." << endl;
		cin >> choice;
		cout << endl;
		if (choice == 1)
		{
			enterCreateAPlayer.setName();
		}
		else if (choice == 2)
		{
			mainStopMenu = true;
		}
		else
		{
			cin.fail();	// invalid input entered
			cout << "This input is invalid, please try again." << endl;
			cin.clear(); // clears the istream buffer/
			cin.ignore(100, '\n');
		}

	}// end while loop

	cout << endl;
	cout << "See ya later space cowboy." << endl;

	return 0;
}