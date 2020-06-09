// Assignment 5: Main.h
// Takes user input ints and saves the unique ones to an array.
// Author: Shane Calado
// Date: 02/25/18

#include <iostream>
#include "UniqueNumbers.h"


int main()
{
	UniqueNumbers uniqueNumbers1;

	uniqueNumbers1.collectNumbers();
	uniqueNumbers1.printNumbers();

	system("pause");
	return 0;
}