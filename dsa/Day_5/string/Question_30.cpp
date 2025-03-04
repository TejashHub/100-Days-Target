#include<iostream>
#include<string>

using namespace std;

int main(){
    string numStr = "1234567890";

    int num = stoi(numStr);

    double dnum = stod("1234.6789");

    cout << "stoi " << num << endl;
    cout << "stod " << dnum << endl;

    cout << endl;
    cout << endl;
}