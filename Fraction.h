#ifndef FRACTION
#define FRACTION
class FracList
{
private:
	int size;
	Fraction* Fpntr;
public:
	FracList();
	FracList(const FracList& obj);
	~FracList();
};
class Fraction
{
	
private:
	int num, den;
public:
	Fraction();
	Fraction(const Fraction& obj);
	Fraction& operator = (const Fraction& right);
	Fraction& operator -= (const Fraction& right);
	Fraction& operator += (const Fraction& right);
	Fraction& operator *= (const Fraction& right);
	Fraction& operator /= (const Fraction& right);
	Fraction operator + (const Fraction& right);
	Fraction operator - (const Fraction& right);
	Fraction operator * (const Fraction& right);
	Fraction operator / (const Fraction& right);
	bool operator == (const Fraction& right);
	bool operator != (const Fraction& right);
	bool operator < (const Fraction& right);
	bool operator > (const Fraction& right);
	friend std::ostream& operator << (std::ostream& output, const Fraction& frac);
	friend std::istream& operator >> (std::istream& input,  Fraction& frac);

	void reduce();
	
	~Fraction();
};
#endif FRACTION
