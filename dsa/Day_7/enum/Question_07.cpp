#include<iostream>
using namespace std;

enum Days { SUNDAY = 1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main(){

    int choice;

    cout << "Enter a number (1-7): ";
    cin >> choice;

    Days day = static_cast<Days>(choice);

    string dayNames[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thurday", "Friday", "Saturday"};

    cout << "You chose: " << dayNames[choice - 1] << endl;

    return 0;
}