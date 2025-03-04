#include<iostream>
using namespace std;

enum Levels { LOW, MEDIUM, HIGH };

int main(){
    for (int i = LOW; i <= HIGH; i++){
        cout << "enum types values: " << i << endl << endl;
    }
}