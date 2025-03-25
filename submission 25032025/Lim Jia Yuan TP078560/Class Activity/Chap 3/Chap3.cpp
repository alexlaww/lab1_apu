#include <iostream>

using namespace std;

//Class Activity 1:
// int main()
// {
//     int billy [] = {16 ,2, 77, 40, 12071, 51};
//     int sum = 0; 
//     int min = billy[0];
//     int max = billy[0];

//     for (int i = 0; i < 6; i++)
//     {
//         sum += billy[i];

//         if (billy[i] < min)
//         {
//             min = billy[i];
//         }

//         if (billy[i] > max)
//         {
//             max = billy[i];
//         }
//     }

//     cout << "Sum of given array: " << sum << endl;
//     cout << "Minimum Value: " << min << endl;
//     cout << "Maximum Value: " << max << endl;

//     return 0;
// }

//Class Activity 2:
// int main()
// {
//     int array[5];
//     int sum = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Enter your number " << i + 1 << ":" ;
//         cin >> array[i];
//         sum += array[i];
//     }

//     cout << "The sum of the numbers is: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << array[i];

//         if (i != 4)
//         {
//             cout << " + ";
//         }
//     }

//     cout << " = " << sum << endl;

//     return 0;
// }

//Class Activity 3:
// int main() 
// {
//     int array[4][5] = 
//     {
//         {1, 2, 3, 4, 5},
//         {10, 9, 8, 7, 6},
//         {11, 12, 13, 14, 15},
//         {20, 19, 18, 17, 16}
//     };

//     cout << "Output Sample:\n";
//     for (int i = 0; i < 4; i++) 
//     {
//         for (int j = 0; j < 5; j++) 
//         {
//             cout << array[i][j] << "\t";
//         }

//         cout << endl;
//     }

//     return 0;
// }

//Class Activity 4:
int main() 
{
    int row, col;
    int matrix1[5][5], matrix2[5][5], sum[5][5];

    cout << "Enter the number of rows and columns of matrix (max 5): ";
    cin >> row >> col;

    cout << "Enter the elements of first matrix:\n";
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            cin >> matrix1[i][j];

    cout << "Enter the elements of second matrix:\n";
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            cin >> matrix2[i][j];

    cout << "Sum of entered matrices:\n";
    for (int i = 0; i < row; ++i) 
    {
        for (int j = 0; j < col; ++j) 
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << sum[i][j] << "\t";
        }
        
        cout << endl;
    }

    return 0;
}