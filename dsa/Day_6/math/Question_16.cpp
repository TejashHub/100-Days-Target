#include <iostream>
#include <cmath>
#define END endl << endl

using namespace std;

int main(){
    double val = sqrt(-1);

    if(isnan(val)){
        cout << "Value is NaN" << END;
    }else{
        cout << "Value is not NaN" << END;
    }
}
