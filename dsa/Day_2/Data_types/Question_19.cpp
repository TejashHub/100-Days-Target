#include<iostream>
#include<string>
using namespace std;

#define END endl << endl

enum Color {RED, GREEN, BLUE, YELLOW, PINK};

int main(){
    Color myColor = GREEN;
    cout << "My color is: " << myColor << END;
    return 0;
}