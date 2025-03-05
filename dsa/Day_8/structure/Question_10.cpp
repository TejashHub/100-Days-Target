#include<iostream>
using namespace std;

struct Student{
    char name[70];
    int age;
    float marks;
};

void sortStudents(Student s[], int n){
    Student temp;
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n - 1; j++){
            if(s[i].marks < s[j].marks){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main(){
    Student s[3] = {
        {"Tejash", 21, 67.8},
        {"Mohini", 20, 78.8},
        {"Jayesh", 21, 69.8}
    };
    sortStudents(s, 3);

    for (int i = 0; i < 3; i++){
        cout << "Student name: " << s[i].name << endl;
        cout << "Student age: " << s[i].age << endl;
        cout << "Student marks: " << s[i].marks << endl;
        cout << endl;
    }
}