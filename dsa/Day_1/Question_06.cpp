#include <iostream>
using namespace std;

void swapVariable(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "new value of a and b is: " << a << "," << b << endl;
}

int main(){
    int a;
    int b;

    cout << "a : ";
    cin >> a;

    cout << "b : ";
    cin >> b;

    cout << "old value of a and b is: " << a << "," << b << endl;

    swapVariable(a, b);
}