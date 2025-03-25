#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 == 1)
        {
            continue;
        }

        cout << i << "\t";

        if (i % 5 == 0)
        {
            cout << endl;
        }
    }

    return 0;
}
