#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>
using namespace std;

const int default_poly = 10; // Default max degree

class Polynomial
{
private:
    int size;      // degree of polynomial
    int* coeff;    // coefficients array

public:
    // Constructors
    Polynomial();
    Polynomial(int size);
    Polynomial(const Polynomial& other);

    // Assignment
    Polynomial& operator=(const Polynomial& other);

    // Operator overloads
    bool operator==(const Polynomial& other) const;
    Polynomial operator+(const Polynomial& other) const;
    Polynomial operator-(const Polynomial& other) const;
    void operator+=(const Polynomial& other);
    void operator-=(const Polynomial& other);

    // Destructor
    ~Polynomial();

    // Member functions for input/output
    void setCoeff(int degree, int value);
    int getCoeff(int degree) const;
    int getSize() const;
    void input();       // read polynomial from user
    void display() const; // print polynomial
};

#endif
