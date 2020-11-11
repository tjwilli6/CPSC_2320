/*
 * main.cpp
 *
 *  Created on: Sep 15, 2020
 *      Author: tjwilliamson
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//Declare program-wide constants
	const double G = 9.8; //const keyword: variable cannot be changed after initialized
	const double V0 = 22;

	double hmax, angleRad;

	//\t is a special character which prints a tab
	cout << "Angle\tHeight" << endl;

	for (double theta = 25; theta <= 85; theta+=20 )
	{
		angleRad = theta * M_PI / 180;
		hmax     = pow( V0 * sin(angleRad), 2 ) / 2 / G;
		cout << theta;
		cout << "\t";
		cout << hmax << endl;
	}
	return 0;
}


