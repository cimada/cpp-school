// Craps.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <time.h>
#include <Windows.h>
#include <iostream>

using namespace std;

int wins = 0, loss = 0;

int main()
{
	char craps = 'y';
	char phase1 = 'y';
	char phase2 = 'n';
	
	while (craps == 'y' || craps == 'Y')
	{
		int d1 = 0, d2 = 0, d3 = 0, d4 = 0;
		int roll = 0;
		int roll2 = 0;

		while (phase1 == 'y')
		{
			d1 = rand() % 6 + 1;
			d2 = rand() % 6 + 1;
			roll = d1 + d2;

			cout << "Player rolled " << d1 << " + " << d2 << " = " << roll << endl;
			Sleep(2000);

			if (roll == 7 || roll == 11)
			{
				cout << "Player wins!" << endl;
				Sleep(2000);
				wins += 1;
				cout << "Do you want to play again? (Y) or (N)" << endl;
				cin >> craps;
			}
			else if (roll == 2 || roll == 3 || roll == 12)
			{
				cout << "Player loses." << endl;
				Sleep(2000);
				loss += 1;
				cout << "Do you want to play again? (Y) or (N)" << endl;
				cin >> craps;
			}
			else
			{
				cout << "Point is " << roll << endl;
				Sleep(2000);
				phase1 = 'n';
				phase2 = 'y';
			}
		}

		while (phase2 == 'y')
		{
			d3 = 1 + (rand() % 6);
			d4 = 1 + (rand() % 6);
			roll2 = d3 + d4;

			cout << "Player rolled " << d3 << " + " << d4 << " = " << roll2 << endl;
			Sleep(2000);

			if (roll2 == roll)
			{
				cout << "Player wins!" << endl;
				wins += 1;
				cout << "Do you want to play again? (Y) or (N)" << endl;
				phase1 = 'y';
				phase2 = 'n';
				cin >> craps;
			}
			else if (roll2 == 7)
			{
				cout << "Player loses." << endl;
				loss += 1;
				cout << "Do you want to play again? (Y) or (N)" << endl;
				phase1 = 'y';
				phase2 = 'n';
				cin >> craps;
			}

		}
	}

		if (craps == 'n' || craps == 'N')
		{
			cout << "Thanks for playing." << endl;
			cout << "Wins: " << wins << " Losses: " << loss << endl;
			Sleep(5000);
			return 0;
		}
}
