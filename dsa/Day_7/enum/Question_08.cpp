#include <iostream>
using namespace std;

enum FuelType { PETROL, DIESEL, ELECTRIC };

struct Car{
    string model;
    FuelType fuel;
};

string getFuelType(FuelType fuel){
    switch(fuel){
        case PETROL: return "petrol";
        case DIESEL: return "diesel";
        case ELECTRIC: return "electric";
        default: return "Unknown";
    }
};

int main(){
    Car myCar = { "Bajaj", DIESEL };
    cout << "Car Model: " << myCar.model << " ," << " Fuel Types: " << getFuelType(myCar.fuel) << endl <<endl;
    return 0;
}