#include<iostream>
using namespace std;

struct Student{
    char name[60];
    int rollNo;
    int age;
    float marks;
};

int main(){
    Student s;

    cout << "Enter name, RollNo, Age and Marks: ";
    scanf("%s %d %d %f", s.name, &s.rollNo, &s.age, &s.marks);

    cout << endl << endl;

    cout << "Student Name: " << s.name << endl << endl;
    cout << "Student RollNo: " << s.rollNo << endl << endl;
    cout << "Student Age: " << s.age << endl << endl;
    cout << "Student Marks: " << s.marks << endl << endl;
}