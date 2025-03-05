#include <iostream>
using namespace std;

class BigData{
    int data[1000];
public:
    void show() const { cout << "Big Data Object\n"; }
};

void process(const BigData &obj) {
    obj.show();
}

int main() {
    BigData obj;
    process(obj);
    return 0;
}
