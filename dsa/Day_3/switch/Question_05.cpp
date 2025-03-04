#include<iostream>
using namespace std;

#define END endl << endl

int main(){
    int n;
    cout << "enter number between 0 to 9 : ";
    cin >> n;

    switch(n){
        case 0 : cout << "zero" << END;
        break;
        case 1 :  cout << "one" << END;
        break;
        case 2 : cout << "two" << END;
        break;
        case 3 : cout << "three" << END;
        break;
        case 4 : cout << "four" << END;
        break;
        case 5 : cout << "five" << END;
        break;
        case 6 : cout << "six" << END;
        break;
        case 7 : cout << "seven" << END;
        break;
        case 8 : cout << "eight" << END;
        break;
        case 9 : cout << "nine" << END;
        break;
    }
}