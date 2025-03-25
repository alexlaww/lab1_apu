#include <iostream>

using namespace std;

int main(){
    int row, col;

    
    cout << "Enter the number of rows and column\n";
    cin >> row >> col;

    int matrix1[row][col], matrix2[row][col], result[row][col];

    cout << "Enter the elements of first matrix\n";
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> matrix1[i][j];
        }
    }
    cin.ignore();

    cout << "Enter the elements of second matrix\n";
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> matrix2[i][j];
        }
    }
    cin.ignore();

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "Sum of entere matrices: \n";
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << result[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}