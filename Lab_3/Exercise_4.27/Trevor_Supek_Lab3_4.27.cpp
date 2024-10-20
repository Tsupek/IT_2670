// Trevor_Supek_Lab3_4.27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//Checks if entered integer is a palindrome
bool isPalindrome(int num)
{
	int digit1 = num / 10000;
	int digit2 = (num / 1000) % 10;
	int digiit3 = (num / 100) % 10;
	int diigit4 = (num / 10) % 10;
	int digit5 = num % 10;

	return (digit1 == digit5) && (digit2 == diigit4);
}

int main()
{
	int number;


	cout << "Enter an five-digit integer: ";
	cin >> number;

	if (number >= 10000 && number <= 99999)
	{
		if (isPalindrome(number))
		{
			cout << number << " is a palindrome." << endl;
		}
		else {
			cout << number << " is not a palindrome." << endl;
		}
	}
	else
	{
		cout << "Please enter a valid five-digit integer." << endl;
	}

	return 0;
}
