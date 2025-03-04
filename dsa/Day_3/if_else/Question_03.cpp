#include<iostream>
using namespace std;

#define END endl << endl

int main(){
    int a, b;

    cout << "enter a : ";
    cin >> a;

    cout << "enter b : ";
    cin >> b;

    if( a > b ){
        cout << a << " is greather than " << b << END;
    }else{
        cout << b << " is greather than " << a << END;
    }

    return 0;
}