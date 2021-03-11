#include "Data.h"
#include <iostream>

using namespace std;

bool Data::setDay(int value)
{
	if (value > 0 && value < 31)
	{
		day = value;
		return true;
	}
	else
	{
		return false;
	}
}

bool Data::setMounth(int value)
{
	if (value > 0 && value < 13)
	{
		mounth = value;
		return true;
	}
	else
	{
		return false;
	}
}

bool Data::setYear(int value)
{
	if (value > 1900 && value < 2021)
	{
		year = value;
		return true;
	}
	else
	{
		return false;
	}
}

bool Data::Init(int day, int mounth, int year)
{
	setDay(day);
	return setMounth(mounth) && setYear(year);
}

void Data::Read()
{
	int day;
	int mounth;
	int year;
	cout << " day = ? "; cin >> day;
	do
	{
		cout << " mounth = ? "; cin >> mounth;
		cout << " year = ? "; cin >> year;
	} while (!Init(day, mounth, year));
}

void Data::Display() const
{
	cout << " day = " << day << endl;
	cout << " mounth = " << mounth << endl;
	cout << " year = " << year << endl;
}

void Data::date1()
{
	setlocale(LC_ALL, "Ukrainian");
	cout << day << " лютого " << year << " року " << endl;
}

void Data::date2()
{
	if (mounth > 0 && mounth < 10)
	{
		cout << day << ".0" << mounth << "." << year << endl;
	}
	else
	{
		cout << day << "." << mounth << "." << year << endl;
	}
}
