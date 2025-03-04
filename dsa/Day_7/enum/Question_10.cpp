#include <iostream>
using namespace std;

typedef enum { LOW, MEDIUM, HIGH } Speed;

string getSpeedName(Speed s){
    switch(s){
        case LOW : return "LOW";
        break;
        case MEDIUM : return "MEDIUM";
        break;
        case HIGH : return "HIGH";
        break;
        default: return "Unknown";
        break;
    }
}

int main(){
    Speed s = HIGH;
    cout << "Speed level: " << getSpeedName(s) << endl << endl;
    return 0;
}
