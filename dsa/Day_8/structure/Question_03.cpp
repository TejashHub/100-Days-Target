#include<iostream>
#include <cstdio>
using namespace std;

struct Student{
    char name[60];
    int age;
    float marks;
};

int main(){
    Student s[4];

    for (int i = 0; i < 4; i++){
        cout << "Enter name, Age and Marks: ";
        scanf("%s %d %f", s[i].name, &s[i].age, &s[i].marks);
    }

    for (int i = 0; i < 4; i++){
        printf("Student %d: Name: %s, Age: %d, Marks: %.2f\n", i+1, s[i].name, s[i].age, s[i].marks);
    }
}