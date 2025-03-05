#include<iostream>

using namespace std;

struct  Student{
    char name[78];
    int age;
};

void display(struct  Student s){
    printf("Name: %s\nAge: %d\n", s.name, s.age);
}

int main(){
    Student s1 = {"Tejash", 24};
    display(s1);
}