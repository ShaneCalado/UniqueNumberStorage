// Assignment 5: UniqueNumbers.h
// Declaration of the DuplicateEliminator class.
// Takes user input ints and saves the unique ones to an array.
// Author: Shane Calado
// Date: 02/25/18

#pragma once
#include <iostream>
#include <array>

const int arraySize = 20; //Max number of ints to save.
const int minNumber = 10; //Minumum input value.
const int maxNumber = 100; //Maximum input value.
const int lineLength = 5; //Number of ints per line to print.

class UniqueNumbers
{
public:
	UniqueNumbers();
	
	//Definition of the collectNumbers() member function
	//Collects user input ints and saves them to the array if they
	//are valid and unique.
	void collectNumbers();
	
	//Definition of the printNumbers() member function
	//Prints all valid elements in the array to the console.
	void printNumbers();

	//Definition of the isUnique() member function
	//Checks user input number against the array to see if it unique.
	bool isUnique(int number, const std::array<int, arraySize>& collection);

private:
	std::array<int, arraySize> container;
};

