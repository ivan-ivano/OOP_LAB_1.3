#include "FuzzyNumber.h"
#include <iostream>
#include <string>
#include <sstream>

void FuzzyNumber::init(int x, int l, int r)
{
	this->x = x;
	this->l = l;
	this->r = r;
}

void FuzzyNumber::Set_x(int value)
{
	x = value;
}

void FuzzyNumber::Set_l(int value)
{
	l = value;
}

void FuzzyNumber::Set_r(int value)
{
	r = value;
}

int FuzzyNumber::Get_x() const
{
	return x;
}

int FuzzyNumber::Get_l() const
{
	return l;
}

int FuzzyNumber::Get_r() const
{
	return r;
}

FuzzyNumber FuzzyNumber::Add(FuzzyNumber obj1, FuzzyNumber obj2)
{
	FuzzyNumber reslt;
	
	reslt.x = obj1.x + obj2.x;
	reslt.l = obj1.l + obj2.l;
	reslt.r = obj1.r + obj2.r;

	return reslt;
}

FuzzyNumber FuzzyNumber::Multiply(FuzzyNumber obj1, FuzzyNumber obj2)
{
	FuzzyNumber reslt;
	
	reslt.x = obj1.x * obj2.x;
	reslt.l = obj1.x * obj2.l;
	reslt.r = obj1.x * obj2.r;
	

	return reslt;
}

void FuzzyNumber::Read()
{
	std::cout << "x = "; std::cin >> x;
	std::cout << "l = "; std::cin >> l;
	std::cout << "r = "; std::cin >> r;

	init(x, l, r);
}

void FuzzyNumber::Display() const
{
	std::cout << this->ToString() << std::endl;
}

std::string FuzzyNumber::ToString() const
{
	std::stringstream sout;
	sout << "( " << x - l << " , " << x << " , " << x + r << " )";
	return sout.str();
}
