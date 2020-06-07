#pragma once

#include <string>
#include <ostream>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <math.h>
#define PI 3.14159265
class angle
{
public:
	bool minus = false;
	int grad = 0;
	int min = 0;
	int sec = 0;
public:
	angle();	//Конструктор по умолчанию
	angle(int);
	angle(bool, int, int, int);// Конструктор с парaметрами
	angle(const angle&);// Конструктор копирования
	~angle();//деструктор
	void show();
	double radshow();
	double pishow();
	void set(bool, int, int, int);
	void dubl(double);
	int geta();
	bool operator > (angle);
	angle operator + (angle);
	angle operator - (angle);
	angle operator * (int);
	angle operator / (int);
	angle abs(angle);
};
angle::angle()
{
	grad = 0;
	min = 0;
	sec = 0;
};//Конструктор по умолчанию

angle::angle(int temp)
{
	if (temp < 0)
	{
		minus = true;
		temp = -temp;
	}
	grad = (temp / 3600);//%360
	min = (temp % 3600) / 60;
	sec = (temp % 3600) % 60;
}
angle::angle(bool k, int g, int m, int s)
{
	set(k, g, m, s);
}
void angle::dubl(double b)
{
	b = b / PI;
	int temp = b * 648000;
	if (temp < 0)
	{
		minus = true;
		temp = -temp;
	}
	grad = (temp / 3600);//%360
	min = (temp % 3600) / 60;
	sec = (temp % 3600) % 60;
}
angle::angle(const angle& b)
{
	minus = b.minus;
	grad = b.grad;
	min = b.min;
	sec = b.sec;
}
angle::~angle()
{

}
void angle::show()
{
}
double angle::radshow()
{
	double rad = this->pishow()*PI;
	return rad;
}
double angle::pishow()
{
	double pit = (double)grad / 180 + (double)min / 10800 + (double)sec / 648000;
	if (minus)
		pit = -pit;
	return pit;
}
int angle::geta()
{
	int temp = grad * 3600 + min * 60 + sec;
	if (minus)
		temp = -temp;
	return temp;
}
void angle::set(bool f, int g, int m, int s)
{
	int tmin = m + (s / 60);
	sec = s % 60;
	min = tmin % 60;
	grad = g + tmin / 60;
	this->minus = f;
	/*if (f == true)
	{
		int temp = this->grad * 3600 + this->min * 60 + this->sec;
		temp = 1296000 - temp;
		this->grad = abs((temp / 3600) % 360);
		this->min = abs((temp % 3600) / 60);
		this->sec = abs((temp % 3600) % 60);
		f = false;
	}*/
}

bool angle::operator > (angle p)
{
	bool f = false;
	if (!p.minus && !this->minus)
	{
		if (this->grad > p.grad)
			f = true;
		else if (this->grad == p.grad)
		{
			if (this->min > p.min)
				f = true;
			else if (this->min == p.min)
				if (this->sec > p.sec)
					f = true;
		}
	}
	if (p.minus && !this->minus)
		f = true;
	if (p.minus && this->minus)
	{
		if (this->grad < p.grad)
			f = true;
		else if (this->grad == p.grad)
		{
			if (this->min < p.min)
				f = true;
			else if (this->min == p.min)
				if (this->sec < p.sec)
					f = true;
		}
	}
	return f;
}

angle angle::operator + (angle p)//перегрузка сложения секунд
{
	if (!this->minus && !p.minus)
	{
		angle result(0, this->grad + p.grad, this->min + p.min, this->sec + p.sec);
		return result;
	}
	if (this->minus && p.minus)
	{
		angle result(1, this->grad + p.grad, this->min + p.min, this->sec + p.sec);
		return result;
	}
	if (this->minus && !p.minus)
	{
		angle result = p - abs(*this);
		return result;
	}
	if (!this->minus && p.minus)
	{
		angle result = *this - abs(p);
		return result;
	}
}

angle angle::operator - (angle p)//перегрузка вычитания
{
	if (!this->minus && p.minus)
	{
		angle result = *this + abs(p);
		return result;
	}
	if (!this->minus && !p.minus)
	{
		if (*this > p)
		{
			int tsec = this->sec + 60 - p.sec;
			int tmin = this->min + 59 - p.min;
			int tgrad = this->grad - 1 - p.grad;
			angle result(0, tgrad, tmin, tsec);
			return result;
		}
		else
		{
			int tsec = p.sec + 60 - this->sec;
			int tmin = p.min + 59 - this->min;
			int tgrad = p.grad - 1 - this->grad;
			angle result(1, tgrad, tmin, tsec);
			return result;
		}
	}
	if (this->minus && p.minus)
	{
		angle result = abs(p) - abs(*this);
		return result;
	}
	if (this->minus && !p.minus)
	{
		angle result = abs(*this) + p;
		angle temp;
		result = temp - result;
		return result;
	}
}
angle angle::operator * (int p)
{
	bool f = false;
	if (p < 0 && minus)
		p = -p;
	if (p > -1 && minus)
		f = true;
	if (p < 0 && !minus)
	{
		f = true;
		p = -p;
	}
	int tgrad = grad * p;
	int tmin = min * p;
	int tsec = sec * p;
	angle result(f, tgrad, tmin, tsec);
	return result;
}
angle angle::operator / (int p)
{
	bool f = false;
	if (p < 0 && minus)
		p = -p;
	if (p > -1 && minus)
		f = true;
	if (p < 0 && !minus)
	{
		f = true;
		p = -p;
	}
	int tgrad = grad / p;
	int tmin = ((grad % p) * 60 + min) / p;
	int tsec = (((grad % p * 60 + min) % p) * 60 + sec) / p;
	angle result(f, tgrad, tmin, tsec);
	return result;
}
inline angle angle::abs(angle p)
{
	angle result = p;
	result.minus = 0;
	return result;
}

