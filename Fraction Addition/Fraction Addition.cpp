#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d;
    char placeholder = '/';

    cout << "Fraction Addition Calculator, by Olga Allen" << endl << endl;

    while (true)
    {
        cout << "First fraction(a/b): ";
        cin >> a >> placeholder >> b;
        cout << "Second fraction(c/d): ";
        cin >> c >> placeholder >> d;
        int numerator = a * d + b * c;
        int denominator = b * d;
        cout << "Sum: " << numerator << placeholder << denominator << endl <<endl;
    }
}
//Test Data:
//first fraction(a / b) : 1 / 3
//second fraction(c / d) : 2 / 5
//sum : 11 / 15
//
//first fraction(a / b) : 1 / 4
//second fraction(c / d) : 2 / 3
//sum : 11 / 12
//
//first fraction(a / b) : 1 / 2
//second fraction(c / d) : 1 / 2
//sum : 4 / 4
//
//first fraction(a / b) : 7 / 10
//second fraction(c / d) : 9 / 15
//sum : 195 / 150
//
//first fraction(a / b) : 76 / 80
//second fraction(c / d) : 95 / 100
//sum : 15200 / 8000