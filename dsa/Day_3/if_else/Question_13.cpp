#include<iostream>
#include<cctype>
using namespace std;

#define END endl << endl

int main(){

    int cp;
    int sp;

    cout << "enter cost price: ";
    cin >> cp;

    cout << "enter selling price: ";
    cin >> sp;

    if(sp > cp){
        cout << "user got profit by " << ((static_cast<float>(sp - cp) / cp) * 100) << "%" << END;
    }else{
        cout << "user got loss by " << ((static_cast<float>(cp - sp) / cp) * 100) << "%"  << END;
    }

    return 0;
}