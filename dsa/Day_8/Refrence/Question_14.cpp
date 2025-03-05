#include <iostream>
using namespace std;

class Test{
    int data;
public:
    Test(int d) : data(d) {}
    friend void modify(Test &);
    void show() { cout << "Data: " << data << endl; };
};

void modify(Test &obj) {
    obj.data = 50;
}

int main() {
    Test t(10);
    t.show();
    modify(t);
    t.show();
    return 0;
}