#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 5;
    int rows, cols;

    cout << "Enter the number of rows and columns of your matrix (Max 5): " << "\n";
    cin >> rows >> cols;

    if (rows > MAX_SIZE || cols > MAX_SIZE || rows <= 0 || cols <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }

    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], sum[MAX_SIZE][MAX_SIZE];

    cout << "Enter the elements of your first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the elements of your second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "Sum of the entered matrices:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
