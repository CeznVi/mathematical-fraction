#include <iostream>
#include "fraction.h"

int main()
{
	Fraction a(1, 2);
	Fraction b(1,2);
	
	a.print();
	b.print();

	a.add(&b);
	a.print();
	//непрацює
	//Fraction c = a + b;



	return 0;
}