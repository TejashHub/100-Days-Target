#include<iostream>
using namespace std;

int main(){

    int rows, cols;
    cout << "Enter rows and columns: ";

    cin >> rows >> cols;

    int matrix[rows][cols], transpose[cols][rows];

    cout << "enter matrix element: ";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}