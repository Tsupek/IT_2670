// Trevor_Supek_Lab2_3.13.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Removing Duplicated Code in the main function

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

void displayAccount(const Account& accountToDisplay) {
	cout << accountToDisplay.getName() << " balance is $" << accountToDisplay.getBalance();
}

int main()
{
	Account account1{"Jane Green", 50 };
	Account account2{ "John Blue", -7 };

	//displays current balances

	cout << "Account 1: ";
	displayAccount(account1);
	cout << "\nAccount 2: ";
	displayAccount(account2);

	cout << "\n\nEnter deposit amount for Account 1: "; // prompt
	int depositAmount;
	cin >> depositAmount;
	cout << "adding $" << depositAmount << " to Account 1 balance";
	account1.deposit(depositAmount);

	//displays updated balances

	cout << "\n\nAccount 1: ";
	displayAccount(account1);
	cout << "\nAccount 2: ";
	displayAccount(account2);

	cout << "\n\nEnter deposit amount for Account 2: ";
	cin >> depositAmount;
	cout << "adding $" << depositAmount << " to Account 2 balance";
	account2.deposit(depositAmount);

	//Displays Final Balances

	cout << "\n\nAccount 1: ";
	displayAccount(account1);
	cout << "\nAccount 2: ";
	displayAccount(account2);
}

