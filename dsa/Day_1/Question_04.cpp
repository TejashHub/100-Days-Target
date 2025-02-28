#include <iostream>
using namespace std;

void cubeNumber(int num)
{
    cout << num * num * num << endl;
}

int main(){
    int number;
    cout << "enter number: ";
    cin >> number;
    cubeNumber(number);
    return 0;
}