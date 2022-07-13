#pragma once

class Fraction
{
private:
	//���������
	int numer;
	//���������
	int denom;

public:
	Fraction() : Fraction(0,0) {}

	Fraction(int numUp, int numDown)
	{
		setNumer(numUp);
		setDenom(numDown);
	}

	//������ ����������
	void setNumer(int numUp)
	{
		numer = numUp;
	}

	//������ ����������
	void setDenom(int numDown)
	{
		denom = numDown;
	}

	////����� ��������� ����
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