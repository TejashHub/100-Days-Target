#include<iostream>
using namespace std;

#define END endl << endl;

union Data{
    int i;
    float f;
};

int main(){
    Data d;
    d.i = 50;
    cout << "Integer: " << d.i << END;
    d.f = 57.80;
    cout << "Float: " << d.f << END;
    return 0;
}