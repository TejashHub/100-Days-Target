#include <iostream>
using namespace std;

struct Data {
    int x;
};

int main() {
    Data d = {5};
    int &ref = d.x;
    ref = 10;
    cout << "Updated x: " << d.x << endl;
    return 0;
}