#pragma once

class Fraction
{
private:
	//чисельник
	int numer;
	//знаменник
	int denom;

	//Інспектор ділення на 2 без остатку
	bool canDiv2(int num)
	{
		if (num % 2 == 0)
			return true;
		else
			return false;
	}

	//Інспектор ділення на 3 без остатку
	bool canDiv3(int num)
	{
		if (num % 3 == 0)
			return true;
		else
			return false;
	}

	//Інспектор можливого скорочення дробу
	bool сanCut()
	{
		if (canDiv2(this->numer) && canDiv2(this->denom))
			return true;
		else if (canDiv3(this->numer) && canDiv3(this->denom))
			return true;
		else
			return false;
	}

	////Метод скорочення дробу
	void сut()
	{
		while (this->сanCut())
		{
			if (canDiv2(this->numer) && canDiv2(this->denom))
			{
				this->numer = this->numer / 2;
				this->denom = this->denom / 2;
			}
			else if (canDiv3(this->numer) && canDiv3(this->denom))
			{
				this->numer = this->numer / 3;
				this->denom = this->denom / 3;
			}
			else
				break;
		}
	}

public:
	//Конструктор (якщо об'єкт буде пустий - то йде делегування)
	Fraction() : Fraction(0,0) {}

	//Конструктор
	Fraction(int numUp, int numDown = 1)
	{
		setNumer(numUp);
		setDenom(numDown);
	}

	//Конструктор копіювання
	Fraction(const Fraction& obj)
	{
		setNumer(obj.numer);
		setDenom(obj.denom);
	}

	//Сеттер чисельника
	void setNumer(int numUp)
	{
		numer = numUp;
	}

	//Сеттер знаменника
	void setDenom(int numDown)
	{
		if(numDown == 0)
			denom = 1;
		else 
			denom = numDown;
	}

	//Метод додавання дробей (дроб з дробом)
	Fraction add(const Fraction& d)
	{
		Fraction temp;
		temp.numer = ((d.denom) * (this->numer)) + ((d.numer) * (this->denom));
		temp.denom = (d.denom * this->denom);
		temp.сut();
		return temp;
	}
	//Перегрузка методу додавання дробей (дроб з числом)
	Fraction add(int a)
	{
		Fraction temp;
		temp.numer = this->numer + (a * this->denom);
		temp.denom = this->denom;
		temp.сut();
		return temp;
	}


	void print()
	{
		if (this->denom == 1)
			std::cout << numer << '\n';
		else 		
			std::cout << numer << '/' << denom << '\n';
	}
};