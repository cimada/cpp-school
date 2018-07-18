#include <iostream>
#include <Windows.h>

using namespace std;

struct Distance
{
	int feet;
	double inches;
};

Distance add(Distance, Distance);
void disp(Distance);
char repeat = 'y';
Distance d1, d2, d3;

int main()
{

	while (repeat == 'y' || repeat == 'Y')
	{
		cout << "\nEnter feet: "; cin >> d1.feet;
		cout << "Enter inches: "; cin >> d1.inches;

		cout << "\nEnter feet: "; cin >> d2.feet;
		cout << "Enter inches: "; cin >> d2.inches;

		d3 = add(d1, d2);
		cout << endl;
		disp(d1); cout << " + ";
		disp(d2); cout << " = ";
		disp(d3); cout << endl;

		Sleep(5000);
		cout << "\nAgain?" << endl;
		cin >> repeat;
		d1.feet = 0;
		d1.inches = 0;
		d2.feet = 0;
		d2.inches = 0;
		d3.feet = 0;
		d3.inches = 0;
		return main();
	}
	return 0;
}

Distance add(Distance, Distance)
{
	d3.inches = d1.inches + d2.inches;
	
	while (d1.inches >= 12.0)
	{
		d1.inches -= 12.0;
		d1.feet++;
	}

	while (d2.inches >= 12.0)
	{
		d2.inches -= 12.0;
		d2.feet++;
	}

	while (d3.inches >= 12.0)
	{
		d3.inches -= 12.0;
		d3.feet++;
	}
	d3.feet = d1.feet + d2.feet;
	return d3;
}

void disp(Distance dd)
{
	cout << dd.feet << "\'" << dd.inches << "\"";
}
