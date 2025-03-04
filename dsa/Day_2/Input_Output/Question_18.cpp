#include<iostream>
using namespace std;

int main(){
    int p, r, t;

    cout << "enter principle: ";
    cin >> p;

    cout << "enter rate: ";
    cin >> r;

    cout << "enter time: ";
    cin >> t;

    int result = (p * r * t) / 100;

    cout << "Simple intresent is " << result << endl;

    return 0;
}
