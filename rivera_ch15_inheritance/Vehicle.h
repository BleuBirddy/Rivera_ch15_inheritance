#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//***************************************
// Define a base class called Vehicle.  Define the member variables and method prototypes in Vehicle.h, and the implementation of the methods in Vehicle.cpp.
//Define member variables for manufacturer and year built
//Define a constructor and appropriate getters and setters
//Define a displayInfo method to display the contents of the object
// 
//***************************************
class Vehicle {
private:
	int yearBuilt;
	string manufacturer;
public:
	// default constructor
	Vehicle();
	// constructir
	Vehicle(string, int );
	void setYearBuilt(int);
	void setManufacturer(string);

	int getYearBuilt() const {
		return yearBuilt;
	}
	std::string getManufacturer()const{
		return manufacturer;
	}
	void vehicleInfo();
};
#endif