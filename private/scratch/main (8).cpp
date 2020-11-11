#include <iostream>
#include <cmath>
#include <assert.h>
using namespace std;

double Quad(double a, double b, double c);//, double x1, double x2);

int main()
{
    const double NO_SOLUTION = -9999;
    cout << "Running Unit Tests" << endl;
    cout << "First Unit Test" << endl;
    assert( Quad(1,5,-50) == (5, -10));
    cout << "Second Unit Test" << endl;
    assert( Quad(1, 2, 1) == (NO_SOLUTION, NO_SOLUTION));
    cout << "Third Unit Test" << endl;
    assert( Quad(0, 1, 10) == (-10, NO_SOLUTION));
    cout << "Forth Unit Test" << endl;
    assert( Quad(5, -20, 30) == (NO_SOLUTION, NO_SOLUTION));
    cout << "Program is running well" << endl;

    // exit clearly
    return 0;
    
}
double Quad(double a, double b, double c)//, double x1, double x2)
{
    double x1;
    double x2;
    double D;
    const double NO_SOLUTION = -9999;
    const double EPSILON = 0.0001;
    // if the value of a is equal to zero 
    if (a == 0)
    {
        // if the value of b is equal to zero
        if (b == 0)
        {
            // if the value of c is equal to zero
            if (c == 0)
            {
                x1 = 0;
                x2 = 0;
                cout << "x = 0" << endl;
            }
            
            // if the value of c is not equal to zero
            else if (c != 0)
            {
                x1 = NO_SOLUTION;
                x2 = NO_SOLUTION;
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }
      
        }
        // if the value of b is not equal to zero
        else 
        {   
            x1 = -(c) / (b);
            cout << "x1 = " << -(c) / (b) << endl;
            x2 = NO_SOLUTION;
            cout << "x2 = " << NO_SOLUTION << endl;
        }
  
    }
    // if the value of a is not equal to zero
    else
    {
        x1 = (-(b)/(2 * a)) + (sqrt((b * b) - (4 * a * c))/ (2 * a));
        x2 = (-(b)/(2 * a)) - (sqrt((b * b) - (4 * a * c))/ (2 * a));
        D = (b * b) - (4 * a * c);
        
        if (abs(x1 - x2) <= EPSILON)
        {
            x1 = NO_SOLUTION;
            x2 = NO_SOLUTION;
            cout << "x1 = x2 = "<< NO_SOLUTION << endl;
        }
        else if (D < 0)
        {
            x1 = NO_SOLUTION;
            x2 = NO_SOLUTION;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else
        { 
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        }
    }
    return x1, x2;
}    