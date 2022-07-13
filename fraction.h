#pragma once

class Fraction
{
private:
	//���������
	int numer;
	//���������
	int denom;

	//��������� ������ �� 2 ��� �������
	bool canDiv2(int num)
	{
		if (num % 2 == 0)
			return true;
		else
			return false;
	}

	//��������� ������ �� 3 ��� �������
	bool canDiv3(int num)
	{
		if (num % 3 == 0)
			return true;
		else
			return false;
	}

	//��������� ��������� ���������� �����
	bool �anCut()
	{
		if (canDiv2(this->numer) && canDiv2(this->denom))
			return true;
		else if (canDiv3(this->numer) && canDiv3(this->denom))
			return true;
		else
			return false;
	}

	////����� ���������� �����
	void �ut()
	{
		while (this->�anCut())
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
	//����������� (���� ��'��� ���� ������ - �� ��� �����������)
	Fraction() : Fraction(0,0) {}

	//�����������
	Fraction(int numUp, int numDown = 1)
	{
		setNumer(numUp);
		setDenom(numDown);
	}

	//����������� ���������
	Fraction(const Fraction& obj)
	{
		setNumer(obj.numer);
		setDenom(obj.denom);
	}

	//������ ����������
	void setNumer(int numUp)
	{
		numer = numUp;
	}

	//������ ����������
	void setDenom(int numDown)
	{
		if(numDown == 0)
			denom = 1;
		else 
			denom = numDown;
	}

	//����� ��������� ������ 
	Fraction add(const Fraction& d)
	{
		Fraction temp;
		temp.numer = ((d.denom) * (this->numer)) + ((d.numer) * (this->denom));
		temp.denom = (d.denom * this->denom);
		temp.�ut();
		return temp;
	}

	//����� �������� ������
	Fraction dif(const Fraction& d)
	{
		Fraction temp;
		temp.numer = ((d.denom) * (this->numer)) - ((d.numer) * (this->denom));
		temp.denom = (d.denom * this->denom);
		temp.�ut();
		return temp;
	}
	
	//����� �������� ����� 
	Fraction mult(const Fraction& d)
	{
		Fraction temp;
		temp.numer = (d.numer * this->numer);
		temp.denom = (d.denom * this->denom);
		temp.�ut();
		return temp;
	}

	//����� ������ ����� 
	Fraction div(const Fraction& d)
	{
		if (d.numer == 0)
		{
			std::cout << "Eror.Cannot be divided by 0 \n";
			return 0;
		}
		Fraction temp;
		temp.numer = this->numer * d.denom;
		temp.denom = this->denom * d.numer;
		temp.�ut();
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