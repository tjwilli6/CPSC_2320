/*
 * main.cpp
 *
 *  Created on: Dec 2, 2020
 *      Author: tjwilli
 */


#include <iostream> //cout
#include <stdlib.h> //rand(), RAND_MAX
#include <time.h> //used for time() function
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

int get_correct_door()
{
	return rand() % 3 + 1;
}

void print_stats(double numwins[], double numatts[])
{
	double pct;
	for(int i=0; i < 2; ++i)
	{
		if(numatts[i] == 0)
		{
			pct = -1;
		}
		else
		{
			pct = double(numwins[i]) / numatts[i] * 100;
		}

		cout << "Win percentage when you ";
		if (i==0)
		{
			cout << "stay: ";
		}
		else
		{
			cout << "switch: ";
		}

		if(pct < 0)
		{
			cout << "N/A";
		}
		else
		{
			cout << setprecision(3) << pct << "%";
		}

		cout << endl;
	}
}
void monty_hall_trial(double numwins[], double numatts[])
{
	int userdoor = 0;
	int correctdoor = get_correct_door();
	int removedoor;
	vector<int> doors_switch;

	cout << "Choose a door (1,2,3)" << endl;
	cin >> userdoor;
	while(userdoor < 1 || userdoor > 3)
	{
		cout << "Please choose either 1, 2, or 3" << endl;
		cin >> userdoor;
	}

	//cout << "User door is " << userdoor << endl;
	//cout << "Actual door is " << correctdoor << endl;

	for(int i=1; i < 4; ++i)
	{
		if (i != userdoor)
		{
			if (i != correctdoor)
			{
				doors_switch.push_back(i);
			}
		}
	}

	removedoor = doors_switch[rand() % doors_switch.size()];
	cout << "The host has removed door #" << removedoor << endl;
	int otherdoor=-1;
	for (int i=1; i < 4; ++i)
	{
		if(i!=userdoor && i!=removedoor)
		{
			otherdoor = i;
			break;
		}
	}

	cout << "Do you want to switch to door #" << otherdoor << "? (y/n)" << endl;
	char userInput;
	bool bSwitch = false;
	cin >> userInput;
	if (userInput == 'y')
	{
		bSwitch = true;
		userdoor = otherdoor;
		numatts[1]++;
	}
	else
	{
		numatts[0]++;
	}

	if (userdoor == correctdoor)
	{
		cout << "You win!" << endl;
		if( bSwitch )
		{
			numwins[1]++;
		}
		else
		{
			numwins[0]++;
		}
	}
	else
	{
		cout << "You lost..." << endl;
	}
}

int main()
{
	double numwins[] = {0,0};
	double numatts[] = {0,0};

	int num_seconds = time(NULL);
	//Use num_seconds to set the random seed
	srand( num_seconds );


	char userInput;
	while(true)
	{
		monty_hall_trial(numwins,numatts);
		print_stats(numwins,numatts);
		cout << "Keep playing? (y/n)" << endl;
		cin >> userInput;
		if (userInput == 'n')
		{
			break;
		}
	}
	return 0;
}
