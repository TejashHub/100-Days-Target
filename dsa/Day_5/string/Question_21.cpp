#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "I love coading";
    str.replace(2, 4, "enjoy");
    cout << "After Replacement " << str << endl;
}