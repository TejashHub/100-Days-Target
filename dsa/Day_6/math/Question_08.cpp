#include <iostream>
#include <cmath>
#define END endl << endl

using namespace std;

int main(){
    double degress = 90.0;
    double radians = degress * (M_PI / 180);

    cout << degress << " degress " << radians << " radians " << END;

    double rad = M_PI / 2;
    double deg = rad * (180.0 / M_PI);
    cout << rad << " radians = " << deg << " degrees" << END;
}