#include<iostream>

using namespace std;

struct DateTime {
    int day, month, year, hours, minutes, seconds;
};

int main(){
    DateTime d = {5, 1, 24, 10, 6, 120};
    cout << "your current date: " << d.day << "/" << d.month << "/" << d.year << endl;
    cout << "your current time: " << d.hours << "/" << d.minutes << "/" << d.seconds << endl;
}