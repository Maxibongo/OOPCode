#include <iostream>
#include <vector>
#include <string>

class Fraction{
public:
	int num, denom;
	int numinator();
	int denominator();
	Fraction();
	Fraction(int numinator, int denominator);
	Fraction(int whole);
	Fraction operator*=(Fraction other);
	Fraction operator*=(int other);
	Fraction operator+=(Fraction other);
	Fraction operator-=(Fraction other);
	Fraction operator/=(Fraction other);
	Fraction operator/=(int other);
	bool operator==(Fraction other);
	Fraction operator*(Fraction other);
	Fraction operator*(int other);
	Fraction operator+(Fraction other);
	Fraction operator-(Fraction other);
	Fraction operator/(Fraction other);
	Fraction operator/(int other);
	std::string to_string();
};

Fraction operator*(int scar, Fraction frac);

