#include <iostream>
using namespace std;

void display(const int &a){
    cout << "Value: " << a << endl;
}

int main(){
    int x = 15;
    display(x);
    x = 90;
    return 0;
}
