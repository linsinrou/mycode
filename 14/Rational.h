#ifndef RATIONAL_H
#define RATIONAL_H
#include <string>
using namespace std;

class Rational
{
public:
	Rational();
	Rational(int numerator, int denominator);
	int getNumerator() const;
	int getDenominator() const;
	Rational add(const Rational& secondRational) const;
	Rational subtract(const Rational& secondRational) const;
	Rational multiply(const Rational& secondRational) const;
	Rational divide(const Rational& secondRational) const;
	int compareTo(const Rational& secondRational) const;
	bool equals(const Rational& secondRational) const;
	int intValue() const;
	double doubleValue() const;
	string toString() const;
	//
	Rational(int numerator);
	Rational& operator+=(const Rational& r2);
	Rational& operator-=(const Rational& r2);
	Rational& operator*=(const Rational& r2);
	Rational& operator/=(const Rational& r2);

	int& operator[](int index);

	Rational& operator++();
	Rational& operator--();

	Rational operator++(int n);
	Rational operator--(int n);

	Rational operator+();
	Rational operator-();

	friend ostream& operator<<(ostream& , const Rational&);
	friend istream& operator>>(istream& ,  Rational&);

	

private:
	int numerator;
	int denominator;
	static int gcd(int n, int d);
	
};

bool operator<(const Rational& r1, const Rational& r2);
bool operator<=(const Rational& r1, const Rational& r2);
bool operator>(const Rational& r1, const Rational& r2);
bool operator>=(const Rational& r1, const Rational& r2);
bool operator==(const Rational& r1, const Rational& r2);
bool operator!=(const Rational& r1, const Rational& r2);

Rational operator+(const Rational& r1, const Rational& r2);
Rational operator-(const Rational& r1, const Rational& r2);
Rational operator*(const Rational& r1, const Rational& r2);
Rational operator/(const Rational& r1, const Rational& r2);

#endif
