#include <iostream>
#include "fraction.h"

int main()
{
	Fraction a(4, 2);
	Fraction b(3,4);
	Fraction ñ(2);
	
	
	a.print();
	b.print();
	ñ.print();

	a = a.add(5);
	a.print();

	ñ = a.add(b);
	ñ.print();
	


	return 0;
}