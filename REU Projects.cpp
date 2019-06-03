// REU Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

//This is a hello world program; It says "Hello World!"

int main()
{

std::string HelloWorld[3] = { "Hello World!", "Hello\nWorld", "H l o W r d\n e l   o l" };
for (int i = 0; i < 3; i++) {
	std::cout << HelloWorld[i] << std::endl;
}



	return 0;
}
