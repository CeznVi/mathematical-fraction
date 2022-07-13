#pragma once

class Fraction
{
private:
	//чисельник
	int numer;
	//знаменник
	int denom;

public:
	Fraction() : Fraction(0,0) {}

	Fraction(int numUp, int numDown)
	{
		setNumer(numUp);
		setDenom(numDown);
	}

	//Сеттер чисельника
	void setNumer(int numUp)
	{
		numer = numUp;
	}

	//Сеттер знаменника
	void setDenom(int numDown)
	{
		denom = numDown;
	}

	////Метод додавання дроб
	void add(Fraction* drob)
	{
		this->numer += drob->numer;
		this->denom += drob->denom;
	}

	void print()
	{
		std::cout << numer << '/' << denom << '\n';
	}
};