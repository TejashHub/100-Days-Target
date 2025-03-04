#include <iostream>
using namespace std;

int main(){
    char ch;
    while(true){
        cout << "Enter a character (q to quit): " ;
        cin >> ch;
        if (ch == 'q') break;
    }
    return 0;
}