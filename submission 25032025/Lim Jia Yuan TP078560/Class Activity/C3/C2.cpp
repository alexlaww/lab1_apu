#include <iostream>

using namespace std;

int main()
{
    int array[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter your number " << i + 1 << ":" ;
        cin >> array[i];
        sum += array[i];
    }

    cout << "The sum of the numbers is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i];

        if (i != 4)
        {
            cout << " + ";
        }
    }

    cout << " = " << sum << endl;

    return 0;
}