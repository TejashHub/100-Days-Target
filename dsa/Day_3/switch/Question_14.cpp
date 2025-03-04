#include <iostream>
using namespace std;

int main(){

    int choice;
    double temp, converted;

    cout << "1. Convert Celsius to Fahrenheit\n2. Convert Fahrenheit to Celsius\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << endl << endl;

    switch (choice){
        case 1 :
            cout << "Celsius to Fahrenheit" << endl << endl;
            cin >> temp;
            converted = (temp * 1.8) + 32;
            cout << "Temperature in Fahrenheit: " << converted << endl << endl;
            break;
        case 2 :
            cout << "Fahrenheit to Celsius" << endl << endl;
            cin >> temp;
            converted = ((temp - 32) + (5/9));
            cout << "Temperature in Celsius: " << converted << endl << endl;
            break;
        }

    return 0;
}