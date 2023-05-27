// CPlusPlusCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, r;
    const double pi = 3.1415926535;
    cout << "Circle Area Calculator, by Olga Allen" << endl;
    cout << "Radius:";
    cin >> r;
    a = pi * pow(r, 2);
    cout << "Area:" << setprecision(10) << fixed << a;

}

// Test cases:
    // Radius           Area    
    // 1.33             5.5571632448
    // 2.75             23.7582944421
    // 3.25             33.1830724026
    // 4.99             78.2259712314
    // 5.50             95.0331777684