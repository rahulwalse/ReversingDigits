// ReversingDigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
	Program to reverse the digits of given number. This program also performs some additional operations
	on digits -- such as counting the number of digits and adding seperate single digits into a single 
	decimal number. 
*/

#include <iostream>
using namespace std;
int const FIRSTOPTION = 1, LASTOPTION = 4;

int ReverseDigits(int number);
int CountDigits(int number);
int SumDigits(int number);
int MergerIntoSingle(int total_digits);

int main()
{
	int choice, number, total_digits;
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
					cin >> total_digits;
					MergerIntoSingle(total_digits);
					break;
		}
	}
}	

//Implementation to reverse the digits of given positive integer number.
int ReverseDigits(int number)
{
	int original_number = number, reverse_number = 0;

	while (original_number > 0)	//Remove the digit, store it and the add new digit until the number does not become 0.
	{
		/*
			Get the right most digit using mod (%) operator and add it to product of previous value of reverse_number
			and 10, and store the new value of reverse_number in reverse_number itself.
		*/
		reverse_number = reverse_number * 10 + (original_number % 10);
		/*
			The new value for the number should not contain the rightmost digit, we chop off the rightmost
			digit by dividing the number (original_number) by 10.
		*/
		original_number = original_number / 10;
	}
	cout << "\nThe reverse of number " << number << " is " << reverse_number << "." << endl;
	return reverse_number;
}

//Implementation for counting the number of digits in a number.
int CountDigits(int number)
{
	int original_number = number, count = 0;

	/*
		The While loop will execute until the value of original_number is greater than 0. The number of times
		the loop is executed will provide us the value which is nothing but the number of digits in the given
		integer number, for this we use a counter (count), which is incremented by 1 for each loop execution.
	*/
	while (original_number>0)
	{
		//Chop off the digit and increment the count by 1 for each loop execution.
		original_number = original_number / 10;
		count++;
	}
	cout << "\nThere are " << count << " digits in the number " << number << "." << endl;
	return count;
}

//Implementation for summing the digits of given number.
int SumDigits(int number)
{
	int original_number = number, sum = 0;

	/*
		Until the original_number is greater than 0, add the remainder of original_number divide by 10 to
		sum and store it in the sum. Chop off the right most digit by dividing original_number by 10 and 
		store it in original_number.
	*/
	while (original_number>0)
	{
		sum = sum + original_number % 10;
		original_number = original_number / 10;
	}
	cout << "\nThe sum of digits of number " << number << " is " << sum << "." << endl;
	return sum;
}

//Implementation for merging seperate single digits into a single decimal number.
int MergerIntoSingle(int total_digits)
{
	int number, merged_number = 0;

	cout << "\nEnter the " << total_digits << " seperate single digit number" << endl;
	/*
		Read the single digit numbers until the total numbers specified by the user using for loop. Add the
		current number to the product of previous value of merged_number and 10 and store the value in
		merged_number. By doing this we get one decimal number with all the seperate single digits.
	*/
	for (int count = 1; count <= total_digits; count++)
	{
		cout << "Enter value of " << count << " single digit number:";
		cin >> number;
		merged_number = merged_number * 10 + number;
	}
	cout << "\nThe converted single decimal number is " << merged_number << "." << endl;
	return merged_number;
}