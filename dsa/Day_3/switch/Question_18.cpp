#include<iostream>
using namespace std;

int main(){

    double unit, bill;
    int choice;

    cout << "\n===== Electricity Calculator =====\n";
    cout << "1. Rural House bill \n";
    cout << "2. Urban House bill \n";
    cout << "3. Shop & WareHouse bill \n";
    cout << "4. Exit\n";

    cout << "choice:  ";
    cin >> choice;

    cout << endl;

    cout << "unit:  ";
    cin >> unit;

    cout << endl;

    switch(choice){
        case 1:
            cout << "Rural House bill" << endl;
            bill = unit * 4;
            cout << "Your Electricity Bill is: " << bill << endl << endl;
            break;
        case 2:
            cout << "Urban House bill" << endl;
            bill = unit * 7;
            cout << "Your Electricity Bill is: " << bill << endl << endl;
            break;
        case 3:
            cout << "Shop & WareHouse bill" << endl;
            bill = unit * 15;
            cout << "Your Electricity Bill is: " << bill << endl << endl;
            break;
        case 4:
            break;
    }
    return 0;
}