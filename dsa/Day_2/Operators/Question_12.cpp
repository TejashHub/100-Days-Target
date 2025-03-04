#include <iostream>
using namespace std;

#define END endl << endl;

int main(){
    int a = 5;

    cout << "value of a: ";
    cin >> a;

    cout << "Pre-Increment: " << ++a << END;
    cout << "Post-Increment: " << a++ << END;
    cout << "Final Value: " << a << END;

    return 0;
}