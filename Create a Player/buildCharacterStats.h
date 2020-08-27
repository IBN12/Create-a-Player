#pragma once
/*
Program: buildCharacterStats.h (Specification Template File)
Description: This is template specification file.
This program will hold the declared class type and
the function definitions for the class type.

Date: August-24-2020
*/

#include <iostream>
using namespace std;

template<class Type>
class buildCharacterStats
{
public:
	void strengthPoints(Type& strPoints);
	// Function that will add strength points

	void defensePoints(Type& defPoints);
	// Funciton that will add defense points

	void dexterityPoints(Type& dexPoints);
	// Function that will add dexterity points

	void intelligencePoints(Type& inPoints);
	// Function that will add intelligence points

	void luckPoints(Type& luckPoints);
	// Function that will add luck points

	void communicationPoints(Type& commPoints);
	// Function that will add communication points

	void evasivenessPoints(Type& evasPoints);
	// Function that will add evasiveness points

	void print() const;
	// Function will used a debug tool to output
	// the data/memory space that the pointers
	// are pointing to.

	buildCharacterStats();
	// Default constructor

	~buildCharacterStats();
	// Destructor
	// Will deallocate memory from each pointer
	// in order to stop memory leaks.


private:
	int *strength;
	int *defense;
	int *dexterity;
	int *intelligence;
	int *luck;
	int *communication;
	int *evasiveness;

};

// Function Definition - strengthPoints()
template <class Type>
void buildCharacterStats<Type>::strengthPoints(Type& strPoints)
{
	// local function variables
	strength = new int[10];// allocates a new space of memory of type int with 10
						   // array elements.

	// statements
	for (int i = 0; i < strPoints; i++) // for loop - assigns stat points to the perk.
	{
		strength[i] = 1;
	}
}

// Function Definition - DefensePoints()
template <class Type>
void buildCharacterStats<Type>::defensePoints(Type& defPoints)
{
	// local function variables
	defense = new int[10];

	// statements
	for (int i = 0; i < defPoints; i++)
	{
		defense[i] = 1;
	}
}

// Function Definition - DexterityPoints()
template <class Type>
void buildCharacterStats<Type>::dexterityPoints(Type& dexPoints)
{
	// local function variables
	dexterity = new int[10];

	// statements 
	for (int i = 0; i < dexPoints; i++)
	{
		dexterity[i] = 1;
	}
}

// Function Definition - intelligencePoints()
template <class Type>
void buildCharacterStats<Type>::intelligencePoints(Type& inPoints)
{
	// local function variables
	intelligence = new int[10];

	// statements
	for (int i = 0; i < inPoints; i++)
	{
		intelligence[i] = 1;
	}
}

// Function Definition - luckPoints()
template <class Type>
void buildCharacterStats<Type>::luckPoints(Type& lucPoints)
{
	// local function variables
	luck = new int[10];

	// statements 
	for (int i = 0; i < lucPoints; i++)
	{
		luck[i] = 1;
	}
}

// Function Definition - communicationPoints()
template <class Type>
void buildCharacterStats<Type>::communicationPoints(Type& commPoints)
{
	// local function variables
	communication = new int[10];

	// statements
	for (int i = 0; i < commPoints; i++)
	{
		communication[i] = 1;
	}

}

// Function Definition - evasivenessPoints()
template <class Type>
void buildCharacterStats<Type>::evasivenessPoints(Type& evasPoints)
{
	// local function variables
	evasiveness = new int[10];

	// statements
	for (int i = 0; i < evasPoints; i++)
	{
		evasiveness[i] = 1;
	}
}

// Function Definition - print()
template <class Type>
void buildCharacterStats<Type>::print() const
{
	// TODO: Show that the pointers are actually pointing 
	//		 to the correct memory spaces and hold the 
	//		 correct values assigned to the memory spaces.
}

// Function Definition - ~buildChracterStats() (Destructor)
template <class Type>
buildCharacterStats<Type>::~buildCharacterStats()
{
	delete[] strength; // Destroy the allocated space of memory the pointer is pointing to
	strength = nullptr; // Set the pointer to null.

	delete[] defense;
	defense = nullptr;

	delete[] dexterity;
	dexterity = nullptr;

	delete[] intelligence;
	intelligence = nullptr;

	delete[] luck;
	luck = nullptr;

	delete[] communication;
	communication = nullptr;

	delete[] evasiveness;
	evasiveness = nullptr;
}

// Function Definition - buildCharcterStats() (Default Constructor)
template <class Type>
buildCharacterStats<Type>::buildCharacterStats()
{

}