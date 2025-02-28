#include <iostream>
using namespace std;

void areaTriangle(int h, int b)
{
    cout << 0.5 * h * b << endl;
}

int main(){

    int height;
    int base;

    cout << "height: ";
    cin >> height;

    cout << "base: ";
    cin >> base;

    areaTriangle(height, base);

}