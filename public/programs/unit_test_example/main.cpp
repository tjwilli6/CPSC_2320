
#include <iostream> //cout, cin
#include <cmath>

using namespace std;
const double EPSILON = 1e-5;
const double NO_SOLUTION = -9999;
void quadratic(double a,double b,double c,double&x1,double&x2)
{
	//quadratic formula code goes here
}
void test_quadratic()
{
	double x1,x2;
	//Test a=0,b=1,c=2
	quadratic(0,1,2,x1,x2);
	//x1 shoud be -2
	assert( abs(x1 - (-2) ) <= EPSILON );
	//x2 should be NO_SOLUTION
	assert( abs(x2 - NO_SOLUTION) <= EPSILON );
}
int main()
{
	cout << "Running unit tests" << endl;
	test_quadratic();
	return 0;
}



