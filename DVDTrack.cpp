/* DVDTrack.cpp
Clinten Imada
6/25/2018
CS 1410
Midterm Program
*/

#include <iostream>
#include <Windows.h>
#include <string>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

const int n = 5;
int choice;
int i;
//char str[50] = "A String";

struct library
{
	int id;
	const char* title;
	const char* rating;
	double price;
	const char* borrower;
};

library dvd[n];

void DisplayAllDvds();

int main()
{
	dvd[0].id = 1;
	dvd[0].title = "Mission: Impossible";
	dvd[0].rating, "PG-13";
	dvd[0].price = 9.99;
	dvd[0].borrower, "";

	dvd[1].id = 2;
	dvd[1].title = "Goldeneye";
	dvd[1].rating, "PG-13";
	dvd[1].price = 9.99;
	dvd[1].borrower, "";

	dvd[2].id = 3;
	dvd[2].title = "Terminator";
	dvd[2].rating, "R";
	dvd[2].price = 9.99;
	dvd[2].borrower, "";

	dvd[3].id = 4;
	dvd[3].title = "Braveheart";
	dvd[3].rating, "R";
	dvd[3].price = 9.99;
	dvd[3].borrower, "";

	dvd[4].id = 5;
	dvd[4].title = "The Fast and the Furious";
	dvd[4].rating, "PG-13";
	dvd[4].price = 14.99;
	dvd[4].borrower, "";

	cout << "1. Display All DVDs" << endl;
	cout << "2. Display DVD Detail" << endl;
	cout << "3. Check Out a DVD" << endl;
	cout << "4. Check In a DVD" << endl;
	cout << "5. Exit" << endl;
	cout << "\nWhat do you want to do?" << endl; 
	cin >> choice;

	if (choice == 1)
	{
		DisplayAllDvds();
		Sleep(5000);
	}

	if (choice == 2)
	{
		cout << "Please enter DVD ID: " << endl;
	}

	if (choice == 5)
	{
		return 0;
	}
}

void DisplayAllDvds()
{

	for (int i = 0; i < 5; i++)
	{
		cout << "ID: " << dvd[i].id << endl;
		cout << "Title: " << dvd[i].title << endl;
	
		/*cout << "Rating: " << d.rating << endl;
		cout << "Price: " << d.price << endl;
		cout << "Borrower: " << d.borrower << endl;*/
	}
}

/*void convert(const CString& csz_data)
{
	USES_CONVERSION;
	char* pchTmp(T2A(csz_data));

	strcpy_s(dvd[n].title, _countof(dvd[n].title), pchTmp);
}*/