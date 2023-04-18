#include "Car.h"

void Car::set(int door) {
	numDoors = door;
}
void Car::carInfo() {

	Vehicle::vehicleInfo();
	cout << "Doors: " << numDoors;

}