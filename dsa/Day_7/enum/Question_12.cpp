#include <iostream>
using namespace std;

enum Months { JAN = 1, FEB = JAN + 1, MAR = FEB + 1, APR = MAR + 1 };
// enum Months { JAN, FEB, MAR, APR };

int main(){
    cout << "January Month Number " << JAN << endl;
    cout << "February Month Number " << FEB << endl;
    cout << "March Month Number " << MAR << endl;
    cout << "April Month Number " << APR << endl;
    return 0;
}