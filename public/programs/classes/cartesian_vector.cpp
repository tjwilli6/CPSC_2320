#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

class CartesianVector
{
	public:

		double x;
		double y;
		double z;

		double magnitude();
		vector<double> getUnitVector();
		vector<double> toSpherical();
};

double CartesianVector::magnitude()
{
	double mag = sqrt( x*x + y*y + z*z );
	return mag;
}

vector<double> CartesianVector::getUnitVector()
{
	vector<double> unitVec;
	double mag = magnitude();
	unitVec.push_back( x / mag );
	unitVec.push_back( y / mag );
	unitVec.push_back( z / mag );
	return unitVec;
}

vector<double> CartesianVector::toSpherical()
{
	vector<double> spherical;
	double r,phi,theta;
	r = magnitude();
	phi = atan2(y,x);
	theta = acos(z/r);
	spherical.push_back(r);
	spherical.push_back(phi);
	spherical.push_back(theta);
	return spherical;
}

int main()
{
	return 0;
}
