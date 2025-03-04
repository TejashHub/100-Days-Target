#include <iostream>
#include <algorithm> 
#define END endl << endl

using namespace std;

bool isRightTriangle(int a, int b, int c){
    int sides[] = {a, b, c};
    sort(sides, sides + 3);
    return (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2]);
}

int main(){
     int a, b, c;

    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    if (isRightTriangle(a, b, c)) {
        cout << "The given sides form a right-angled triangle." << END;
    } else {
        cout << "The given sides do NOT form a right-angled triangle." << END;
    }


    return 0;
}