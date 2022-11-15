#include "Fraction.hh"


int gcd(Fraction frac){
	if(frac.denom == 0)
		return frac.num;
	else
		return gcd(Fraction(frac.denom, frac.num % frac.denom));
}



Fraction::Fraction(){
	this->num = 1;
	this->denom =1;
}

Fraction::Fraction(int numinator, int denominator){
	this->num = numinator;
	this->denom = denominator;
}

Fraction::Fraction(int whole){
	this->num = whole;
	this->denom = 1;
}

int Fraction::numinator(){
	return this->num;
}

int Fraction::denominator(){
	return this->denom;
}

Fraction Fraction::operator*=(Fraction other){
	Fraction sol(this->num*other.num,this->denom*other.denom);
	int gcd_ = gcd(sol);
	sol.num /= gcd_;
	sol.denom /= gcd_;
	return sol;
}

Fraction Fraction::operator*=(int other){
	Fraction sol(this->num*other,this->denom);
	int gcd_ = gcd(sol);
	sol.num /= gcd_;
	sol.denom /= gcd_;
	return sol;
}

Fraction Fraction::operator+=(Fraction other){
	Fraction sol(this->num*other.denom + other.num * this->denom,this->denom*other.denom);
	int gcd_ = gcd(sol);
	sol.num /= gcd_;
	sol.denom /= gcd_;
	return sol;
}

Fraction Fraction::operator-=(Fraction other){
	Fraction sol(this->num*other.denom - other.num * this->denom,this->denom*other.denom);
	int gcd_ = gcd(sol);
	sol.num /= gcd_;
	sol.denom /= gcd_;
	return sol;
}
Fraction Fraction::operator/=(Fraction other){
	Fraction sol(this->num*other.denom,this->denom*other.num);
	int gcd_ = gcd(sol);
	sol.num /= gcd_;
	sol.denom /= gcd_;
	return sol;
}

Fraction Fraction::operator/=(int other){
	Fraction sol(this->num/other,this->denom);
	int gcd_ = gcd(sol);
	sol.num /= gcd_;
	sol.denom /= gcd_;
	return sol;
}

bool Fraction::operator==(Fraction other){
	if(this->num/ this->denom == other.num/ other.denom)
		return true;
	return false;

}
Fraction Fraction::operator*(Fraction other){
	return *this *= other;
}

Fraction Fraction::operator*(int other){
	return *this *= other;
}

Fraction Fraction::operator+(Fraction other){
	return *this += other;
}
Fraction Fraction::operator-(Fraction other){
	return *this -= other;
}
Fraction Fraction::operator/(Fraction other){
	return *this /= other;
}

Fraction Fraction::operator/(int other){
	return *this /= other;
}

std::string Fraction::to_string(){
	std::string s = std::to_string(this->num) + "/" + std::to_string(this->denom);
	return s;
}

Fraction operator*(int scar, Fraction frac){
	return frac *= scar;
}












