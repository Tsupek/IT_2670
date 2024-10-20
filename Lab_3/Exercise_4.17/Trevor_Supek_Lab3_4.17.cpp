// Trevor_Supek_Lab3_4.17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int counter = 1;   // A counter to count up to 10
    int number;        // The current number input to the program
    int largest;       // The largest number found so far


    cout << "Enter number 1: ";
    cin >> number;
    largest = number;


    while (counter < 10) {
        cout << "Enter number " << counter + 1 << ": ";
        cin >> number;

        if (number > largest) {
            largest = number;
        }

        counter++;
    }

    // Output the largest number found
    cout << "The largest number is: " << largest << endl;

    return 0;
}