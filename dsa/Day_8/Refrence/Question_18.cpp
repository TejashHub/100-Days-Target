#include <iostream>
using namespace std;

class Example{
    public:
    Example& display() {
        cout << "Using this reference" << endl;
        return *this;
    }
};

int main() {
    Example obj;
    obj.display();
    return 0;
}