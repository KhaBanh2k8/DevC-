#include<bits/stdc++.h>
#include "FeetInches.h"

void FeetInches::simplify()
{
	if(inches >= 12)
	{
		feet += (inches/12);
		inches = inches % 12;
	}
	else if(inches < 0)
	{
		feet -= ((abs(inches)/ 12) + 1);
		inches = 12 - (abs(inches) % 12);
	}
}

FeetInches FeetInches::operator + (const FeetInches &right)
{
	FeetInches temp;
	temp.inches = inches + right.inches;
	temp.feet = feet + right.feet;
	temp.simplify();
	return temp;
}
FeetInches FeetInches::operator - (const FeetInches &right)
{
	FeetInches temp;
	temp.inches = inches + right.inches;
	temp.feet = feet + right.feet;
	temp.simplify();
	return temp;
}

bool FeetInches::operator <= (FeetInches a)
{
	if(this->feet < a.feet)
		return true;
	else if(this->feet == a.feet && this->inches <= a.inches )
		return true;
	else return false;
}		
bool FeetInches::operator >= (FeetInches a)
{
	if(this->feet > a.feet) return true;
	else if(this->feet == a.feet && this->inches >= a.inches)
		return true;
	else return false;
}
bool FeetInches::operator != (FeetInches a)
{
	if(this->feet != a.feet) return true;
	else if(this->feet == a.feet && this->inches != a.inches)
		return true;
	else return false;
}
istream& operator >> (istream &in, FeetInches &a)
{
	cout << "Nhap Feet: "; in >> a.feet;
	cout << "Nhap inches: "; in >> a.inches;
	a.simplify();
	return in;
}
ostream& operator << (ostream& out, FeetInches a)
{
	out << a.feet << " feet, " << a.inches << " inches." << endl;
}

FeetInches FeetInches::multiply(FeetInches obj)
{
	FeetInches tmp;
	tmp.inches = (obj.inches + obj.feet * 12) * (this->inches + this->feet * 12);
	tmp.inches /= 12;
	tmp.simplify();
	return tmp;
}
