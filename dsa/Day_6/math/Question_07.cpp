#include<iostream>
#include<cmath>
#define END endl << endl

using namespace std;

int main(){
    double angle = 45.0; 
    double radian = angle * M_PI / 180.0;
    cout << "sin(" << angle << ") = " << sin(radian) << END;
    cout << "cos(" << angle << ") = " << cos(radian) << END;
    cout << "tan(" << angle << ") = " << tan(radian) << END;
}