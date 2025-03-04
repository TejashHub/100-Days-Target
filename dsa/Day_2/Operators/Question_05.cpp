// Bitwise AND, OR, XOR

#include<iostream>
using namespace std;

#define END endl << endl;

int main(){

    int a = 5, b = 4;

    cout << "Bitwise AND: " << (a & b) << END;
    cout << "Bitwise OR: " << (a | b) << END;
    cout << "Bitwise XOR: " << (a ^ b) << END;

    return 0;
}