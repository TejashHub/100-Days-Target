#include<iostream>
using namespace std;

#define END endl << endl;

int main(){
    int n;

    cout << "enter number between (1 - 7) ";
    cin >> n;

    switch(n){
        case 1 : cout << "Today is Monday" << END;
        break;
        case 2 : cout << "Today is Tuesday" << END;
        break;
        case 3 : cout << "Today is Wednesday" << END;
        break;
        case 4: cout << "Today is Thursday" << END;
        break;
        case 5 : cout << "Today is Friday" << END;
        break;
        case 6 : cout << "Today is Saturday" << END;
        break;
        case 7 : cout << "Today is Sunday" << END;
        break;
    }
}