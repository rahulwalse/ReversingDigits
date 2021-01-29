// ReversingDigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
	This program is an implementation in C++ of algorithm for reversing the digits of given number including
	supplementary problems like counting digits, summing digits and merging digits into a single number 
	algorithms for sequence computations from the book "How to Solve it by Computer" by R.G. Dromey.
*/

#include <iostream>
#include "Digitf.h"
using namespace std;
int const FIRSTOPTION = 1, LASTOPTION = 4;

int main()
{
	int choice, number, digits;	char cont;

	do
	{
		cout << "1. Reverse the digits\n2. Count the digits in a number\n3. Sum the digits of number";
		cout << "\n4. Merge the seperate single digits into a single decimal number\nEnter your choice : ";
		cin >> choice;

		if (choice < FIRSTOPTION || choice > LASTOPTION)
		{
			cout << "\nThe choice you entered is invalid, exiting the program." << endl;
			return 0;
		}
		else
		{
			switch (choice)
			{
			case 1:	cout << "\nEnter the number of which the digits are to be reversed" << endl;
					cin >> number;
					ReverseDigits(number);
					break;

			case 2:	cout << "\nEnter the number for counting the number of digits" << endl << "number=";
					cin >> number;
					CountDigits(number);
					break;

			case 3:	cout << "\nEnter the number to sum its digits" << endl;
					cin >> number;
					SumDigits(number);
					break;

			case 4:	cout << "\nEnter the total number of single digits to be converted into a single decimal number" << endl;
					cin >> digits;
					MergeDigits(digits);
					break;
			}
		}
		/*Check if the your wants to continue.*/
		cout << "\nDo you want to continue? (Y/N)" << endl;
		cin >> cont;
	} while (cont == 'Y' || cont == 'y');
}