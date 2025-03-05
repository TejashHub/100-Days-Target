#include<iostream>

using namespace std;

class Demo {
    int &ref;
public:
    Demo(int &r) : ref(r) {}
    void show() { cout << "Reference Value: " << ref << endl; }
};

int main(){
    int x = 40;
    Demo obj(x);
    obj.show();
    return 0;
}