#include <iostream>
using namespace std;

class Number {
    int value;
    public:
        Number(int v) : value(v) {}
        Number& operator+=(const Number &n) {
            value += n.value;
            return *this;
        }
    void show() { cout << "Value: " << value << endl; }
};

int main(){
    Number num1(5), num2(10);
    num1 += num2;
    num1.show();
    return 0;
}