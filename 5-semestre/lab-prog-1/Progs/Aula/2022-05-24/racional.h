#ifndef RACIONAL_H
#define RACIONAL_H

#include <ostream>
#include <stdexcept>


template <typename T = int>
class racional {
  private:
    T num_;
    T den_;
    void simplificar();
  public:
    static T mdc(T x, T y);
    racional(T num = 0, T den = 1);
    T num() const { return num_; }
    T den() const { return den_; }
    racional<T> operator- ();
    racional<T>& operator+= (const racional<T>&);
    racional<T>& operator-= (const racional<T>&);
    racional<T>& operator*= (const racional<T>&);
    racional<T>& operator/= (const racional<T>&);
    racional<T> operator+ (const racional<T>&);
    racional<T> operator- (const racional<T>&);
    racional<T> operator* (const racional<T>&);
    racional<T> operator/ (const racional<T>&);
    racional<T>& operator++ ();
    racional<T> operator++ (int);
};


template <typename T>
std::ostream& operator<< (std::ostream& os, const racional<T> frac);


template <typename T>
T racional<T>::mdc(T x, T y) {
  while(y) {
    T t = y;
    y = x % y;
    x = t;
  }
  return x;
}


template <typename T>
void racional<T>::simplificar() {
  T comum = mdc(num_, den_);
  num_ /= comum;
  den_ /= comum;
}


template <typename T>
racional<T>::racional(T num /*= 0*/, T den /*= 1*/) {
  if(den == 0) throw std::invalid_argument("Divisao por zero.");
  if(den < 0) {
    den = -den;
    num = -num;
  }
  num_ = num;
  den_ = den;
  simplificar();
}


template <typename T>
racional<T> racional<T>::operator- () { return racional<T>(-num_, den_); }


template <typename T>
racional<T>& racional<T>::operator+= (const racional<T>& outro) {
  num_ = (num_ * outro.den_) + (den_ * outro.num_);
  den_ = (den_ * outro.den_);
  simplificar();
  return *this;
}


template <typename T>
racional<T>& racional<T>::operator-= (const racional<T>& outro) {
  num_ = (num_ * outro.den_) - (den_ * outro.num_);
  den_ = (den_ * outro.den_);
  simplificar();
  return *this;
}


template <typename T>
racional<T>& racional<T>::operator*= (const racional<T>& outro) {
  num_ = num_ * outro.num_;
  den_ = den_ * outro.den_;
  simplificar();
  return *this;
}


template <typename T>
racional<T>& racional<T>::operator/= (const racional<T>& outro) {
  if(outro.num_ == 0) throw std::invalid_argument("Divisao por zero.");
  num_ = num_ * outro.den_;
  den_ = den_ * outro.num_;
  simplificar();
  return *this;
}


template <typename T>
racional<T> racional<T>::operator+ (const racional<T>& outro) { return racional(*this) += outro; }


template <typename T>
racional<T> racional<T>::operator- (const racional<T>& outro) { return racional(*this) += outro; }


template <typename T>
racional<T> racional<T>::operator* (const racional<T>& outro) { return racional(*this) += outro; }


template <typename T>
racional<T> racional<T>::operator/ (const racional<T>& outro) { return racional(*this) += outro; }


template <typename T>
racional<T>& racional<T>::operator++ () {
  num_ += den_;
  return *this;
}


template <typename T>
racional<T> racional<T>::operator++ (int dummy) {
  racional<T> temp(*this);
  num_ += den_;
  return temp;
}


template <typename T>
std::ostream& operator<< (std::ostream& os, const racional<T> frac) {
  return (den() != 1) ? (os << num() << "/" << den()) : (os << num()); 
}

#endif