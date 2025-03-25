#include <iostream>
using namespace std;

int main() 
{
    int rows;
    cout << "Enter number of rows (for diamond(triangle) dimension): ";
    cin >> rows;
    cin.ignore();

    // Top half of the diamond
    for (int i = 1; i <= rows; i++) 
    {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) 
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

    // Bottom half of the diamond
    for (int i = rows - 1; i >= 1; i--) 
    {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) 
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