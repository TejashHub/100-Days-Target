#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    switch ((a == b) + (b == c) + (c == a)) {
        case 3: cout << "Equilateral Triangle" << endl << endl; 
        break;
        case 1: cout << "Isosceles Triangle" << endl << endl; 
        break;
        default: cout << "Scalene Triangle" << endl << endl;
    }
    return 0;
}
