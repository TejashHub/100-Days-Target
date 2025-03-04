#include <iostream>
using namespace std;

enum Sports { CRICKET, FOOTBALL, TENNIS };

int main(){
    string games[] = {"Cricket", "Football", "Tennish"};
    cout << "Sport at index 0: " << games[CRICKET] << endl;
    return 0;
}