#include<iostream>
#include<string>

using namespace std;

int main(){
    int num = 42;
    string str = to_string(num);

    int n = stoi(str);

    cout << "number to string " << str << endl;
    cout << "string to number " << n << endl;
}