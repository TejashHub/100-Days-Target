#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "HelloWorld";

    cout << "Starts with 'Hello': " << (str.find("Hello") == 0) << endl;
    cout << "Ends with 'World': " << (str.rfind("World") == str.length() - 5) << endl;

}