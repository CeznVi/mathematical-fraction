#include <iostream>
#include "fraction.h"

int main()
{
	Fraction a(4, 2);
	Fraction b(3,4);
	Fraction �(2);
	
	
	a.print();
	b.print();
	�.print();

	a = a.add(5);
	a.print();

	� = a.add(b);
	�.print();
	


	return 0;
}