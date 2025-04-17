#include <iostream>

using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows (for diamond dimension): ";
    cin >> rows;

    if (rows < 1) {
        cout << "Invalid input! Number must be greater than 0.\n";
        return 0;
    }

    // 上半部分
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) cout << " ";  // 打印空格
        for (int j = 1; j <= (2 * i - 1); j++) cout << "*"; // 打印星号
        cout << endl;
    }

    // 下半部分
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = rows; j > i; j--) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) cout << "*";
        cout << endl;
    }

    return 0;
}
