// Operator_overloading_Polynomial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"polynomial.h"
using namespace std;
int main() {
	int coeff;

	cout << "Enter the degree of Coefficient for polynomial 1?" << endl;
	cin >> coeff;
	Polynomial poly_1(coeff);
	cin >> poly_1;

	cout << "Enter the degree of Coefficient for polynomial 2?" << endl;
	cin >> coeff;
	Polynomial poly_2(coeff);
	cin >> poly_2;
	cout << endl;

	cout << "Polynomial 1 = " << poly_1 << endl;
	cout << "Polynomial 2 = " << poly_2 << endl;

	cout << "Test cases for operator+ and operator- " << endl;
	cout << endl << "Polynomial 1 + Polynomial 2  is = " << poly_1 + poly_2 << endl;

	cout << "Polynomial 1 - Polynomial 2 is  = " << poly_1 - poly_2 << endl;

	cout << "Testing for operator == ";
	if (poly_1 == poly_2)
	{
		cout << "polynomials are the same." << endl;
	}
	else
	{
		cout << " polynomials are different." << endl;
	}
	return 0;
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
