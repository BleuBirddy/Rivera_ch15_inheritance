#include "Truck.h"

void Truck::set(int tow) {
	towCap = tow;
}
void Truck::truckInfo() {

	Vehicle::vehicleInfo();
	cout << "Towing Capacity: " << towCap;

}