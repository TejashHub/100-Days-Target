#include <iostream>
#include <cstdlib>
#include <ctime>  
using namespace std;

void randomgenerator(){
    srand(time(0));
    cout << rand() << endl;
}

int main(){
    randomgenerator();
    return 0;
}