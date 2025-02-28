#include <iostream>
using namespace std;

void leapYear(int y){
    if(y % 400 == 0){
        cout << y << " is leap year" << endl;
    }else if(y % 100 == 0){
        cout << y << " is not leap year" << endl;
    }else if(y % 4 == 0){
        cout << y << " is leap year" << endl;
    }else{
        cout << y << " is not leap year" << endl;   
    }
}

int main(){
    int year;

    cout << "year: ";
    cin >> year;

    leapYear(year);

    return 0;
}