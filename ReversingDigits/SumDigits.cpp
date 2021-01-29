/*
	Implementation for summing the digits of given number.
*/

#include <iostream>
using namespace std;

int SumDigits(int number)
{
	int originalNumber = number, sum = 0;

	/*
		Until the original_number is greater than 0, add the remainder of original_number divide by 10 to
		sum and store it in the sum. Chop off the right most digit by dividing original_number by 10 and
		store it in original_number.
	*/
	while (originalNumber > 0)
	{
		sum = sum + originalNumber % 10;
		originalNumber = originalNumber / 10;
	}
	cout << "\nThe sum of digits of number " << number << " is " << sum << "." << endl;
	return sum;
}