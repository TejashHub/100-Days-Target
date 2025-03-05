#include<iostream>

using namespace std;

struct address{
    char city[60];
    int pin;
};

struct Employee{
    char name[60];
    struct address address;
};

int main(){
    Employee emp = {"John", {"New York", 10001}};
    cout << "Student name: " << emp.name << endl;
    cout << "Student pin: " << emp.address.pin << endl;
    cout << "Student city: " << emp.address.city << endl;
}