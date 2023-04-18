#ifndef TRRUCK_H
#define TRUCK_H
#include "Vehicle.h"
//********************************
//Define a Truck class that inherits from Vehicle.  Define the member variables
//  and method prototypes in Truck.h, and the implementation of the methods in Truck.cpp.
//Define a member variable for the towing capacity
//Define a constructor and appropriate getters and setters
//Define a displayInfo method to display the contents of the object(call 
// the base class method to display the Vehicle info, then display the Truck info)
//********************************
class Truck : public Vehicle
{
private:
	int towCap;
public:
	// constructor
	Truck(int) {
		set(towCap);
	}
	//mutator function
	void set(int); //Defined in Car.cpp
	// Accessor function
	int gettowCap()const
	{
		return towCap;
	}
	void truckInfo();
};
#endif
