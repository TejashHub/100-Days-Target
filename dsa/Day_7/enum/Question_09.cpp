#include <iostream>
using namespace std;

class Vehicle {
    public:
        enum Type
        {
            CAR,
            BIKE,
            TRUCK
    };
};

string getVehicleType(Vehicle::Type type) {
    switch(type){
        case Vehicle::CAR: return "Car";
        break;
        case Vehicle::BIKE: return "Bike";
        break;
        case Vehicle::TRUCK: return "Truck";
        break;
        default: return "Unknown";
        break;
    }
};

int main(){
    Vehicle::Type myVehicle = Vehicle::TRUCK;
    cout << "Vehicle type: " << getVehicleType(myVehicle) << endl;
    return 0;
}   