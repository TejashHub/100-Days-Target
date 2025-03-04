#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int principle, time, rate;
    int choice;
    double amount, si, ci;

    cout << "Enter your choice: \n\n\n";
    
    cout << "Type 1 for Simple Interest" << endl;
    cout << "Type 2 for Compound Interest" << endl;
    cout << endl;

    cin >> choice;

    cout << endl
         << endl;

    switch (choice) {  
        case 1:   
            cout << "Simple Interest" << endl << endl;

            cout << "Enter principle: ";
            cin >> principle;

            cout << "Enter rate: ";
            cin >> rate;

            cout << "Enter time: ";
            cin >> time;

            si = (principle * rate * time) / 100.0; 

            cout << "Simple Interest is " << si << endl << endl;
            break;  

        case 2:   
            cout << "Compound Interest" << endl << endl;

            cout << "Enter principle: ";
            cin >> principle;

            cout << "Enter rate: ";
            cin >> rate;

            cout << "Enter time: ";
            cin >> time;

            amount = principle * pow((1.0 + rate / 100.0), time); 
            ci = amount - principle;

            cout << "Compound Interest is " << ci << endl << endl; 
            break;  

        default:
            cout << "Invalid choice! Please enter 1 or 2." << endl << endl;
    }

    return 0;
}
