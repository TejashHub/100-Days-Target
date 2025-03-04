#include<iostream>
using namespace std;

int main(){

    int choice;
    double kilometer, converted;

    cout << "\n===== Distance Convertor =====\n";
    cout << "1. Kilometer to Meter\n";
    cout << "2. Kilometer to Centimeters\n";
    cout << "3. Kilometer to Miles\n";
    cout << "4. Exit\n";

    cout << "enter your choice: ";
    cin >> choice;

    cout << endl << endl;

    cout << "Kilometer: ";
    cin >> kilometer;

    switch (choice){
        case 1 : 
            cout << "Kilometer to Meter" << endl << endl;
            converted = kilometer * 1000;
            cout << "Kilometer to Meter value is " << converted << endl << endl;
            break;
        case 2 :
            cout << "Kilometer to Centimeter" << endl << endl;
            converted = kilometer * 100000;
            cout << "Kilometer to Centimeter value is " << converted << endl << endl;
            break;
        case 3 : 
            cout << "Kilometer to Miles" << endl << endl;
            converted = kilometer / 1.609;
            cout << "Kilometer to Miles value is " << converted << endl << endl;
            break;
        case 4: break;
    }
    return 0;
}