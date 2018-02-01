// My while loop.cpp : Defines the entry point for the console application.
//We are going to 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int bacon = 1;

	while (bacon <= 20) {
		cout << "bacon is " << bacon << endl;
		bacon = bacon + 3;
	}
	system(pause);
    return 0;
}

