#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;
double getAverage( const vector<double>& );
double getSD(const vector<double> &input, double avg);
int main()
{
    double userInput = 1; 
	double avg = 0;
	double SDD;
	vector<double> grades;
	
	while (1)
	{
		cout << "Enter a grade" << endl;
		cin >> userInput;
		if( userInput >=0 && userInput <= 100 )
		{
			grades.push_back( userInput );
		}
		if(userInput == 999)
		{
		    avg = getAverage(grades);
		    SDD = getSD(grades, avg);
			goto Thisspot;
		}
		if( userInput < 0 || userInput > 100 )
		{
			cout << " Not between 0 and 100" << endl;
			continue;
		}
		
	}
	Thisspot:
	cout << "The average is " << avg << endl;
	cout << "the standard deviation is " << SDD << endl;
	return 0;
}

double getAverage( const vector<double> &input )
{
	double avg = 0;
	if ( input.size() )
	{
		for( int i=0; i<input.size(); ++i )
		{
			avg += input[i];
		}
		
		return avg / input.size();
	}
	return 0;
}
double getSD(const vector<double> &input, double avg)
{
    double SD = 0;
    double T = 0;

    if ( input.size() )
	{
		for( int i=0; i<input.size(); ++i )
		{
		    SD = ((input[i] - avg) * (input[i] - avg));
		    T += SD;
		}
		return sqrt(T) / sqrt(input.size());
	}

    return 0;   
}