#include <iostream>
using namespace std;

#define END endl << endl;

int main(){

    int choice;
    float a, b;

    cout << "1. Circle\n2. Square\n3. Rectangle\n4. Triangle\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice){
        case 1 :
            cout << "enter value of a ";
            cin >> a;
            cout << "Area of Circle " << 3.14 * a * a << END;
            break;
        case 2 : 
            cout << "enter value of a ";
            cin >> a; 
            cout << "Area of Square " << a * a << END;
            break;
        case 3 :
            cout << "enter value of a and b ";
            cin >> a >> b;  
            cout << "Area of Rectangle " << a * b << END;
            break;
        case 4 : 
            cout << "enter value of a ";
            cin >> a; 
            cout << "Area of Triangle " << 3.14 * a * a << END;
            break;
        }

    return 0;
}