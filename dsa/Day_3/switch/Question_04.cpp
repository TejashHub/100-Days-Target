#include<iostream>
#define END endl << endl

using namespace std;

int main(){

    int month;

    cout << "enter month (1 - 12): ";
    cin >> month;

    switch (month){
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
            cout << "month have a 31 days" << END;
            break;
        case 4 : case 6 : case 9 : case 11 :
            cout << "month have a 30 days" << END;
            break;
        case 2:
            cout << "month have a 28 or 29 days" << END;
            break;
        default:
            cout << "invalid month" << END;
            break;
        }

    return 0;
}