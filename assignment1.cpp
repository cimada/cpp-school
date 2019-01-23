#include <iostream>
#include <windows.h>

using namespace std;

struct Currency
{
	double amount;
};

struct Temperature
{
	int temp;
};

void disp(Currency);
void disp(Temperature);
char menu;
Currency usd, bp, cd, gd, jy;
Temperature f, c;

int main()
{
	cout << "\nPlease enter 1 for currency conversion or 2 for temperature conversion." << endl;
	cin >> menu;

	while (menu == '1')
	{
		cout << "\nEnter an amount in US dollars: "; cin >> usd.amount;

		bp.amount = usd.amount / 1.33;
		cout << endl;
		cout << "$";
		disp(usd); cout << " = ";
		disp(bp); cout << " British Pounds. ";
		cout << endl;

		cd.amount = usd.amount / 0.77;
		cout << endl;
		disp(cd); cout << " Canadian Dollars. ";
		cout << endl;

		gd.amount = usd.amount / 0.58;
		cout << endl;
		disp(gd); cout << " German Deutschemarks. ";
		cout << endl;

		jy.amount = usd.amount / 0.00955;
		cout << endl;
		disp(jy); cout << " Japanese Yen. ";
		cout << endl;

		Sleep(5000);
		usd.amount = 0;
		bp.amount = 0;
		cd.amount = 0;
		gd.amount = 0;
		jy.amount = 0;

		return main();
	}

	while (menu == '2')
	{
		cout << "\nEnter a temperature in Celsius: "; cin >> c.temp;

		f.temp = c.temp * 9 / 5 + 32;
		cout << endl;
		disp(c); cout << " C = ";
		disp(f); cout << " F.";
		cout << endl;

		Sleep(5000);
		f.temp = 0;
		c.temp = 0;

		return main();
	}

	return 0;
}

void disp(Currency dd)
{
	cout << dd.amount;
}

void disp(Temperature tt)
{
	cout << tt.temp;
}