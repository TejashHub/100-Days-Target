#include<iostream>
#include<vector>
using namespace std;

int main(){
    int rows, cols, sum = 0;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
    }

    cout << endl << endl;
    cout << "Sum of matrix elements: " << sum << endl << endl;

    return 0;
}