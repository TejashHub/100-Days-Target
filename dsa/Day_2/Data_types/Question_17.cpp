#include<iostream>
using namespace std;

#define END endl << endl

int main(){

    string name;

    cout << "Enter Your Name: ";
    getline(cin, name);

    cout << "Your Name is: " << name << END;
    
    return 0;
}