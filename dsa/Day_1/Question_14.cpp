#include <iostream>
using namespace std;

void convert(int celsius){
    cout << "feranhit " << (1.8 * celsius )+ 32 << endl;
}

int main(){
    int celsius;
    cout << "celsius: ";
    cin >> celsius ;
    convert(celsius);
    return 0;
}