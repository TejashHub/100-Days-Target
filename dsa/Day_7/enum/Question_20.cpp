#include<iostream>
using namespace std;

enum Weather { SUNNY, RAINY, CLOUDY };

void checkWeather(Weather w){
    switch (w){
        case SUNNY: cout << "weather is sunny" << endl << endl;
        break;
        case RAINY: cout << "weather is rainy" << endl << endl;
        break;
        case CLOUDY: cout << "weather is cloudy" << endl << endl;
        break;
    }
}

int main(){

    int choice;
    cout << "Enter weather (0:Sunny, 1:Rainy, 2:Cloudy): ";
    cin >> choice;

    Weather w = static_cast<Weather>(choice);
    checkWeather(w);
    return 0;
}