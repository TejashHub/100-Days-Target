//  Check If a Number is Between Two Values

#include<iostream>
using namespace std;

#define END endl << endl

int main(){
    int num = 15;
    cout << num << " number between 10 and 20 : " << ((10 <= num <= 15) ? "Yes" : "No") << END;
    return 0;
}