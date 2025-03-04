#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "hello wordl";

    size_t post = str.find("dl");

    cout << post << endl;
}