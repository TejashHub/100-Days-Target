#include<iostream>
using namespace std;

struct Complex {
    float real, imag;
};

Complex add(Complex c1, Complex c2){
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;
}

int main(){
    Complex c1 = {2.3, 4.5}, c2 = {6.7, 3.9};
    Complex sum = add(c1, c2);
    cout << "complex value sum is: " << sum.real << endl;
    cout << "complex value sum is: " << sum.imag << endl;
}