#include<iostream>

using namespace std;

struct Student{
    char name[50];
    int age;
};

int main(){
    Student *s = (Student *)malloc(sizeof(struct Student));
    printf("Enter name and age: ");

    scanf("%s %d", s->name, &s->age);
    printf("Name: %s\nAge: %d\n", s->name, s->age);
    free(s);
    return 0;
}