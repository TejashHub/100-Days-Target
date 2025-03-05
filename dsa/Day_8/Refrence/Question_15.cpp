#include <iostream>
using namespace std;

class Sample{
    int &ref;
public:
    Sample(int &r) : ref(r) {}
    void show() { cout << "Reference: " << ref << endl; };
};

int main() {
    int x = 100;
    Sample s(x);
    s.show();
    return 0;
}
