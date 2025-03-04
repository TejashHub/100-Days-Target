#include <iostream>
using namespace std;

#define END endl << endl;

int main(){

    int num = 0;

    cout << ((num > 0) ? "positive" : (num < 0) ? "negative": "Zero") << END;

    return 0;
}