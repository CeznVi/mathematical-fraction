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

	//���� � ����� ������
	//c = a.more(b);
	//c.print();

	// ���� � ����� ������
	//c = a.less(b);
	//c.print();

	// �������� �����
	//a.compare(b);
	
	////���������� ���������
	//++a;
	//a.print();
	//����������� ���������
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