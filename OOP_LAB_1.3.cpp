#include "FuzzyNumber.h"

int main()
{
	FuzzyNumber A, B, C, D;
	
	A.Read();
	std::cout << "A: "; A.Display();
	B.Read();
	std::cout << "B: "; B.Display();
	
	C = C.Add(A, B);
	std::cout << "A + B = "; C.Display();
	
	D = D.Multiply(A, B);
	std::cout << "A * B = "; D.Display();
	

	return 0;
}