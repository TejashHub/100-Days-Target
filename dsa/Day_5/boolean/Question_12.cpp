#include<iostream>
using namespace std;

int main(){
    int a, b, c;

    cout << "enter a, b and c: ";
    cin >> a >> b >> c;

    cout << ((a + b > c && b + c > a && c + a > b) ? "Triangle" : "Not Triangle") << endl;
}