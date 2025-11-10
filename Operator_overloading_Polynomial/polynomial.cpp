#include "polynomial.h"
#include <iostream>
#include <algorithm>
using namespace std;

// Default constructor
Polynomial::Polynomial() : size(default_poly), coeff(new int[default_poly + 1])
{
    for (int i = 0; i <= default_poly; ++i)
        coeff[i] = 0;
}

// Parameterized constructor
Polynomial::Polynomial(int size) : size(size), coeff(new int[size + 1])
{
    for (int i = 0; i <= size; ++i)
        coeff[i] = 0;
}

// Copy constructor
Polynomial::Polynomial(const Polynomial& other)
{
    size = other.size;
    coeff = new int[size + 1];
    for (int i = 0; i <= size; ++i)
        coeff[i] = other.coeff[i];
}

// Assignment operator
Polynomial& Polynomial::operator=(const Polynomial& other)
{
    if (this != &other)
    {
        delete[] coeff;
        size = other.size;
        coeff = new int[size + 1];
        for (int i = 0; i <= size; ++i)
            coeff[i] = other.coeff[i];
    }
    return *this;
}

// Equality
bool Polynomial::operator==(const Polynomial& other) const
{
    if (size != other.size)
        return false;
    for (int i = 0; i <= size; ++i)
        if (coeff[i] != other.coeff[i])
            return false;
    return true;
}

// Addition
Polynomial Polynomial::operator+(const Polynomial& other) const
{
    int maxSize = max(size, other.size);
    Polynomial temp(maxSize);
    for (int i = 0; i <= maxSize; ++i)
    {
        int a = (i <= size) ? coeff[i] : 0;
        int b = (i <= other.size) ? other.coeff[i] : 0;
        temp.coeff[i] = a + b;
    }
    return temp;
}

// Subtraction
Polynomial Polynomial::operator-(const Polynomial& other) const
{
    int maxSize = max(size, other.size);
    Polynomial temp(maxSize);
    for (int i = 0; i <= maxSize; ++i)
    {
        int a = (i <= size) ? coeff[i] : 0;
        int b = (i <= other.size) ? other.coeff[i] : 0;
        temp.coeff[i] = a - b;
    }
    return temp;
}

// += operator
void Polynomial::operator+=(const Polynomial& other)
{
    *this = *this + other;
}

// -= operator
void Polynomial::operator-=(const Polynomial& other)
{
    *this = *this - other;
}

// Destructor
Polynomial::~Polynomial()
{
    delete[] coeff;
    coeff = nullptr;
}

// Set/get coefficient
void Polynomial::setCoeff(int degree, int value)
{
    if (degree <= size)
        coeff[degree] = value;
}

int Polynomial::getCoeff(int degree) const
{
    if (degree <= size)
        return coeff[degree];
    return 0;
}

int Polynomial::getSize() const
{
    return size;
}

// Input polynomial from user
void Polynomial::input()
{
    for (int i = size; i >= 0; --i)
    {
        cout << "Enter coefficient for degree " << i << ": ";
        cin >> coeff[i];
    }
}

// Display polynomial
void Polynomial::display() const
{
    bool first = true;
    for (int i = size; i >= 0; --i)
    {
        int c = coeff[i];
        if (c != 0)
        {
            if (!first && c > 0) cout << " + ";
            else if (c < 0) cout << " ";
            cout << c << "X^" << i;
            first = false;
        }
    }
    if (first) cout << "0"; // all zero
    cout << endl;
}
