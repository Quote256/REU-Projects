// REU Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>

//This is a hello world program; It says "Hello World!"

void ListOfPrograms(int a);
void HelloWorld();
void WriteChoices();
void FoodFavorite();
void Arrays();
void MultiplyAndDivide();

int main()
{
	int choice;
	std::cout << "Hello! Choose Your Program: ";
	WriteChoices();
	std::cin >> choice;
	ListOfPrograms(choice);
	while (choice != 0) {
		std::cout << "Hello! Choose Your Program: ";
		WriteChoices();
		std::cin >> choice;
		ListOfPrograms(choice);
	}

	return 0;
}

void WriteChoices() {
	std::cout << "\n0: Quit\n1: Hello World\n2: Favorite Food\n3:Arrays\n4:Multiply and Divide\n";
}
void HelloWorld() {
	std::string HelloWorld[3] = { "Hello World!", "Hello\nWorld", "H l o W r d\n e l   o l" };
	for (int i = 0; i < 3; i++) {
		std::cout << HelloWorld[i] << std::endl;
	}
}
void FoodFavorite() {
	std::string food;
	std::cout << "What is your favorite food?: ";
	std::cin >> food;
	std::cout << "Your favorite food is " << food << std::endl;
}
void Arrays() {
	std::string array[3];
	std::cout << "Enter a string: ";
	std::cin >> array[0];
	std::cout << "Enter a string: ";
	std::cin >> array[1];
	std::cout << "Enter a string: ";
	std::cin >> array[2];

	for (int i = 0; i < 3; i++)
		std::cout << "String [" << i << "]: " << array[i] << std::endl;
}

void MultiplyAndDivide() {
	int numArray[4];
	std::cout << "Enter the first number: ";
	std::cin >> numArray[0];
	std::cout << "Enter the second number: ";
	std::cin >> numArray[1];
	std::cout << "Enter the third number: ";
	std::cin >> numArray[2];
	std::cout << "Enter the fourth number: ";
	std::cin >> numArray[3];

	std::cout << "The result is: " << (numArray[0] * numArray[1]) / (numArray[2] + numArray[3]) << std::endl;
}

void ListOfPrograms(int a) {
	switch (a)
	{
	case 0:
		std::cout << "Goodbye!\n";
		break;
	case 1:
		HelloWorld();
		break;
	case 2: 
		FoodFavorite();
		break;
	case 3:
		Arrays();
		break;
	case 4:
		MultiplyAndDivide();
		break;
	default:
		std::cout << "I don't understand\n";
	}
}
