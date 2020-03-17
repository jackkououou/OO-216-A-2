#include <iostream>
#include "Fraction.h"

using namespace std;

FracList::FracList()
{
	size = 0;
	Fpntr = NULL;
}
FracList::FracList(const FracList& obj)
{
	size = obj.size;
	Fpntr = new Fraction[size];
}
FracList::~FracList()
{
	size = NULL;
	delete Fpntr;
}
Fraction::Fraction()
{
	num = 0;
	den = 1;
};
Fraction::Fraction(const Fraction& obj)
{
	this->num = obj.num;
	this->den = obj.den;
}
Fraction& Fraction::operator= (const Fraction& right)
{
	this->num = right.num;
	this->den = right.den;
	return *this;
}
Fraction& Fraction::operator-= (const Fraction& right)
{
	int n1 = this->num, n2 = right.num,
		d1 = this->den, d2 = right.den;
	Fraction temp;
	if (d1 == d2)
	{
		temp.num = n1 - n2;
		temp.den = d1;
		*this = temp;
		return *this;
	}
	else
	{
		temp.num = (n1 * d2) - (n2 * d1);
		temp.den = d1 * d2;
		*this = temp;
		return *this;
	}
}
Fraction& Fraction::operator+= (const Fraction& right)
{
	int n1 = this->num, n2 = right.num,
		d1 = this->den, d2 = right.den;
	Fraction temp;
	if (d1 == d2)
	{
		temp.num = n1 + n2;
		temp.den = d1;
		temp.reduce();
		*this = temp;
		return *this;
	}
	else
	{
		temp.num = (n1 * d2) + (n2 * d1);
		temp.den = d1 * d2;
		temp.reduce();
		*this = temp;
		return *this;
	}
}
Fraction& Fraction::operator*= (const Fraction& right)
{
	int n1 = this->num, n2 = right.num,
		d1 = this->den, d2 = right.den;
	Fraction temp;

	temp.num = n1 * n2;
	temp.den = d1 * d2;
	temp.reduce();
	return temp;
}
Fraction& Fraction::operator/=(const Fraction& right)
{
	int n1 = this->num, n2 = right.num,
		d1 = this->den, d2 = right.den;
	Fraction temp;

	temp.num = n1 * d2;
	temp.den = d1 * n2;
	temp.reduce();
	*this = temp;
	return *this;
}
Fraction Fraction::operator+ (const Fraction& right)
{
	int n1 = this->num, n2 = right.num,
		d1 = this->den, d2 = right.den;
	Fraction temp;
	if (d1 == d2)
	{
		temp.num = n1 + n2;
		temp.den = d1;
		temp.reduce();
		return temp;
	}
	else 
	{
		temp.num = (n1 * d2) + (n2 * d1);
		temp.den = d1 * d2;
		temp.reduce();
		return temp;
	}
}
Fraction Fraction::operator-(const Fraction& right)
{
	int n1 = this->num, n2 = right.num,
		d1 = this->den, d2 = right.den;
	Fraction temp;
	if (d1 == d2)
	{
		temp.num = n1 - n2;
		temp.den = d1;
		temp.reduce();
		return temp;
	}
	else
	{
		temp.num = (n1 * d2) - (n2 * d1);
		temp.den = d1 * d2;
		temp.reduce();
		return temp;
	}
}
Fraction Fraction::operator*(const Fraction& right)
{
	int n1 = this->num, n2 = right.num,
		d1 = this->den, d2 = right.den;
	Fraction temp;

	temp.num = n1 * n2;
	temp.den = d1 * d2;
	temp.reduce();
	return temp;
}
Fraction Fraction::operator/(const Fraction& right)
{
	int n1 = this->num, n2 = right.num,
		d1 = this->den, d2 = right.den;
	Fraction temp;

	temp.num = n1 * d2;
	temp.den = d1 * n2;
	temp.reduce();
	return temp;
}
bool Fraction::operator==(const Fraction& right)
{
	if (this->num == right.num && this->den == right.den)
		return true;
	else
		return false;
}
bool Fraction::operator!=(const Fraction& right)
{
	if (this->num != right.num || this->den != right.den)
		return true;
	else
		return false;
}
bool Fraction::operator<(const Fraction& right)
{
	double _this = this->num / this->den;
	double _right = right.num / right.den;
	if (_this < _right)
		return true;
	else
		return false;
}
bool Fraction::operator>(const Fraction& right)
{
	double _this = this->num / this->den;
	double _right = right.num / right.den;
	if (_this > _right)
		return true;
	else
		return false;
}
ostream& operator << (ostream& output, const Fraction& frac)
{
	output << frac.num << '/' << frac.den;
	return output;
}
istream& operator >> (istream& input,  Fraction& frac)
{
	input >> frac.num;
	input.ignore();
	input >> frac.den;
	return input;
}
void Fraction::reduce()
{
	for (int i = 2; i < this->den; i++)
	{
		if ((this->num % i) == 0 && (this->den % i) == 0)
		{
			this->num /= i;
			this->den /= i;
		}
	}
}
Fraction::~Fraction()
{

};