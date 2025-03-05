#include<iostream>

using namespace std;

struct  Student{
    char name[50];
    int age;
    float marks;
    int roll;
};

int main(){
    Student s1 = {"John", 21, 56.78, 1};

    cout << "Student Roll is: " << s1.roll << endl;
    cout << "Student Name is: " << s1.name << endl;
    cout << "Student Age is: " << s1.age << endl;
    cout << "Student Marks is: " << s1.marks << endl;

    cout << endl << endl;
}