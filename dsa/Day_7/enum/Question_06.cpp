#include<iostream>
using namespace std;

enum Direction
{
    NORTH,
    EAST,
    WEST,
    SOUTH
};

void move(Direction d){
    cout << "Moving... ";
    switch (d){
        case NORTH: cout << "North Direction " << endl << endl; break;
        case EAST: cout << "East Direction " << endl << endl; break;
        case WEST: cout << "West Direction " << endl << endl; break;
        case SOUTH: cout << "South Direction " << endl << endl; break;
    }
}

int main(){
    move(NORTH);
    return 0;
}