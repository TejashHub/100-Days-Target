#include <iostream>
#include <cmath>
#define END endl << endl;

using namespace std;

int main(){
    double x1 = 1, y1 = 2, x2 = 4, y2 = 6;
    double distance = hypot(x2 - x1, y2 - y1);

    cout << "Distance: " << distance << END;
}