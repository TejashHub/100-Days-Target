#include <iostream>
using namespace std;

void squareNumber(int num)
{
    cout << num * num << endl;
}

int main(){
    int number;
    cout << "enter number: ";
    cin >> number;
    squareNumber(number);
    return 0;
}