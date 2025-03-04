#include<iostream>
using namespace std;

enum Days
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main(){
    Days today = MONDAY;
    cout << "week of the days: " << today << endl << endl;
    return 0;
}