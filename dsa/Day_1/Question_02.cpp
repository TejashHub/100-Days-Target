#include<iostream>
using namespace std;

void greeting(string msg){
    cout << "Tejash " << msg << endl;
}

int main(){
    string messages = "Good Morning";
    greeting(messages);
    return 0;
}