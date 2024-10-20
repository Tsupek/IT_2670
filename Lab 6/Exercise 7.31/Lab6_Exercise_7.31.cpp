// Lab6_Exercise_7.31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


void stringReverse(const string& str, int index) {
    if (index == str.length()) {
        return;
    }

    stringReverse(str, index + 1);

    cout << str[index];
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Reversed string: ";
    stringReverse(input, 0);
    cout << endl;

    return 0;
}

