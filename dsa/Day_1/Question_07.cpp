#include <iostream>
using namespace std;

void convertValue(int kilometer) {
    cout << "miles value: " << kilometer * 0.621371 << endl;
}

int main(){
    int kilometer;
    cout << "kilometer: ";
    cin >> kilometer;
    convertValue(kilometer);
    return 0;
}