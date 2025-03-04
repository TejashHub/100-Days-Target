#include<iostream>
using namespace std;

#define END endl << endl

int main(){

    int a, b, c;

    cout << "enter three values: ";
    cin >> a >> b >> c;

    if(a > b && a > c){
        cout << a << " is greather than " << b << " and " << c << END;
    }else if(b > a && b > c){
        cout << b << " is greather than " << a << " and " << c << END;
    }else if(c > a && c > b){
        cout << c << " is greather than " << a << " and " << b << END;
    }else{
        cout << "all value are equal" << END;
    }

    return 0;
}