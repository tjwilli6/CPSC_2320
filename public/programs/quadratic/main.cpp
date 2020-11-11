// Example program
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//Declare user inputs
	double a,b,c;

	//Discriminant, x1, x2
	double disc,x1,x2;

	//Collect user input
	cout << "Enter a,b,c:" << endl;
	cin >> a >> b >> c;

	//If a is nonzero
	if ( a != 0 )
	{
		disc = pow(b,2) - 4 * a * c;
		//If discriminant < 0
		if ( disc < 0 )
		{
			cout << "Solution is complex" << endl;
		}
		//end if (disc < 0 )

		//Non complex discriminant
		else
		{
			x1 = ( -b + sqrt( disc ) ) / ( 2 * a );
			x2 = ( -b - sqrt( disc ) ) / ( 2 * a );
			cout << setprecision(2) << "x1, x2 = " << x1 << "," << x2 << endl;
		}//end else
	}
	// End if ( a!= 0 )


	//Case if a==0
	if ( a == 0 )
	{
		//If b is nonzero, x = -c/b
		if ( b != 0 )
		{
			x1 = x2 = -c / b;
			cout << "x1 = x2 = " << setprecision(2) << x1 << endl;
		}
		//end if b!=0
		else
		{
			if ( c==0 )
			{
				cout << "You entered " << c << " = 0, which is true. Congrats" << endl;
			}
			else
			{
				cout << "You entered " << c << " = 0, which is false." << endl;
			}
		}
		//end else
	}
	//end if a==0

	return 0;
}



