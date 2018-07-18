#include <iostream>
#include <Windows.h>
#include "DateUtil.h"

using namespace std;

class Date
{
private:
	int day, month, year;
public:
	Date() : day(0), month(0), year(0)
	{
		getCurrentDate(day, month, year);
	}

	Date(int d, int m, int y) : day(d), month(m), year(y)
	{}

	int getMonth()
	{
		return month;
	}

	void setMonth(int m)
	{
		cin >> month;
	}

	int getDay()
	{
		return day;
	}

	void setDay(int d)
	{
		cin >> day;
	}

	int getYear()
	{
		return year;
	}

	void setYear(int y)
	{
		cin >> year;
	}

	void addDays(int n)
	{
		day += n;
	}

	void subDays(int n)
	{
		day -= n;
	}

	void displayDate()
	{
		cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
	}

	void populateDate()
	{
		cout << "\nEnter month: "; setMonth(month);
		cout << "Enter day: "; setDay(day);
		cout << "Enter year: "; setYear(year);
	}

};

int main()
{
	Date d1;
	Date d2(25, 12, 2017);

	cout << "d1: ";
	d1.displayDate();
	cout << "d2: ";
	d2.displayDate();
	d2.addDays(30);
	d2.displayDate();
	cout << "d2 + 30: ";
	d2.subDays(30);
	cout << "d2 + 30 - 30: ";
	d2.displayDate();

	Date d3;
	d3.populateDate();
	cout << "d3: ";
	d3.displayDate();

	system("pause");
	
	return 0;
}