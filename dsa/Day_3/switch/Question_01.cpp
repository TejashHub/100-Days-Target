#include<iostream>
using namespace std;

#define END endl << endl;

int main(){
    char op;
    float a, b;

    cout << "enter operator(+, -, * , /) ";
    cin >> op;

    cout << "enter numbers(a, b) ";
    cin >> a >> b;

    switch (op){
        case '+' : cout << "addition of two value is: " << a + b << END;
        break;
        case '-' : cout << "substraction of two value is: " << a - b << END;
        break;
        case '*' : cout << "multiplication of two value is: " << a * b << END;
        break;
        case '/' : cout << "division of two value is: " << a / b << END;
        break;
        default: cout << "Invalid operator";
    }

    return 0;
}