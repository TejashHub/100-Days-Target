//  Dynamic Memory Allocation (new and delete)

#include<iostream>
using namespace std;

#define END endl << endl;

int main(){
    int *ptr = new int(9999);
    cout << "Dynamically Allocated Value: " << *ptr << " and Address: " << ptr << END;
    delete ptr;
    return 0;
}
