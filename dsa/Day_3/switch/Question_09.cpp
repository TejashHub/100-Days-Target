#include<iostream>
#define END endl << endl

using namespace std;

int main(){
    int marks;

    cout << "enter marks: ";
    cin >> marks;

    if(0 < marks > 100){
        cout << "invalid marks" << END;
    }else{
        switch(marks / 10){
            case 10:
            case 9: cout << "Grade: A" << endl; break; 
            case 8: cout << "Grade: B" << endl; break; 
            case 7: cout << "Grade: C" << endl; break; 
            case 6: cout << "Grade: D" << endl; break; 
            case 5: cout << "Grade: E" << endl; break; 
            default: cout << "Grade: F (Fail)" << endl; break;
        }
    }
    

    return 0;
}
