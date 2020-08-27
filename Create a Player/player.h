#pragma once
/*
Program: player.h (Specification File)
Description: This is the specification file. 
This file will be used to hold the delcared
class type and all the data members inside
the class definition.

Date: August-20-2020
*/

#include <iostream>
#include <string>
using namespace std;

class player
{
public:
	void playerWeapon(string equipWeapon);
	// Function that will equip the weapon to the character.

	void playerGear(string equipGear);
	// Function that will equip the gear to the character.

	void playerArtifact(string equipArtifact);
	// Function that will equip the artifact to the character.

private:
	string equippedWeapon;
	string equippedGear;
	string equippedArtifact;
};
