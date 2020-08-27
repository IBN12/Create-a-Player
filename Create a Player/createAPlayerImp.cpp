/*
Program: createAPlayerImp (Implementation File)
Description: This is the implementation file.
This file will be used to hold all the function
definitions for the declared class type in the
header file.

Date: August-20-2020
*/

#include "createAPlayer.h"

// Function Definition - setName()
void createPlayer::setName()
{
	cout << "Choose your characters first name: ";
	cin >> firstName;
	cout << endl;

	cout << "Choose your characters last name: ";
	cin >> lastName;
	cout << endl;

	chooseEquipment();
}

// Function Definition - chooseEquipement()
void createPlayer::chooseEquipment()
{
	// local function variables
	bool stopEquipmentMenu = false;
	bool stopWeaponMenu = false;
	bool stopGearMenu = false;
	bool stopArtifactMenu = false;
	bool stopEndOfEquipmentMenu = false;

	int choice;

	// statements
	while (!stopEquipmentMenu)	// flag controlled while - controls equipment menu
	{
		stopEndOfEquipmentMenu = false;	// restarts the flag at the end.
		cout << "(1) Choose characters equipment" << endl;
		cout << "(2) Leave the character equipment menu" << endl;
		cin >> choice;
		cout << endl;

		if (choice == 1) // if statement -  enters the equipment choice 
		{
			cin.clear(); // clears the istream buffer.
			while (!stopWeaponMenu) // weapon menu loop
			{
				cout << "|Choose Weapon|" << endl;
				cout << "(1) Sword" << endl;
				cout << "(2) Spear" << endl;
				cout << "(3) Dagger" << endl;
				cin >> choice;
				switch (choice)	// switch statement - weapon options
				{
				case 1: 
					equippingThePlayersWeapon.playerWeapon(weapon1);
					break;
				case 2:
					equippingThePlayersWeapon.playerWeapon(weapon2);
					break;
				case 3:
					equippingThePlayersWeapon.playerWeapon(weapon3);
					break;
				default:
					cout << "invalid input, please try again." << endl;
					continue;
				}// end switch
				stopWeaponMenu = true;

			}// end while - weapon menu
			cout << endl;

			cin.clear();
			while (!stopGearMenu) // gear menu loop
			{
				cout << "|Choose Gear|" << endl;
				cout << "(1) Vest" << endl;
				cout << "(2) Shield" << endl;
				cout << "(3) Boots" << endl;
				cin >> choice;
				switch (choice)
				{
				case 1:
					equippingThePlayersGear.playerGear(gear1);
					break;
				case 2:
					equippingThePlayersGear.playerGear(gear2);
					break;
				case 3:
					equippingThePlayersGear.playerGear(gear3);
					break;
				default:
					cout << "Invalid input, please try again." << endl;
					continue;
				}// end switch
				stopGearMenu = true;

			}// end while - gear menu
			cout << endl;

			cin.clear();
			while (!stopArtifactMenu) // artifact menu
			{
				cout << "|Choose Artifact|" << endl;
				cout << "(1) Bracelet" << endl;
				cout << "(2) NeckLase" << endl;
				cout << "(3) Scarf" << endl;
				cin >> choice;
				switch (choice)
				{
				case 1:
					equippingThePlayersArtifact.playerArtifact(artifact1);
					break;
				case 2:
					equippingThePlayersArtifact.playerArtifact(artifact2);
					break;
				case 3:
					equippingThePlayersArtifact.playerArtifact(artifact3);
					break;
				default:
					cout << "Invalid input, please try again." << endl;
					continue;
				}// end switch
				stopArtifactMenu = true;

			}// end while - artifact menu
			cout << endl;
		}
		else if (choice == 2)	// else..if - leaves the equipment menu
		{
			stopEquipmentMenu = true;
		}
		else // else - fail safe
		{
			cin.fail();
			cout << "Invalid input, please try again." << endl;
			cin.clear();
			cin.ignore(100, '\n');
		} // end if statement 

		cin.clear();
		while (!stopEndOfEquipmentMenu)	// Options after the equipment choices end.
		{
			cout << "(1) Build characters stats" << endl;
			cout << "(2) Choose equipment" << endl;
			cout << "(3) Leave" << endl;
			cin >> choice;
			cout << endl;
			if (choice == 1)
			{
				// TODO: Will lead to the character stats
				//		 Will most likely be a function in
				//		 the createPlayer class.
				buildStats();
			}
			else if (choice == 2)
			{
				cin.clear();
				stopWeaponMenu = false;
				stopGearMenu = false;
				stopArtifactMenu = false;
				stopEquipmentMenu = false;
				stopEndOfEquipmentMenu = true;
			}
			else if (choice == 3)
			{
				stopEndOfEquipmentMenu = true;
				stopEquipmentMenu = true;
			}// end if statement
		}// end stopEndOfEquipmentMenu

	}// end while - equipement menu
}

// Function Definition - buildStats()
void createPlayer::buildStats()
{
	// Note: Once you have added all your points to
	//		 to your character stats, you won't be able
	//		 to add anymore points to the stats. This
	//		 will set all the stat menus to true to
	//		 stop the player from adding negative numbers
	//		 to the stat variables being used as actual
	//		 parameters. Leaving the stat build menu
	//       and the function will set the menu booleans,
	//		 back to there default values. So when you come
	//		 come back to the function, you add new stat points 
	//		 again to your stat perks.

	// local function variables
	int fullPoints = 30;
	int strPoints = 0;
	int defPoints = 0;
	int dexPoints = 0;
	int inPoints = 0;
	int lucPoints = 0;
	int commPoints = 0;
	int evasPoints = 0;
	int choice = 0;

	bool statBuildMenu = false;
	bool strengthStats = false;
	bool defenseStats = false;
	bool dexterityStats = false;
	bool intelligenceStats = false;
	bool luckStats = false;
	bool communicationStats = false;
	bool evasivenessStats = false;

	// statements

	// TODO: Add the stat building statements here.
	// This entire section is subject to change if I
	// decide to build template to manage the stats 
	// instead.
	cout << "Build your characters stats" << endl;
	cout << "Points to build with: " << fullPoints << endl;
	cout << endl;

	while (!statBuildMenu)
	{
		cout << "(1) Stregnth" << endl;
		cout << "(2) Defense" << endl;
		cout << "(3) Dexterity" << endl;
		cout << "(4) Intelligence" << endl;
		cout << "(5) Luck" << endl;
		cout << "(6) Communication" << endl;
		cout << "(7) Evasiveness" << endl;
		cout << "(8) Leave" << endl;
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
			while (!strengthStats) // Add points to strength.
			{
				fullPoints = fullPoints + strPoints; //TODO: Might not need this.
				cout << "|Strength|" << endl;
				cout << "Add points to strength [0pts - 10pts]: ";
				cout << setw(45) << "Building Points: " << fullPoints << endl;
				cin >> strPoints;
				cout << endl;
				if (strPoints <= 10) // point input comparison
				{
					fullPoints = fullPoints - strPoints;
					if (fullPoints >= 0 && fullPoints <= 30) // building points comparison
					{
						addPoints.strengthPoints(strPoints);
						cout << "Building Points: " << fullPoints << endl << endl;
						strengthStats = true; // leaves strengthStats menu
					}
					else // player runs out of stat points to add.
					{
						cout << "Not enough points left" << endl << endl;
						strengthStats = true;
					}
				}
				else // entered in more than 10 points.
				{
					cout << "Reached full point capacity." << endl;
					cout << "Try again." << endl << endl;
					strPoints = 0;
					cin.fail(); // fail safe
					cin.clear(); // clear the istream buffer
					cin.ignore(100, '\n'); // ignore until newline
				}// end if statement
			}// end strengthStats
			break;
		case 2:
			while (!defenseStats) // Add points to defense
			{
				cout << "|Defense|" << endl;
				cout << "Add points to defense [0pts - 10pts]: ";
				cout << setw(45) << "Building Points: " << fullPoints << endl;
				cin >> defPoints;
				cout << endl;
				if (defPoints <= 10)
				{
					fullPoints = fullPoints - defPoints;
					if (fullPoints >= 0 && fullPoints <= 30)
					{
						addPoints.defensePoints(defPoints);
						cout << "Building Points: " << fullPoints << endl << endl;
						defenseStats = true;
					}
					else
					{
						cout << "Not enough points left" << endl << endl;
						defenseStats = true;
					}
				}
				else
				{
					cout << "Reached full point capacity." << endl;
					cout << "Try again." << endl << endl;
					strPoints = 0;
					cin.fail(); // fail safe
					cin.clear(); // clear the istream buffer
					cin.ignore(100, '\n'); // ignore until newline
				}// end if statement
			}// end defenseStats
			break;
		case 3:
			while (!dexterityStats) // Add points to dexterity
			{
				cout << "|Dexterity|" << endl;
				cout << "Add points to dexterity [0pts - 10pts]: ";
				cout << setw(45) << "Building Points: " << fullPoints << endl;
				cin >> dexPoints;
				cout << endl;
				if (dexPoints <= 10)
				{
					fullPoints = fullPoints - dexPoints;
					if (fullPoints >= 0 && fullPoints <= 30)
					{
						addPoints.dexterityPoints(dexPoints);
						cout << "Building Points: " << fullPoints << endl << endl;
						dexterityStats = true;
					}
					else
					{
						cout << "Not enough points left" << endl << endl;
						dexterityStats = true;
					}
				}
				else
				{
					cout << "Reached full point capacity." << endl;
					cout << "Try again." << endl << endl;
					strPoints = 0;
					cin.fail(); // fail safe
					cin.clear(); // clear the istream buffer
					cin.ignore(100, '\n'); // ignore until newline
				}// end if statement
			}// end dexterityStats
			break;
		case 4:
			while (!intelligenceStats) // Add points to intelligence
			{
				cout << "|Intelligence|" << endl;
				cout << "Add points to intelligence [0pts - 10pts]: ";
				cout << setw(45) << "Building Points: " << fullPoints << endl;
				cin >> inPoints;
				cout << endl;
				if (inPoints <= 10)
				{
					fullPoints = fullPoints - inPoints;
					if (fullPoints >= 0 && fullPoints <= 30)
					{
						addPoints.intelligencePoints(inPoints);
						cout << "Building Points: " << fullPoints << endl << endl;
						intelligenceStats = true;
					}
					else
					{
						cout << "Not enough points  left" << endl << endl;
						intelligenceStats = true;
					}
				}
				else
				{
					cout << "Reached full point capacity." << endl;
					cout << "Try again." << endl << endl;
					strPoints = 0;
					cin.fail(); // fail safe
					cin.clear(); // clear the istream buffer
					cin.ignore(100, '\n'); // ignore until newline
				}// end  if statement
			}// end intelligenceStats
			break;
		case 5:
			while (!luckStats) // Add points to luck
			{
				cout << "|Luck|" << endl;
				cout << "Add points to luck [0pts - 10pts]: ";
				cout << setw(45) << "Building Points: " << fullPoints << endl;
				cin >> lucPoints;
				cout << endl;
				if (lucPoints <= 10)
				{
					fullPoints = fullPoints - lucPoints;
					if (fullPoints >= 0 && fullPoints <= 30)
					{
						addPoints.luckPoints(lucPoints);
						cout << "Building Points: " << fullPoints << endl << endl;
						luckStats = true;
					}
					else
					{
						cout << "Not enough points left" << endl << endl;
						luckStats = true;
					}
				}
				else
				{
					cout << "Reached full point capacity." << endl;
					cout << "Try again." << endl << endl;
					strPoints = 0;
					cin.fail(); // fail safe
					cin.clear(); // clear the istream buffer
					cin.ignore(100, '\n'); // ignore until newline
				}// end if statement
			}// end luckStats
			break;
		case 6:
			while (!communicationStats) // Add Points to communication
			{
				cout << "|Communication|" << endl;
				cout << "Add Points to communcation [0pts - 10pts]: ";
				cout << setw(45) << "Building Points: " << fullPoints << endl;
				cin >> commPoints;
				cout << endl; 
				if (commPoints <= 10)
				{
					fullPoints = fullPoints - commPoints;
					if (fullPoints >= 0 && fullPoints <= 30)
					{
						addPoints.communicationPoints(commPoints);
						cout << "Building Points: " << fullPoints << endl << endl;
						communicationStats = true;
					}
					else
					{
						cout << "Not enough points left" << endl << endl;
						communicationStats = true;
					}
				}
				else
				{
					cout << "Reached full point capacity." << endl;
					cout << "Try again." << endl << endl;
					strPoints = 0;
					cin.fail(); // fail safe
					cin.clear(); // clear the istream buffer
					cin.ignore(100, '\n'); // ignore until newline
				}// end if statement
			}// end communicationStats
			break;
		case 7:
			while (!evasivenessStats) // Add points to evasiveness
			{
				cout << "|Evasiveness|" << endl;
				cout << "Add points to evasivenessPoints [0pts - 10pts]: ";
				cout << setw(45) << "Building Stats: " << fullPoints << endl;
				cin >> evasPoints;
				cout << endl;
				if (evasPoints <= 10)
				{
					fullPoints = fullPoints - evasPoints;
					if (fullPoints >= 0 && fullPoints <= 30)
					{
						addPoints.evasivenessPoints(evasPoints);
						cout << "Building Points: " << fullPoints << endl << endl;
						evasivenessStats = true;
					}
					else
					{
						cout << "Not enough points left" << endl << endl;
						evasivenessStats = true;
					}
				}
				else
				{
					cout << "Reached full point capacity." << endl;
					cout << "Try again." << endl << endl;
					strPoints = 0;
					cin.fail(); // fail safe
					cin.clear(); // clear the istream buffer
					cin.ignore(100, '\n'); // ignore until newline
				}// end if statement
			}// end evasivenessStats
			break;
		case 8:
			//TODO: To leave the character build stats menu
			//		and back to the character choose weapons
			//		menu.
			statBuildMenu = true; // Leaves the entire stat build menu
			break;
		case 9:
			//TODO: Continue on to choosing the characters
			//		special abilities.
			//		Might take this out and add it to a options
			//		menu. The option will come up after the player leaves the
			//		stat build menu.
			chooseSpecialAbilities(); // Goes to choose characters special abilities
			break;
		default:
			cout << "Invalid input. Please try again" << endl << endl;
		}// end switch
	}// end statBuildMenu
}

void createPlayer::chooseSpecialAbilities()
{
	// TODO: Finish the ability section.

	// local function variables
	bool specialAbilityMenu = false;
	int choice = 0;
	
	// statements
	while (!specialAbilityMenu) // special ability choice menu
	{
		cout << "Choose your characters special abilities." << endl;
		cout << endl;
		cout << "(1) Mystic" << endl;
		cout << "(2) Iron Man" << endl;
		cout << "(4) Celestial" << endl;
		cout << "(5) Leave" << endl;
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
			mysticSpecialAbility.theAbilityTable();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			specialAbilityMenu = true; // leave the special ability menu
			break;
		default:
			cout << "Invalid input, please try again." << endl << endl;
		}// end switch

		// TODO: Might put more options at the
		//		 end of the menu once player leaves.

	}// end specialAbilityMenu
}

// Function Definition - createPlayer (Default Constructor)
createPlayer::createPlayer()
{
	// chooseEquipment function: Assigns default equipment 
	// if the player decides to skip/leave the equipment menu.
	equippingThePlayersWeapon.playerWeapon(weapon1);
	equippingThePlayersGear.playerGear(gear1);
	equippingThePlayersArtifact.playerArtifact(artifact1);

	// buildStats function: Adds default stat points to
	// the stat perks just in case the player skip/leaves
	// the stat build menu.
	int strPoints = 5;
	addPoints.strengthPoints(strPoints);

	int defPoints = 6;
	addPoints.defensePoints(defPoints);

	int inPoints = 7;
	addPoints.intelligencePoints(inPoints);

	int luPoints = 3;
	addPoints.luckPoints(luPoints);

	int dexPoints = 3;
	addPoints.dexterityPoints(dexPoints);

	int commPoints = 3;
	addPoints.communicationPoints(commPoints);

	int evasPoints = 3;
	addPoints.evasivenessPoints(evasPoints);
}