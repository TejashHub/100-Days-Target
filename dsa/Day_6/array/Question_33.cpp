#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}