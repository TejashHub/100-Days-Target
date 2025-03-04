#include <iostream>
using namespace std;

enum Fruit
{
    APPLE,
    BANANA,
    ORANGE
};

string getFruitName(Fruit f){
    switch(f){
        case APPLE:return "Apple";
        break;
        case BANANA:return "Banana";
        break;
        case ORANGE:return "Orange";
        break;
        default:return "Unknown";
        break;
    }
}

int main(){
    Fruit f = ORANGE;

    cout << "Orange Value Type is: " << getFruitName(f) << endl << endl;
}