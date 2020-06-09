// Assignment 5: UniqueNumbers.cpp
// Member-function definitions for class UniqueNumbers.
// Takes user input ints and saves the unique ones to an array.
// Author: Shane Calado
// Date: 02/25/18

#include "UniqueNumbers.h"

using namespace std;


UniqueNumbers::UniqueNumbers()
{}

//Implementation of the collectNumbers() member function
//Collects user input ints and saves them to the array if they
//are valid and unique.
void UniqueNumbers::collectNumbers()
{
	int input;
	int count = 0;
	while (count < arraySize)
	{
		cout << "\nEnter # " << count + 1 << " : ";
		cin >> input;
		while (cin.rdstate())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
		if (input >= minNumber && input <= maxNumber)
		{
			if (isUnique(input, container))
			{
				cout << "The number: " << input << " is unique" << endl;
				container[count] = input;
			}
			count++;
		}
		else
		{
			cout << "The number entered is not in the valid range of "
				<< minNumber << " to " << maxNumber << endl;
		}
	}
}

//Implementation of the printNumbers() member function.
//Prints all valid elements in the array to the console.
void UniqueNumbers::printNumbers()
{
	cout << "\nThe unique numbers are:\n" << endl;
	int count = 0;
	for each (auto number in container)
	{
		if (number >= minNumber && number <= maxNumber)
		{
			cout << "    " << number;
			count++;
		}
		if (count == lineLength)
		{
			cout << "\n";
			count = 0;
		}
	}
	cout << "\n" << endl;
}

//Implementation of the isUnique() member function.
//Checks user input number against the array to see if it unique.
bool UniqueNumbers::isUnique(int input, const array<int, arraySize>& collection)
{
	for each (int number in collection)
	{
		if (number == input)
		{
			return false;
		}
	}
	return true;
}