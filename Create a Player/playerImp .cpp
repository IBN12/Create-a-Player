/*
Program: playerImp (Implementation File)
Description: This is the implementation file.
This file will be used to hold all the 
function definitions for the declared class
type in the header file.

Date: August-20-2020
*/

#include "player.h"

// Function Definition - playerWeapon()
void player::playerWeapon(string equipWeapon)
{
	equippedWeapon = equipWeapon;
}

// Function Definition - playerGear()
void player::playerGear(string equipGear)
{
	equippedGear = equipGear;
}

// Function Definition - playerArtifact()
void player::playerArtifact(string equipArtifact)
{
	equippedArtifact = equipArtifact;
}


