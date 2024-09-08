// Lab_1-Exercise_2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//IT 2670- Trevor Supek- S01233499

#include <iostream>
using namespace std;

int main()
{
	int radius(0);

	cout << "Enter the circle radius: ";
	cin >> radius;

	cout << "The diameter is " << radius * 2.0
		<< "\nCircumference is " << 2 * 3.14159 * radius
		<< "\nArea is " << 3.14159 * radius * radius << endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
