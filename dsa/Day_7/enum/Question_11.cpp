#include<iostream>
using namespace std;

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

bool isValidDay(int day){
    return day >= SUNDAY && day <= SATURDAY;
}

int main(){

    int d;
    cout << "Enter day number (0-6): ";
    cin >> d;

    if(isValidDay(d)){
        cout << "Valid day!" << endl << endl;
    }else{
        cout << "Invalid day!" << endl << endl;
    }

    return 0;
}