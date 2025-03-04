#include <iostream>
using namespace std;

#define END endl << endl;

int main(){
    int a, b;

    cout << "enter value a: ";
    cin >> a;

    cout << "enter value b: ";
    cin >> b;

    cout << "addition of two value is: " << a + b << END;
    cout << "substraction of two value is: " << a - b << END;
    cout << "multiplication of two value is: " << a * b << END;
    cout << "division of two value is: " << a / b << END;
    cout << "modules of two value is: " << a % b << END;

    return 0;
}