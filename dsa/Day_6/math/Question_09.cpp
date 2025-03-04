#include <iostream>
#include <cmath>
#define END endl << endl

using namespace std;

int main(){
    double a = 5.6, b = 7.2;

    cout << "Max: " << fmax(a, b) << END;
    cout << "Min: " << fmin(a, b) << END;

    return 0;
}