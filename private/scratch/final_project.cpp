#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int stayToWin = 0;
	int switchToWin = 0;
	int chosenDoor, remainingDoor, revealingDoor, winningDoor, option, userInput;
	int stayTimes = 0;
	int switchTimes = 0;
	double stayPercentage;
	double switchPercentage;

	do
	{
		cout << "Choose a door (1-3)" << endl;
		cin >> chosenDoor;
		srand(time(NULL));
		winningDoor = rand() %3 + 1;
		do
		{
			revealingDoor = rand() %3 + 1;
		} while (revealingDoor == chosenDoor || revealingDoor == winningDoor);
		cout << "The host has removed door: " << revealingDoor << endl;
		
		do
		{
			remainingDoor = rand() %3 + 1;
		} while (remainingDoor == chosenDoor || remainingDoor == revealingDoor);
		
		cout << "If you want to stay with your choice, enter 1. If you want to switch door, enter 2" << endl;
		cin >> option;
		
		if (option == 1)
		{
			if (chosenDoor == winningDoor)
			{
				cout << "You win"<< endl;
				stayToWin++;
			}
			else
			{
				cout << "You lost" << endl;
			}
			stayTimes++;
			cout << "stay times: "<< stayTimes << endl;
			stayPercentage = (double(stayToWin) / stayTimes) * 100;
			
		}
		if (option == 2)
		{
			chosenDoor = remainingDoor;
			if (chosenDoor == winningDoor)
			{
				cout << "You win"<< endl;
				switchToWin++;
			}
			else
			{
				cout << "You lost" << endl;
			}
			switchTimes++;
			switchPercentage = (double(switchToWin) / switchTimes) * 100;
			cout << "switch times: " << switchTimes << endl;
			
		}
		cout << "Win percentage when you stay: " << stayPercentage << endl;
		cout << "Win percentage when you switch: " << switchPercentage << endl;
		
		cout << "Press 0 to stop. Otherwise, the new game will come up."<< endl;
        cin >> userInput;
		
		
	} while (userInput != 0);
}
