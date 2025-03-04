#include<iostream>
#include <cmath>
using namespace std;

#define END endl << endl

int main(){

    double a, b, c;

    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0) {  
        cout << "Not a quadratic equation (a cannot be 0)." << END;
        return 0;
    }

    double D = b * b - 4 * a * c;

    if(D > 0){

        double root1 = ((-b + sqrt(D)) / (2 * a));
        double root2 = ((-b - sqrt(D)) / (2 * a));

        cout << "Roots are real and different: " << root1 << " and " << root2 << END;

    }else if(D == 0){
        double root = -b / (2 * a);
        cout << "Roots are real and the same: " << root << endl;
    }else{
        double realPart = -b / (2 * a);
        double imaginarypart = sqrt(-D) / (2 * a);
        cout << "Roots are complex " << realPart << " + " << imaginarypart << "i and " << realPart << " - " << imaginarypart << "i" << END;
    }

    return 0;
}
