#include <iostream>
using namespace std;


void compare(int a, int b, int c)
{
    if(a > b && a > c){
        cout << a << " is greater than " << a << " and " << b << endl;
    }
    else if(b > a && b > c){
        cout << b << " is greater than " << a << " and " << c << endl;
    }
    else if(c > a && c > b){
        cout << c << " is greater than " << a << " and " << b << endl;
    }else{
        cout << "all value are equal" << endl;
    }
}

int main(){

    int a;
    int b;
    int c;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    compare(a, b, c);

    return 0;
}