#include<iostream>

struct Student{
    char name[50];
    int age;
};

int main(){
    struct Student s = {"David", 23};
    FILE *file = fopen("student.txt", "w");
    fprintf(file, "Name: %s\nAge: %d\n", s.name, s.age);
    fclose(file);
    return 0;
}