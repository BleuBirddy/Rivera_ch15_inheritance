/*
Arantza E Rivera
4/17/2023
Inheritance
Develop a base and derived classes to represent different types of vehicles. 
Then program a short driver to these classes.
Use a source code management tool as you develop this program.
Commit changes frequently using descriptive commit messages. 
Push your changes to GitHub or other publicly accessible location for your instructor to clone.

*/

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main() {
	string manufacturer;
	int yearBuilt;
	int numDoors;
	int towCap;

	//********************************************************
	//Get input from the user for manufacturer and year built, then store this information
	//  in a Vehicle object.Call the displayInfo method and display it on the output.
	//*********************************************************
	cout << " Enter The manufacturer: ";
	getline(cin, manufacturer);
	cout << endl;
	cout << " Enter the Year Built: ";
	cin >> yearBuilt;

	Vehicle base;
	base.vehicleInfo();
	//********************************************************
	// Get input from the user for manufacturer, year built, and number of doors,
	//  then store this information in a Car object.  
	// Call the displayInfo method and display it on the output.
	//********************************************************
	cout << " Enter The manufacturer: ";
	getline(cin, manufacturer);
	cout << endl;
	cout << " Enter the Year Built: ";
	cin >> yearBuilt;
	cout << " Enter the number of doors :";
	cin >> numDoors;
	Car car(numDoors); // this is done when there is no default constructor
	car.carInfo();
	//********************************************************
	// Get input from the user for manufacturer, year built,
	// and towing capacity, then store this information in a Truck object.
	//  Call the displayInfo method and display it on the output.
	//********************************************************
	cout << " Enter The manufacturer: ";
	getline(cin, manufacturer);
	cout << endl;
	cout << " Enter the Year Built: ";
	cin >> yearBuilt;
	cout << " Enter the towing capacity:";
	cin >> towCap;
	Truck truck(towCap);
	truck.truckInfo();
	cout << " Thank You, GoodBye" << endl;
	return 0;
}