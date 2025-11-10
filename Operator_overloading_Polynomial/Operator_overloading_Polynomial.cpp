// Operator_overloading_Polynomial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "polynomial.h"
using namespace std;

int main()
{
    int degree;

    // Polynomial 1
    cout << "Enter the degree of polynomial 1: ";
    cin >> degree;
    Polynomial poly1(degree);
    poly1.input();

    // Polynomial 2
    cout << "Enter the degree of polynomial 2: ";
    cin >> degree;
    Polynomial poly2(degree);
    poly2.input();

    cout << "\nPolynomial 1 = ";
    poly1.display();

    cout << "Polynomial 2 = ";
    poly2.display();

    // Addition
    cout << "\nPolynomial 1 + Polynomial 2 = ";
    Polynomial sum = poly1 + poly2;
    sum.display();

    // Subtraction
    cout << "Polynomial 1 - Polynomial 2 = ";
    Polynomial diff = poly1 - poly2;
    diff.display();

    // Equality check
    cout << "\nChecking equality: ";
    if (poly1 == poly2)
        cout << "Polynomials are equal." << endl;
    else
        cout << "Polynomials are different." << endl;

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
