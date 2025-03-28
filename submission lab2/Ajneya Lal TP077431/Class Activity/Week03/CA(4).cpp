#include <iostream>
using namespace std;

int main() {
    int matrix1[5][5], matrix2[5][5], sum[5][5];
    int rows, cols;

    cout << "Enter the number of rows and columns of matrix (max 5): ";
    cin >> rows >> cols;

    cout << "Enter the elements of first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the elements of second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    cout << "Sum of entered matrices:-" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
