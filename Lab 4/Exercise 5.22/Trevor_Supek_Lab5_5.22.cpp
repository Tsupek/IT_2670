// Trevor_Supek_Lab5_5.22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void evaluateExpressions(int x, int y, int a, int b, int g, int i, int j) {
    // Expression A
    bool originalA = !(x < 5) && !(y >= 7);
    bool equivalentA = (x >= 5) || (y < 7);
    cout << "A: Original = " << originalA << ", Equivalent = " << equivalentA <<  endl;

    // Expression B
    bool originalB = !(a == b) || !(g != 5);
    bool equivalentB = (a != b) || (g == 5);
    cout << "B: Original = " << originalB << ", Equivalent = " << equivalentB <<  endl;

    // Expression C
    bool originalC = !((x <= 8) && (y > 4));
    bool equivalentC = (x > 8) || (y <= 4);
    cout << "C: Original = " << originalC << ", Equivalent = " << equivalentC <<  endl;

    // Expression D
    bool originalD = !((i > 4) || (j <= 6));
    bool equivalentD = (i <= 4) && (j > 6);
    cout << "D: Original = " << originalD << ", Equivalent = " << equivalentD <<  endl;
}

int main() {
    int x = 6, y = 5, a = 1, b = 1, g = 5, i = 5, j = 7;

    evaluateExpressions(x, y, a, b, g, i, j);
    return 0;
}
