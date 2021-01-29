/*
	Implementation for merging seperate single digits into a single decimal number.
*/

#include <iostream>
using namespace std;

int MergeDigits(int digits)
{
	int number, mergedNumber = 0;

	cout << "\nEnter the " << digits << " seperate single digit number" << endl;
	/*
		Read the single digit numbers until the total numbers specified by the user using for loop. Add the
		current number to the product of previous value of merged_number and 10 and store the value in
		merged_number. By doing this we get one decimal number with all the seperate single digits.
	*/
	for (int count = 1; count <= digits; count++)
	{
		cout << "Enter value of " << count << " single digit number:";
		cin >> number;
		mergedNumber = mergedNumber * 10 + number;
	}
	cout << "\nThe converted single decimal number is " << mergedNumber << "." << endl;
	return mergedNumber;
}