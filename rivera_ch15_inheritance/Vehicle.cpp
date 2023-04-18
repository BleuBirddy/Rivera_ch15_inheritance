#include "Vehicle.h"

Vehicle::Vehicle() {
	manufacturer = "";
	yearBuilt = 0;
}
// constructir
Vehicle::Vehicle(std::string man, int year) {
	manufacturer = man;
	yearBuilt = year;
}
//muatator function
void Vehicle:: setYearBuilt(int year) {
	yearBuilt = year;
}
//mutator function
void Vehicle::setManufacturer(string man) {
	manufacturer = man;
}
void Vehicle::vehicleInfo() {
cout << " Vehicle Information : ";
cout << "Manufacturer: "<< manufacturer << endl;
cout << "Year Built: "<< yearBuilt;

}