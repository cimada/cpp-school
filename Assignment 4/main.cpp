#include <iostream>
#include <Windows.h>

using namespace std;

const int size = 25;

struct Distance
{
	int feet;
	double inches;
};

Distance add(Distance[]);
void disp(Distance);
char repeat = 'y';
Distance total;
Distance gt;
Distance distArr[25] = {};
int i, n;

int main()
{

	while (repeat == 'y' || repeat == 'Y')
	{
		cout << "\nHow many measurements would you like to add?" << endl;
		cin >> i;
		distArr[i - 25];

		for (n = 0; n < i; n++)
		{
			cout << "\nEnter feet: "; cin >> distArr[0 + n].feet;
			cout << "Enter inches: "; cin >> distArr[0 + n].inches;
		}

		cout << endl;

		Distance gt = add(distArr);

		n = 0;

		while (n < i)
		{
			disp(distArr[0 + n]);
			n++;
			if (n < i)
			{
				cout << " + ";
			}
		}

		cout << " = ";
		disp(gt); cout << endl;

		Sleep(5000);
		cout << "\nAgain?(y/n)" << endl;
		cin >> repeat;
		distArr[i].feet = 0;
		distArr[i].inches = 0;
		total.feet = 0;
		total.inches = 0;
		return main();
	}
	return 0;
}

Distance add(Distance[])
{
	for (n = 0; n < i; n++)
	{
		total.inches += distArr[n].inches;

		while (distArr[n].inches >= 12.0)
		{
			distArr[n].inches -= 12.0;
			distArr[n].feet++;
		}

		while (total.inches >= 12.0)
		{
			total.inches -= 12.0;
			total.feet++;
		}
		total.feet += distArr[n].feet;
	}
	//total = distArr[n];
	return total;
};

void disp(Distance dd)
{
	//for (n = 0; n < i; n++)
	//{
		cout << dd.feet << "\'" << dd.inches << "\"";
	//}
}
