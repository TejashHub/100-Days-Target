#include<iostream>
using namespace std;

enum trafficLight
{
    RED,
    GREEN,
    YELLOW
};

int main(){

    trafficLight signal = YELLOW;

    switch (signal){
        case RED: cout << "Stop!" << endl;
        break;
        case GREEN: cout << "Go!" << endl;
        break;
        case YELLOW: cout << "Get Ready!" << endl;
        break;
    }

    return 0;
}