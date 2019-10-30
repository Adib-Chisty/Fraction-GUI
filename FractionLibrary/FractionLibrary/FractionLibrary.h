// FractionLibrary.h - Contains declarations of fraction operations
#pragma once

//#ifdef FRACTIONLIBRARY_EXPORTS
#define FRACTIONLIBRARY_API __declspec(dllexport)
//#else
//#define FRACTIONLIBRARY_API __declspec(dllimport)
//#endif

// Header body below

#include <iostream>
#include <string>;

using namespace std;

//Fraction exception
class FRACTIONLIBRARY_API FractionException {
public:
	FractionException(const string& message);
	string& what();
private:
	string message;
};

class FRACTIONLIBRARY_API Fraction {
public:
	//constructors
	Fraction();
	Fraction(int n);
	Fraction(int n, int d);
	//accessors
	int numerator() const;
	int denominator() const;
	//misc
	void simplify();
	Fraction clone() const; //returns a deep copy of the object
	//operator overloads (member):these operands will always be on the right beside of the object
	Fraction& operator+=(const Fraction& f);    //increment by fraction
	Fraction& operator+=(const int i);          //increment by integer

	Fraction& operator++();                     //pre increment
	Fraction operator++ (int i);                //post increment

	Fraction& operator--();                     //pre decrement
	Fraction operator--(int i);                 //post decrement

private:
	//integers to represent the fraction
	int num;
	int den;
	//misc
	int getGCD(const int n, const int m) const;
	//Piping operators
	friend ostream& operator<<(ostream& os, const Fraction& f);
	friend istream& operator>>(istream& in, Fraction& f);
};

//Operator overloading (methods): these operands could be either on left or right side of the object
//so decided to define them as methods instead of class members as they need more params
//aka mixed cases

//Negation
 FRACTIONLIBRARY_API Fraction operator- (const Fraction& f);
//Addition
 FRACTIONLIBRARY_API Fraction operator+ (const Fraction& lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API Fraction operator+ (const int lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API Fraction operator+ (const Fraction& lhs, const int rhs);
//Subtraction
 FRACTIONLIBRARY_API Fraction operator- (const Fraction& lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API Fraction operator- (const int lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API Fraction operator- (const Fraction& lhs, const int rhs);
//Multiplication
 FRACTIONLIBRARY_API Fraction operator* (const Fraction& lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API Fraction operator* (const int lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API Fraction operator* (const Fraction& lhs, const int rhs);
//Division
 FRACTIONLIBRARY_API Fraction operator/ (const Fraction& lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API Fraction operator/ (const int lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API Fraction operator/ (const Fraction& lhs, const int rhs);
//Less than
 FRACTIONLIBRARY_API bool operator< (const Fraction& lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API bool operator< (const int lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API bool operator< (const Fraction& lhs, const int rhs);
//Greater than
 FRACTIONLIBRARY_API bool operator> (const Fraction& lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API bool operator> (const int lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API bool operator> (const Fraction& lhs, const int rhs);
//Less than or equal to
 FRACTIONLIBRARY_API bool operator<= (const Fraction& lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API bool operator<= (const int lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API bool operator<= (const Fraction& lhs, const int rhs);
//Greater than or equal to
 FRACTIONLIBRARY_API bool operator>= (const Fraction& lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API bool operator>= (const int lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API bool operator>= (const Fraction& lhs, const int rhs);
//Is
 FRACTIONLIBRARY_API bool operator== (const Fraction& lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API bool operator== (const int lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API bool operator== (const Fraction& lhs, const int rhs);
//Not is
 FRACTIONLIBRARY_API bool operator!= (const Fraction& lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API bool operator!= (const int lhs, const Fraction& rhs);
 FRACTIONLIBRARY_API bool operator!= (const Fraction& lhs, const int rhs);