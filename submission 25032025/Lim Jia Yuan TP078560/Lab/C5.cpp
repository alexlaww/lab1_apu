#include <iostream>
using namespace std;

int main() 
{
    int count = 0;

    for (int i = 1; i <= 50; i++) 
    {
        if (i % 2 == 0) 
        {
            cout << i << "\t";  
            count++;

            if (count % 5 == 0)
            {
                cout << endl;
            }
        }
    }

    return 0;
}
