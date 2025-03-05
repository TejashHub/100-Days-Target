#include<iostream>

using namespace std;

struct Student {
    char name[50];
    int age;
    float marks;
};

int main(){
    Student s1 = {"Alice", 21, 90.5};

    Student *ptr = &s1;

    cout << "student name : " << ptr->name << endl;
    cout << "student age : " << ptr->age << endl;
    cout << "student marks : " << ptr->marks << endl;
}