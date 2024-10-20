// Trevor_Supek_Lab5_5.20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Pythagorean Triples (a, b, c) where a, b, c <= 500:\n";
    cout << "--------------------------------------------------\n";
    cout << "  a\t  b\t  c\n";
    cout << "--------------------------------------------------\n";

    // Loop through all possible values of a, b, and c
    for (int a = 1; a <= 500; ++a) {
        for (int b = a; b <= 500; ++b) { // Start b from a to avoid duplicates
            for (int c = b; c <= 500; ++c) { // Start c from b to avoid duplicates
                if (a * a + b * b == c * c) {
                    cout << a << "\t" << b << "\t" << c << "\n";
                }
            }
        }
    }

    cout << "--------------------------------------------------\n";
    return 0;
}
