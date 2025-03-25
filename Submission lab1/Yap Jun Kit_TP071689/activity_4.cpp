//Activity 4
#include <iostream>
using namespace std;
int main() {
    const int MAX_SIZE = 5;
    int rows, cols;

    // Get matrix dimensions
    cout << "Enter the number of rows (1 to " << MAX_SIZE << "): ";
    cin >> rows;
    cout << "Enter the number of columns (1 to " << MAX_SIZE << "): ";
    cin >> cols;

    // Validate dimensions
    if (rows < 1 || rows > MAX_SIZE || cols < 1 || cols > MAX_SIZE) {
        cout << "Invalid dimensions! Please enter values between 1 and " << MAX_SIZE << "." << endl;
        return 1;
    }

    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], sumMatrix[MAX_SIZE][MAX_SIZE];

    // Input first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Compute sum of matrices
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display sum matrix
    cout << "Sum of the two matrices:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << sumMatrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
