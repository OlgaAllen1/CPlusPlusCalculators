#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;
	char placeholder;
	cout << "Quadratic Formula Calculator, by Olga Allen" << endl<< endl;

	while (true)
	{
		cout << "Enter coefficient a: ";
		cin >> a;
		cout << "Enter coefficient b: ";
		cin >> b;
		cout << "Enter coefficient c: ";
		cin >> c;
		double rootExpression = pow(b, 2) - 4 * a * c;
		if (rootExpression < 0) {
			cout << "No Answer" << endl;
		}
		else 
		{
			double discriminant = sqrt(rootExpression);
			double x1 = (-b + discriminant) / (2 * a);
			double x2 = (-b - discriminant) / (2 * a);
			cout << "x-intercept 1: " << x1 << endl;
			cout << "x-intercept 2: " << x2 << endl <<endl;
		}
    
	}
	

}
//Test Cases;
//
//Quadratic Formula Calculator, by Olga Allen

//Enter coefficient a : 3
//Enter coefficient b : 6
//Enter coefficient c : -9
//x - intercept 1 : 1
//x - intercept 2 : -3
//
//Enter coefficient a : 1
//Enter coefficient b : -2
//Enter coefficient c : -24
//x - intercept 1 : 6
//x - intercept 2 : -4
//
//Enter coefficient a : 6
//Enter coefficient b : 3
//Enter coefficient c : -6
//x - intercept 1 : 0.780776
//x - intercept 2 : -1.28078
//
//Enter coefficient a : 2
//Enter coefficient b : 4
//Enter coefficient c : -8
//x - intercept 1 : 1.23607
//x - intercept 2 : -3.23607
//
//Enter coefficient a : 1
//Enter coefficient b : 4
//Enter coefficient c : -20
//x - intercept 1 : 2.89898
//x - intercept 2 : -6.89898

