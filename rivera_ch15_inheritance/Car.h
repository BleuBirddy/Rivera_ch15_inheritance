#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
//***************************************************
// Define a Car class that inherits from Vehicle.  
// Define the member variables and method prototypes in Car.h,
//  and the implementation of the methods in Car.cpp.
//Define a member variable for the number of doors
//Define a constructor and appropriate getters and setters
//Define a displayInfo method to display the contents of the object
// (call the base class method to display the Vehicle info, then display the Car info)
// 
//***************************************************
class Car : public Vehicle 
{
private:
	int numDoors;
public:
	// constructor
	Car(int) {
		set(numDoors);
	}
	//mutator function
	void set(int); //Defined in Car.cpp
	// Accessor function
	int getNumDoors()const
	{
		return numDoors;
	}
	void carInfo();
};
#endif