#include <iostream>
using namespace std;

void convert(int number){
    if(number > 0){
        cout << number << " is positive number" << endl;
    }else if(number == 0){
        cout << number << " is zero number" << endl;
    }else{
        cout << number << " is negative number" << endl;
    }
}

int main(){
    int number;
    cout << "number: ";
    cin >> number;
    convert(number);

    return 0;
}
