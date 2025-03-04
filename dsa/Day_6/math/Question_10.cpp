#include <iostream>
#include <cmath>
#define END endl << endl

using namespace std;

int main(){
    double num1 = 10.5, num2 = 3.2;

    cout << "fmod(" << num1 << ", " << num2 << ") = " << fmod(num1, num2) << END;

    return 0;
}