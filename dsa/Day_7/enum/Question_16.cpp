#include <iostream>
using namespace std;

enum Permissions { READ = 1, WRITE = 2, EXECUTE = 4 };

int main(){
    int myPerm = READ | WRITE;
    cout << "Permission: " << myPerm << endl;
    return 0;
}