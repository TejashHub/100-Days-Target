#include<iostream>
using namespace std;

int main(){
    string name;
    string company;
    int age;
    int salary;

    cout << "name: ";
    getline(cin, name);

    cout << "company: ";
    getline(cin, company);

    cout << "age: ";
    cin >> age;

    cout << "salary: ";
    cin >> salary;

    cin.ignore();

    cout << "my name is " << name  << " and age is " << age << " & currently working as a " << company << " and my salary is " << salary << endl;

    return 0;
}