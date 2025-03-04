#include <iostream>
using namespace std;

#define END endl << endl;

int main(){
    int a = 10, b = 20;
    int max = (a > b) ? a : b;

    cout << "maximum value is: " << max << END;
}