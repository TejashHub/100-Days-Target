#include<iostream>
#include <cmath>
using namespace std;

#define END endl << endl

int main(){

    int a, b, c;

    cout << "enter a value of a b and c : ";

    cin >> a >> b >> c;

    if(a == 0){
        cout << "Not a quadratic equation (a cannot be 0)" << END;
    }

    double D = b * b - 4 * a * c;

    if(D > 0){
        double root1 = ((-b + sqrt(D)) / (2 * a));
        double root2 = ((-b - sqrt(D)) / (2 * a));

        cout << "Roots are real and different: " << root1 << " and " << root2 << END;
    }else if(D == 0){
        double root1 = (-b / (2 * a));

        cout << "Roots are real and same: " << root1 << END;
    }else if(D < 0){
        double root1 = (-b / (2 * a));
        double root2 = (sqrt(-D) / (2 * a));
        cout << "Real root is: " << root1 << " and " << "imaginary root is " << root2 << END;
    }
    return 0;
}