#include<iostream>
using namespace std;

#define END endl << endl

bool hasOppositeSigns(int a, int b) {
    return (a ^ b) < 0;
}

int main() {
    int a = 10, b = 20;
    cout << "Have Opposite Signs? " << (hasOppositeSigns(a, b) ? "Yes" : "No") << END;
    return 0;
}