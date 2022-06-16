
#include "Complex.h"

Complex::Complex(double re /*=0*/, double im /*=0*/): re(re), im(im) {}

Complex::Complex(const Complex& z): re(z.re), im(z.im) {}

Complex& Complex::operator+=(const Complex& other) {
  re += other.re;
  im += other.im;
  return *this;
}

Complex& Complex::operator-=(const Complex& other) {
  re -= other.re;
  im -= other.im;
  return *this;
}

Complex& Complex::operator*=(const Complex& other) {
  double old_re = re;
  re = old_re*other.re - im*other.im;
  im = old_re*other.im + im*other.re;
  return *this;
}

Complex& Complex::operator/=(double other) {
  if (other == 0)
    throw std::invalid_argument( "received 0 as divisor" );
  re /= other;
  im /= other;
  return *this;
}

Complex& Complex::operator/=(const Complex& other) {
  double mod = other.abs();
  if ( mod == 0 )
    throw std::invalid_argument( "received 0 as divisor" );
  Complex z(re*other.re + im*other.im, im*other.re - re*other.im);
  z /= mod * mod;
  re = z.re;
  im = z.im;
  return *this;
}

Complex operator+(Complex a, Complex b) { return a+= b; }
Complex operator-(Complex a, Complex b) { return a-= b; }
Complex operator*(Complex a, Complex b) { return a*= b; }
Complex operator/(Complex a, Complex b) { return a/= b; }

bool operator==(Complex& a, Complex& b) { return a.real() == b.real() && a.imag() == b.imag(); }
bool operator!=(Complex& a, Complex& b) { return !( a == b ); }

std::ostream& operator<<(std::ostream& os, const Complex& z) {
  const char *op = z.imag() >= 0 ? " + " : " - ";
  os << z.real() << op << fabs(z.imag()) << "j";
  return os;
}