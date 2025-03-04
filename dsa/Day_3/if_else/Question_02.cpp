#include<iostream>
using namespace std;

#define END endl << endl

int main(){

    int n;

    cout << "enter n: ";
    cin >> n;

    if(n % 2 == 0){
        cout << n << " is a even number! " << END;
    }else{
        cout << n << " is a odd number! " << END;
    }

    return 0;
}