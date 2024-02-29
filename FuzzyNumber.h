#pragma once
#include <iostream>
#include <string>


class FuzzyNumber
{
	private:
		int x, l, r;

	public:
		void init(int x, int l, int r);
		void Set_x(int value);
		void Set_l(int value);
		void Set_r(int value);

		int Get_x() const;
		int Get_l() const;
		int Get_r() const;

		void Read();
		void Display() const;
		std::string ToString() const;

		FuzzyNumber Add(FuzzyNumber obj1, FuzzyNumber obj2);
		FuzzyNumber Multiply(FuzzyNumber obj1, FuzzyNumber obj2);

};

