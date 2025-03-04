#include<iostream>
using namespace std;

enum Colors
{
    GREEN,
    RED,
    BLUE,
    YELLOW,
    WHITE,
    PINK
};

int main(){
    Colors myColor = RED;
    cout << "Selector Color: " << myColor << endl;
}
