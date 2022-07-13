#include <iostream>
#include <Windows.h>
#include "fraction.h"



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Fraction a(1, 9);
	Fraction b(3, 9);
	Fraction c;
	
	std::cout << "��� � = ";
	a.print();
	std::cout << "��� b = ";
	b.print();
	std::cout << "��� c = ";
	c.print();
	std::cout << "\n���������� ��������� +-*/ �� ������� �����. ��� ����������� � = a + b. ��������� �� ������ �����������\n";
	c = a + b;
	std::cout << "��� c = a + b = ";
	c.print();
	std::cout << "\n���������� ��������� +-*/ �� ������ �� ������ �������.\n";
	std::cout << "��� ����������� � = c + 2 ��� (c = 2 + c). ��������� �� ������ �����������\n";
	std::cout << "��� c = c + 2 = ";
	c = c + 2;
	c.print();

	std::cout << "\n���������� ��������� ������������ �� ����������� ����������/����������\n";
	std::cout << "��� ����������� � = ++�. ��������� �� ������ �������� �����������\n";
	std::cout << "��� c = ++c = ";
	c = ++c;
	c.print();

	std::cout << "\n���������� ��������� ��������� == != < >\n";
	std::cout << "��� ����������� a == b.������� ��������. �� ������ �� �����\n";
	std::cout << "��� � = ";
	a.print();
	std::cout << "��� b = ";
	b.print();
	std::cout << "bool i = a == b;\n";
	bool i = a == b;
	std::cout << "i = " << i << " �������: 0 - false; 1 true" << '\n';
	std::cout << "bool i = a < b;\n";
	i = a < b;
	std::cout << "i = " << i << " �������: 0 - false; 1 true" << '\n';

	return 0;
}