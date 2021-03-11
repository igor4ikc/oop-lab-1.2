#pragma once
class Data
{
	unsigned int day;
	unsigned int mounth;
	unsigned int year;

public:
	unsigned int getDay() const { return day; }
	unsigned int getMounth() const { return mounth; }
	unsigned int getYear() const { return year; }

	bool setDay(int);
	bool setMounth(int);
	bool setYear(int);

	bool Init(int day, int mounth, int year);
	void Read();
	void Display() const;

	void date1();
	void date2();
};
