#pragma once
/*
Program: createAPlayer.h (Specification File)
Description: This is the specification file.
This file will be used to hold the declared class
type and all the member data inside the class
definition.

Date: August-20-2020
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "player.h" // ecapsulation header
#include "buildCharacterStats.h" // header file template
#include "mystic.h"
using namespace std;

class createPlayer // Base class
{
public: 
	void setName();
	// Function will set the characters 
	// first and last name.

	void chooseEquipment();
	// Function will be a menu where you can
	// choose your characters equipment.

	void chooseSpecialAbilities();
	// Function will allow the player to choose
	// the characters special abilities.

	void buildStats();
	// Function will be a menu where you can
	// build your characters stats.

	createPlayer();
	// Default Constructor
	// Will assign defualt equipment to the players
	// character if the player decides to skip the
	// equipment menu
	// equippingThePlayersWeapon.playerWeapon(weapon1);
	// equippingThePlayersGear.playerGear(gear1);
	// equippingThePlayersArtifact.playerArtifact(artifact1);

private:
	string firstName;
	string lastName;

	string weapon1 = "Sword";
	string weapon2 = "Spear";
	string weapon3 = "Dagger";
	
	string gear1 = "Vest";
	string gear2 = "Shield";
	string gear3 = "Boots";

	string artifact1 = "Bracelet";
	string artifact2 = "Necklace";
	string artifact3 = "Scarf";

	buildCharacterStats<int>addPoints; // template object of type <int>
									   // buildCharacterStats.

	mystic mysticSpecialAbility; // Aggregation and composition

	player equippingThePlayersWeapon; 
	player equippingThePlayersGear;
	player equippingThePlayersArtifact;
};