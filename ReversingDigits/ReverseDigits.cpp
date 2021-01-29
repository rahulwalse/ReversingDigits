/*
	Implementation to reverse the digits of given positive integer number.
*/

#include <iostream>
using namespace std;

int ReverseDigits(int number)
{
	int originalNumber = number, reverseNumber = 0;

	while (originalNumber > 0)	//Remove the digit, store it and the add new digit until the number does not become 0.
	{
		/*
			Get the right most digit using mod (%) operator and add it to product of previous value of reverse_number
			and 10, and store the new value of reverse_number in reverse_number itself.
		*/
		reverseNumber = reverseNumber * 10 + (originalNumber % 10);
		/*
			The new value for the number should not contain the rightmost digit, we chop off the rightmost
			digit by dividing the number (original_number) by 10.
		*/
		originalNumber = originalNumber / 10;
	}
	cout << "\nThe reverse of number " << number << " is " << reverseNumber << "." << endl;
	return reverseNumber;
}