#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

class Car
{
	public: //Make these variables accessible to everyone
		//Member variables
		string make;
		string model;
		string color;
		int year;
		double mileage;

		//Function declarations
		void printSummary();
		void setColor(string newColor);
		void addMiles(double miles);
};

//Define the functions
void Car::printSummary()
{
	cout << "I am a " << color << ", " << year << " "
			<< make << " " << model << " with " << mileage << " miles." << endl;
}

void Car::addMiles(double miles)
{
	mileage += miles;
}

void Car::setColor(string newColor)
{
	color = newColor;
}

int main()
{
	Car myCar, myOtherCar; // create two objects of type "Car"
	myCar.year = 2020;
	myCar.mileage = 10000;
	myCar.make = "Toyota";
	myCar.model = "Camry";
	myCar.setColor("Blue");
	myCar.printSummary();

	myOtherCar.year = 1929;
	myOtherCar.make = "Ford";
	myOtherCar.model = "Model T";
	myOtherCar.setColor("Black");
	myOtherCar.printSummary();
	return 0;
}
