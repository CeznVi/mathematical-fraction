#include <iostream>
#include "fraction.h"

int main()
{
	Fraction a(1, 9);
	Fraction b(3,3);
	Fraction c;
		
	a.print();
	b.print();
	c.print();

	//додавання
	//c = a.add(b);
	//c.print();
	
	//різниця 
	//с = a.dif(3);
	//с.print();
	
	//множення
	//с = a.mult(b);
	//с.print();

	//ділення
	//с = a.div(0);
	//с.print();

	//який з дробів більший
	//c = a.more(b);
	//c.print();

	// Який з дробів менший
	//c = a.less(b);
	//c.print();

	// порівняти дроби
	//a.compare(b);
	
	////Префіксний інкремент
	//++a;
	//a.print();
	//Постфіксний інкремент
	//c = a++;
	//a.print();
	//c.print();
	
	//c = a + b;
	//c = a + 2;
	//c.print();
	//c = 2 + c;
	//c.print();

	c = 2 - a;
	c.print();
	

	return 0;
}