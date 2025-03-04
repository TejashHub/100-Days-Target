#include <iostream>
#include <cstdlib>
#include <ctime>
#define END endl << endl

using namespace std;

int main(){
    srand(time(0));

    int randomNum = rand() % 100;

    cout << "Random Number: " << randomNum << END;
}