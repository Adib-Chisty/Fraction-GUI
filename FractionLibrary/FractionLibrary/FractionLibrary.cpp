// FractionLibrary.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "FractionLibrary.h"

//body below

#include <iostream>

using namespace std;

//Implement Exception class ====================================
FractionException::FractionException(const string& message) : message(message) {}

string& FractionException::what() {
	return message;
}

//Implement Fraction Class =====================================
//constructors
Fraction::Fraction() { //no args
	num = 0;
	den = 1;
}

Fraction::Fraction(int n) { //single arg
	num = n;
	den = 1;
}

Fraction::Fraction(int n, int d) { //multi arg
	if (d == 0) {
		throw FractionException("Denominator cannot be zero!");
	}
	num = n;
	den = d;
	simplify();
}

//accessors
int Fraction::numerator() const {
	return num;
}

int Fraction::denominator() const {
	return den;
}

//misc
void Fraction::simplify() {
	int cmn_div = getGCD(abs(num), abs(den));
	//check case for double neg and double positive
	if ((num < 0 && den < 0) || (num > 0 && den > 0)) {
		num = abs(num) / cmn_div;
		den = abs(den) / cmn_div;
	}
	else {
		num = -abs(num) / cmn_div;
		den = abs(den) / cmn_div;
	}
}

int Fraction::getGCD(const int n, const int m) const {
	if ((m <= n && n % m == 0) || n == 0) {
		return m;
	}
	else if (n < m) {
		return getGCD(m, n);
	}
	else {
		return getGCD(m, n % m);
	}
}

Fraction Fraction::clone() const {
	return Fraction(num, den);
}

//member operator overloads from fraction_16ac110.h ===========
Fraction& Fraction::operator+=(const Fraction& f) {
	num = num * f.denominator() + den * f.numerator();
	den = den * f.denominator();
	simplify();
	return *this;
}

Fraction& Fraction::operator+=(const int i) {
	num = num + i * den;
	simplify();
	return *this;
}

Fraction& Fraction::operator++() {
	num = num + den;
	simplify();
	return *this;
}

Fraction Fraction::operator++(int i) {
	Fraction deep_copy = clone();
	num = num + den;
	return deep_copy;
}

Fraction& Fraction::operator--() {
	num = num - den;
	simplify();
	return *this;
}

Fraction Fraction::operator--(int i) {
	Fraction deep_copy = clone();
	num = num - den;
	return deep_copy;
}
//Implement operator methods from fraction_16ac110.h ===========

//Piping operators
ostream& operator<<(ostream& os, const Fraction& f) {
	os << f.numerator() << "/" << f.denominator();
	return os;
}
istream& operator>>(istream& in, Fraction& f) {
	string user_input;
	in >> user_input;
	if (in) {
		size_t slash = user_input.find('/');
		//did not find a slash
		if (slash == string::npos) {
			try {
				f.num = stoi(user_input);
				f.den = 1;
			}
			catch (exception & e) {
				throw FractionException("Inputted invalid character(s) for fraction!");
			}
		}
		else { //found a slash
			try {
				string top = user_input.substr(0, slash);
				string bottom = user_input.substr(slash + 1);
				f.num = stoi(top);
				f.den = stoi(bottom);
			}
			catch (exception & e) {
				throw FractionException("Inputted invalid character(s) for fraction!");
			}
		}
	}
	return in;
}

//Negation
Fraction operator-(const Fraction& f) {
	return Fraction(-f.numerator(), f.denominator());
}

//Cross multiply for add and subtract
//Addition
Fraction operator+(const Fraction& lhs, const Fraction& rhs) {
	return Fraction(lhs.numerator() * rhs.denominator() + rhs.numerator() * lhs.denominator(),
		lhs.denominator() * rhs.denominator());
}

Fraction operator+(const int lhs, const Fraction& rhs) {
	return Fraction(rhs.numerator() + lhs * rhs.denominator(), rhs.denominator());
}

Fraction operator+(const Fraction& lhs, const int rhs) {
	return Fraction(lhs.numerator() + rhs * (lhs.denominator()), lhs.denominator());
}

//Subtraction
Fraction operator-(const Fraction& lhs, const Fraction& rhs) {
	return Fraction(lhs.numerator() * rhs.denominator() - rhs.numerator() * lhs.denominator(),
		lhs.denominator() * rhs.denominator());
}

Fraction operator-(const int lhs, const Fraction& rhs) {
	return Fraction(lhs * rhs.denominator() - rhs.numerator(), rhs.denominator());
}

Fraction operator-(const Fraction& lhs, const int rhs) {
	return Fraction(lhs.numerator() - rhs * lhs.denominator(), lhs.denominator());
}

//Multiplication
Fraction operator*(const Fraction& lhs, const Fraction& rhs) {
	return Fraction(lhs.numerator() * rhs.numerator(), lhs.denominator() * rhs.denominator());
}

Fraction operator*(const int lhs, const Fraction& rhs) {
	return Fraction(lhs * rhs.numerator(), rhs.denominator());
}

Fraction operator*(const Fraction& lhs, const int rhs) {
	return Fraction(lhs.numerator() * rhs, lhs.denominator());
}

//Division
Fraction operator/(const Fraction& lhs, const Fraction& rhs) {
	return Fraction(lhs.numerator() * rhs.denominator(), lhs.denominator() * rhs.numerator());
}

Fraction operator/(const int lhs, const Fraction& rhs) {
	return lhs * Fraction(rhs.denominator(), rhs.numerator());
}

Fraction operator/(const Fraction& lhs, const int rhs) {
	return Fraction(lhs.numerator(), rhs * lhs.denominator());
}

//Less than
bool operator<(const Fraction& lhs, const Fraction& rhs) {
	return lhs.numerator() * rhs.denominator() < rhs.numerator() * lhs.denominator();
}

bool operator<(const int lhs, const Fraction& rhs) {
	return lhs * rhs.denominator() < rhs.numerator();
}

bool operator<(const Fraction& lhs, const int rhs) {
	return lhs.numerator() < rhs * lhs.denominator();
}

//Greater than
bool operator>(const Fraction& lhs, const Fraction& rhs) {
	return lhs.numerator() * rhs.denominator() > rhs.numerator()* lhs.denominator();
}

bool operator>(const int lhs, const Fraction& rhs) {
	return lhs * rhs.denominator() > rhs.numerator();
}

bool operator>(const Fraction& lhs, const int rhs) {
	return lhs.numerator() > rhs* lhs.denominator();
}

//Less than or equal to
bool operator<=(const Fraction& lhs, const Fraction& rhs) {
	return lhs.numerator() * rhs.denominator() <= rhs.numerator() * lhs.denominator();
}

bool operator<=(const int lhs, const Fraction& rhs) {
	return lhs * rhs.denominator() <= rhs.numerator();
}

bool operator<=(const Fraction& lhs, const int rhs) {
	return lhs.numerator() <= rhs * lhs.denominator();
}

//Greater than or equal to
bool operator>=(const Fraction& lhs, const Fraction& rhs) {
	return lhs.numerator() * rhs.denominator() >= rhs.numerator() * lhs.denominator();
}

bool operator>=(const int lhs, const Fraction& rhs) {
	return lhs * rhs.denominator() >= rhs.numerator();
}

bool operator>=(const Fraction& lhs, const int rhs) {
	return lhs.numerator() >= rhs * lhs.denominator();
}

//Is?
bool operator==(const Fraction& lhs, const Fraction& rhs) {
	return lhs.numerator() * rhs.denominator() == rhs.numerator() * lhs.denominator();
}

bool operator==(const int lhs, const Fraction& rhs) {
	return lhs * rhs.denominator() == rhs.numerator();
}

bool operator==(const Fraction& lhs, const int rhs) {
	return lhs.numerator() == rhs * lhs.denominator();
}

//Not is?
bool operator!=(const Fraction& lhs, const Fraction& rhs) {
	return lhs.numerator() * rhs.denominator() != rhs.numerator() * lhs.denominator();
}

bool operator!=(const int lhs, const Fraction& rhs) {
	return lhs * rhs.denominator() != rhs.numerator();
}

bool operator!=(const Fraction& lhs, const int rhs) {
	return lhs.numerator() != rhs * lhs.denominator();
}