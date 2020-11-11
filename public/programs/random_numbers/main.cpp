/*
 * main.cpp
 *
 *  Created on: Sep 15, 2020
 *      Author: tjwilli
 */

////Example 1
//#include <iostream> //cout
//#include <stdlib.h> //rand(), RAND_MAX
//
//using namespace std;
//int main()
//{
//	int randNum;
//	randNum = rand();
//	cout << "Picking a number between 0 and " << RAND_MAX << endl;
//	cout << "Number is " << randNum << endl;
//	return 0;
//}

//Example 2
//#include <iostream> //cout
//#include <stdlib.h> //rand(), RAND_MAX
//
//using namespace std;
//int main()
//{
//	double randNum;
//	for( int i = 0; i < 10; ++i )
//	{
//		randNum = rand();
//		cout << "Number is " << randNum << endl;
//	}
//}

//Example 3
//#include <iostream> //cout
//#include <stdlib.h> //rand(), RAND_MAX

//using namespace std;
//int main()
//{
//	//set the seed for rand()
//	srand( 31415926 );
//	double randNum;
//	for( int i = 0; i < 10; ++i )
//	{
//		randNum = rand();
//		cout << "Number is " << randNum << endl;
//	}
//
//}


//Example 4
//#include <iostream> //cout
//#include <stdlib.h> //rand(), RAND_MAX
//#include <time.h> //used for time() function
//using namespace std;
//int main()
//{
//	//Return number of seconds since Jan 1 1970 (int)
//	int num_seconds = time(NULL);
//	cout << "Seconds since Jan 1 1970: " << num_seconds << endl;
//	double randNum;
//	//Use num_seconds to set the random seed
//	srand( num_seconds );
//	for( int i = 0; i < 10; ++i )
//	{
//		randNum = rand();
//		cout << "Number is " << randNum << endl;
//	}
//}


//Example 5
//#include <iostream> //cout
//#include <stdlib.h> //rand(), RAND_MAX
//#include <time.h> //used for time() function
//#include <cmath>
//#include <iomanip>
//using namespace std;
//
//void arrayStats( double rnums[],int size,double&mean, double&std )
//{
//	double totSum = 0;
//	for (int i=0; i<size; ++i)
//	{
//		totSum += rnums[i];
//	}
//	mean = totSum / size;
//
//	totSum = 0;
//	for (int i=0; i<size; ++i)
//	{
//		totSum += ( rnums[i] - mean ) * ( rnums[i] - mean );
//	}
//
//	std = totSum / size;
//	std = sqrt( std );
//}
//
//int main()
//{
//	const int size = 10000;
//	double mean,std;
//	//Return number of seconds since Jan 1 1970 (int)
//	int num_seconds = time(NULL);
//	double randNums[size];
//	//Use num_seconds to set the random seed
//	srand( num_seconds );
//	for( int i = 0; i < size; ++i )
//	{
//		randNums[i] = (double)rand() / RAND_MAX;
//	}
//
//	arrayStats(randNums,size,mean,std);
//
//	cout << "The theoretical mean is " << 1.0 / 2 << endl;
//	cout << "The actual mean is " << mean << endl;
//	cout << "The theoretical std dev is " << setprecision(4) << sqrt(1.0/12) << endl;
//	cout << "The actual std dev " << std << endl;
//}

