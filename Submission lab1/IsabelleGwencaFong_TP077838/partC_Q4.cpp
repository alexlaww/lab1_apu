#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows (for diamond (triangle) dimension) : ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        // Print spaces
        for (int j = i; j < rows; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = rows - 1; i >= 1; i--)
    {
        for (int j = rows; j > i; j--)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
