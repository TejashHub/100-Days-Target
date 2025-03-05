#include <iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v) : value(v) {};
    int &getValue() { return value; }
};

int main(){
    Test obj(5);
    obj.getValue() = 10;
    cout << "Modified Value: " << obj.getValue() << endl;
    cout << endl;
    return 0;
}