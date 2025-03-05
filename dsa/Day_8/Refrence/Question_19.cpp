#include <iostream>
using namespace std;

int main(){
    int x = 10;
    auto &ref = x;
    ref = 20;
    cout << "x: " << x << endl;
    return 0;
}