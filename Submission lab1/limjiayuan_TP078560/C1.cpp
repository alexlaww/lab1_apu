#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string input;
    int count = 0;

    cout << "Enter a String: ";
    getline(cin, input); 

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] >= 'A' && input[i] <= 'Z')
        {
            count++;
        }
    }

    cout << "The number of uppercase letters is " << count << endl;

    return 0;
}
