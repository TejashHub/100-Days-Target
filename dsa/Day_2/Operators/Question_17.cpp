#include <iostream>
using namespace std;

#define END endl << endl

int main(){

    int a = 5, b = 10;

    cout << "Before Swap: a = " << a << ", b = " << b << END;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swap: a = " << a << ", b = " << b << END;

    return 0;
}