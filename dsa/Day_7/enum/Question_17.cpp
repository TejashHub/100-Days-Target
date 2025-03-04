#include <iostream>
using namespace std;

enum Status { STARTED, STOPPED };

void checkStatus(Status s){
    switch (s){
        case STARTED: cout << "Started..." << endl;
        break;
        case STOPPED: cout << "Stopped..." << endl;
        break;
        default: cout << "Unknown..." << endl;
        break;
    }
}

int main(){
    checkStatus(STARTED);
    return 0;
}