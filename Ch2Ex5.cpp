/*
File Name: Ch2Ex5.cpp
Github URL:
Programmer: Kit Miller
Date: September 2025
Requirements: Create a program that will compute the average of these values, 28,32,37,24, and 33.
*/

#include <iostream>
using namespace std;

int main()
{
	int value1 = 28;
	int value2 = 32;
	int value3 = 37;
	int value4 = 24;
	int value5 = 33;

	int sum = value1 + value2 + value3 + value4 + value5;

	double average = sum / 5.0;

	cout << "The sum of the values 28, 32, 37, 24, and 33 is: " << sum << endl;
	cout << "The average of these values is: " << average << endl;

	return 0;

}

