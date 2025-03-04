#include<iostream>
#include <cmath>
using namespace std;

#define END endl << endl

int century(int year) {
    return ((year - 1) / 100) + 1;
}

int main(){
    int year;

    cout << "enter year: ";

    cin >> year;

    int centuary = century(year);

    cout << "The year " << year << " belongs to the " << centuary << "th century." << END;

    return 0;
}