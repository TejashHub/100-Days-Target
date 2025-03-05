#include <iostream>
using namespace std;

void modify(int &a, int b = 10) {
    a += b;
}

int main() {
    int x = 5;
    modify(x);
    cout << "Modified x: " << x << endl;
    return 0;
}
