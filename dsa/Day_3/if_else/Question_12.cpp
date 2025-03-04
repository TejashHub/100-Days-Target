#include<iostream>
#include<cctype>
using namespace std;

#define END endl << endl

int main(){
    char op;
    int a, b;

    cout << "enter value of a and b: ";
    cin >> a >> b;

    cout << "enter operator: ";
    cin >> op;

    if (op == '+'){
        cout << "addition is: " << a + b << END;
    }else if (op == '-'){
        cout << "addition is: " << a - b << END;
    }else if (op == '*'){
        cout << "addition is: " << a * b << END;
    }else if (op == '/'){
        cout << "division is: " << a / b << END;
    }else{
        cout << "operator not found" << END;
    }

    return 0;
}