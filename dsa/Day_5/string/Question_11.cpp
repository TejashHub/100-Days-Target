#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "hello wordl";
    cout << "before clean " << str << endl;
    str.clear();
    cout << "after clean" << str << endl;
}