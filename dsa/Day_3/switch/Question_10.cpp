#include<iostream>
#define END endl << endl;
using namespace std;

int triangleType(int a, int b, int c){
    if (a + b > c && a + c > b && b + c > a) {
        if(a == b && b == c){
            return 1;
        }else if( a == b || b == c || c ==a ){
            return 2;
        }else{
            return 0;
        }
    }
    return 0;
}

int main(){
    int a, b, c;

    cout << "enter value of a b and c: ";
    cin >> a >> b >> c;

    switch(triangleType(1, 2, 3)){
        case 1: cout << "It is an Equilateral Triangle." << END;
        break;
        case 2: cout << "It is an Isosceles Triangle." << END;
        break;
        case 3: cout << "It is an Scalene Triangle." << END;
        break;
    }
}