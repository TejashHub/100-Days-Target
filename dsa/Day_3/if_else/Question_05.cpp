#include<iostream>
using namespace std;

#define END endl << endl

int main(){

    int year;

    cout << "enter year ";
    cin >> year;

    if(year % 400 == 0){
        cout << year << " is leap year " << END;
    }else if(year % 100 == 0){
        cout << year << " is not leap year " << END;
    }else if(year % 4 == 0){
        cout << year << " is leap year " << END;
    }else{
        cout << year << " is not leap year " << END;
    }

    return 0;
}