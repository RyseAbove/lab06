#include "rationals.h"

#include <iostream>
#include <cstdlib> // for abs
#include <string> // for to_string
using namespace std;

// FІХМΕ: implement this method
Rational::Rational(int n, int d) {
  // set numer and denom, and then simplify
    numer = n;
    denom = d;

    simplify();
  // when you're inside the class implementation and you want to call
  // a method on your current object, you don't use a dot: just call
  // it like you would call a function

  // remember that constructors don't return anything!
  // They implicitly "return" a newly-made object.
}

// FІХМΕ: implement this method
std::string Rational::toPrettyString() const {
  // You can't call simplify anymore because of "const", but you 
  // should never need to because it'll be called for you now
  // whenever a Rational is constructed.
  string numerStr = to_string(numer);
  string denomStr = to_string(denom);

  // return a pretty version of the current object

  return "stub";
}

// FІХМΕ: implement this method
Rational Rational::operator*(const Rational& other) const {
  // return a new Rational that is the result of multiplying the current object with other

  // remember that numer2 is other.numer now, etc.

  // remember that simplification is done in the constructor,
  // so you don't have to do it twice

  return Rational(0, 0);
}

// FІХМΕ: implement this method
Rational Rational::operator+(const Rational& other) const {
  // return a new Rational that is the result of adding the current object with other
  Rational result;

  result.numer = numer + other.numer;
  result.denom = denom + other.denom;
  
  return Rational(0, 0);
}

/*
There's no need for GCD to be a member function.
*/
int GCD(int a, int b) {
  while (b != 0) {
    int newA = b;
    int newB = a % b;
    a = newA;
    b = newB;
  }

  return a;
}

// FІХМΕ: implement this method to simplify the current object
// If the number is negative, the numer should become negative (*not* the denom).
void Rational::simplify() {
  // Same as last lab, but there's no need for parameters! 
  // numer and denom are member variables, so they're already defined--
  // it's your job to change them here

  // First, figure out if the rational number is negative or positive by 
  // checking 3 cases:
  // 1. if numer < 0 and denom > 0, it's negative
  // 2. if numer > 0 and denom < 0, it's negative
  // 3. if none of the above are true, then it's positive
  // Save that information for later, because we'll need to make numer and denom
  // be positive for a while.
  

  // convert numer and denom to positive numbers


  // simplify numer and denom using the GCD


  // negate numer if it should be negative
}
