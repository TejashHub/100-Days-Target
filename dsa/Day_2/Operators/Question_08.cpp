//  Check Even or Odd Using Bitwise Operator

#include<iostream>
using namespace std;

#define END endl << endl;

int main(){
    int num = 8;
    cout << "Is Even? " << (!(num & 1)) << END;
}