#include<iostream>

using namespace std;

int main(){
    int x = 10;
    int &ref = x;

    cout << "x: " << x << ", ref: " << ref << endl;
    ref = 20;
    cout << "x after modification: " << x << endl;
    return 0;
}