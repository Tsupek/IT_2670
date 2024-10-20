// Trevor_Supek_Lab6_7.27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    const int SIZE = 1000; 
    vector<bool> isPrime(SIZE, true); 

    // 0 and 1 are not prime numbers
    isPrime[0] = false;
    isPrime[1] = false;

    
    for (int i = 2; i * i < SIZE; i++) {
        if (isPrime[i]) {
            
            for (int j = i * i; j < SIZE; j += i) {
                isPrime[j] = false;
            }
        }
    }

    
    cout << "Prime numbers between 2 and 999:" << endl;
    for (int i = 2; i < SIZE; i++) {
        if (isPrime[i]) {
            cout << i << ", ";
        }
    }
    cout << endl;

    return 0;
}