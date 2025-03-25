#include <iostream>

using namespace std;

int main()
{
    int billy [] = {16 ,2, 77, 40, 12071, 51};
    int sum = 0; 
    int min = billy[0];
    int max = billy[0];

    for (int i = 0; i < 6; i++)
    {
        sum += billy[i];

        if (billy[i] < min)
        {
            min = billy[i];
        }

        if (billy[i] > max)
        {
            max = billy[i];
        }
    }

    cout << "Sum of given array: " << sum << endl;
    cout << "Minimum Value: " << min << endl;
    cout << "Maximum Value: " << max << endl;

    return 0;
}