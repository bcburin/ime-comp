#ifndef SET_H
#define SET_H

#include <vector>
#include <utility>
#include <ostream>
#include <stdexcept>

using std::vector;
using std::ostream;

template <typename T>
class set {
  private:
    vector<T> list;
    size_t index_of(const T& data) const;
  public:
    set(int initial_capacity = 16);
    set(std::initializer_list<T> elements);
    bool has(const T& data) const;
    set<T>& operator|= (const T& data);
    set<T>& operator|= (const set<T>& other);
    set<T>& operator&= (const set<T>& other);
    set<T>& operator-= (const T& data);
    set<T>& operator-= (const set<T>& other);
    set<T> operator| (const T& data);
    set<T> operator| (const set<T> other);
    set<T> operator& (const set<T> other);
    set<T> operator- (const T& data);
    set<T> operator- (const set<T> other);
    T& operator[] (size_t index) const;
    template <typename TT>
    friend ostream& operator<< (ostream& os, const set<TT>& s);
};

template <typename T>
ostream& operator<< (ostream& os, const set<T>& s);


template <typename T>
set<T>::set(int initial_capacity /*=16*/): list(initial_capacity) {}


template <typename T>
set<T>::set(std::initializer_list<T> elements): list(elements) {}


template <typename T>
bool set<T>::has(const T& data) const {
  return index_of(data) != -1;
}

template <typename T>
set<T>& set<T>::operator|= (const T& data) {
  if(!has(data)) list.push_back(data);
  return *this;
}

template <typename T>
set<T>& set<T>::operator|= (const set<T>& other) {
  for(const auto& element : other.list) *this |= element;
  return *this;
}

template <typename T>
set<T>& set<T>::operator&= (const set<T>& other) { 
  vector<T> inter_list;
  for(const auto& element : list) if(other.has(element)) inter_list.push_back(element);
  list = inter_list;
  return *this;
}

template <typename T>
set<T>& set<T>::operator-= (const T& data) {
  size_t index = index_of(data);
  if(index != -1) {
    for(int i = index; i != list.size()-1; ++i) list[i] = list[i+1];
    list.pop_back();
  }
  return *this;
}

template <typename T>
set<T>& set<T>::operator-= (const set<T>& other) {
  for(const auto& element : other.list) *this -= element;
  return *this;
}


template <typename T>
set<T> set<T>::operator| (const T& data) {
  set<T> nset = *this;
  return nset |= data;
}

template <typename T>
set<T> set<T>::operator| (const set<T> other) {
  set<T> nset = *this;
  return nset |= other;
}

template <typename T>
set<T> set<T>::operator& (const set<T> other) {
  set<T> nset = *this;
  return nset &= other;
}

template <typename T>
set<T> set<T>::operator- (const T& data) {
  set<T> nset = *this;
  return nset -= data;
}

template <typename T>
set<T> set<T>::operator- (const set<T> other) {
  set<T> nset = *this;
  return nset -= other;
}


template <typename T>
T& set<T>::operator[] (size_t index) const {
  if(index < 0 || index >= list.size()) throw std::out_of_range("Out of set range.");
  return list[index]; 
}

template <typename T>
size_t set<T>::index_of(const T& data) const {
  for(int i = 0; i != list.size(); ++i) if(data == list[i]) return i;
  return -1; 
}


template <typename T>
ostream& operator<< (ostream& os, const set<T>& s) {
  os << "{";
  int i = 0;
  for(const auto& element : s.list) os << (i++ != 0 ? ", " : "") << element;
  os << "}";
  return os;
}

#endif