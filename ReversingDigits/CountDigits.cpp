/*
	Implementation for counting the number of digits in a number.
*/

#include <iostream>
using namespace std;

int CountDigits(int number)
{
	int originalNumber = number, count = 0;

	/*
		The While loop will execute until the value of original_number is greater than 0. The number of times
		the loop is executed will provide us the value which is nothing but the number of digits in the given
		integer number, for this we use a counter (count), which is incremented by 1 for each loop execution.
	*/
	while (originalNumber > 0)
	{
		/*Chop off the digit and increment the count by 1 for each loop execution.*/
		originalNumber = originalNumber / 10;
		count++;
	}
	cout << "\nThere are " << count << " digits in the number " << number << "." << endl;
	return count;
}