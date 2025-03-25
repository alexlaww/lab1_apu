#include <iostream>
using namespace std;

int main() 
{
    int rows;

    cout << "Enter number of rows (for diamond (triangle) dimension): ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) 
    {
        for (int j = i; j < rows; j++) 
        {
            cout << " ";
        }
        
        for (int k = 1; k <= (2 * i - 1); k++)
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
        
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

