#include <iostream>
#include "fraction.h"

int main()
{
	Fraction a(3, 7);
	Fraction b(4,5);
	Fraction �;
		
	a.print();
	b.print();
	�.print();

	//���������
	//c = a.add(b);
	//c.print();
	
	//������ 
	//� = a.dif(3);
	//�.print();
	
	//��������
	//� = a.mult(b);
	//�.print();

	//������
	//� = a.div(0);
	//�.print();

	return 0;
}