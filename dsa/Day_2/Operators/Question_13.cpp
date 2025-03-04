//  Swap Two Numbers Using XOR

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    a ^= b;
    b ^= a;
    a ^= b;
    cout << "After Swap: a=" << a << ", b=" << b << endl;
    return 0;
}
