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
	
	std::cout << "Дріб а = ";
	a.print();
	std::cout << "Дріб b = ";
	b.print();
	std::cout << "Дріб c = ";
	c.print();
	std::cout << "\nРеалізовани оператори +-*/ між данними класу. Для викоритання с = a + b. Аналогічно із іншими операторами\n";
	c = a + b;
	std::cout << "Дріб c = a + b = ";
	c.print();
	std::cout << "\nРеалізовани оператори +-*/ між класом та цілими числами.\n";
	std::cout << "Для викоритання с = c + 2 або (c = 2 + c). Аналогічно із іншими операторами\n";
	std::cout << "Дріб c = c + 2 = ";
	c = c + 2;
	c.print();

	std::cout << "\nРеалізовани оператори постфіксного та префіксного інкременту/декременту\n";
	std::cout << "Для викоритання с = ++с. Аналогічно із іншими унарними операторами\n";
	std::cout << "Дріб c = ++c = ";
	c = ++c;
	c.print();

	std::cout << "\nРеалізовани оператори порівняння == != < >\n";
	std::cout << "Для викоритання a == b.Можливо використ. між класом та інтом\n";
	std::cout << "Дріб а = ";
	a.print();
	std::cout << "Дріб b = ";
	b.print();
	std::cout << "bool i = a == b;\n";
	bool i = a == b;
	std::cout << "i = " << i << " Примітка: 0 - false; 1 true" << '\n';
	std::cout << "bool i = a < b;\n";
	i = a < b;
	std::cout << "i = " << i << " Примітка: 0 - false; 1 true" << '\n';

	return 0;
}