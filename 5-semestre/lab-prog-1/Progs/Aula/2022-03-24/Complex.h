#ifndef COMPLEX_H
#define COMPLEX_H

#include <cmath>
#include <iostream>
#include <stdexcept>

class Complex {
  private:
    double re, im;
  public:
    Complex(double re = 0, double im = 0);
    Complex(const Complex& z);

    double real() const {return re;}
    double imag() const {return im;}

    double abs() const { return sqrt(re*re + im*im); }

    Complex conjugate() const { return Complex(re, -im); }

    Complex& operator+=(const Complex& other);
    Complex& operator-=(const Complex& other);
    Complex& operator*=(const Complex& other);
    Complex& operator/=(const Complex& other);
    Complex& operator/=(double other);
};

Complex operator+(Complex a, Complex b);
Complex operator-(Complex a, Complex b);
Complex operator*(Complex a, Complex b);
Complex operator/(Complex a, Complex b);

bool operator==(Complex& a, Complex& b);
bool operator!=(Complex& a, Complex& b);

std::ostream& operator<<(std::ostream& os, const Complex& z);

#endif