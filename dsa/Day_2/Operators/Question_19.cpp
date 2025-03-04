#include <iostream>
using namespace std;

int reverseBits(int n){
    int rev = 0;
    while (n > 0) {
        rev = (rev << 1) | (n & 1);
        n >>= 1;
    }
    return rev;
}

int main() {
    int num = 1234;
    cout << "Reversed Bits: " << reverseBits(num) << endl;
    return 0;
}