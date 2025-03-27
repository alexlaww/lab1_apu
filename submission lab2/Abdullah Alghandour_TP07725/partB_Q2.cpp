#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int answer;
    int min = 1, max = 100;

    cout << "Guess Number Game Started Now!" << endl;

    for (int i = 0; i < 30; i++)
    {
        cout << "-";
    }

    cout << endl;

    int randomNumber = (rand() % 100) + 1;

    while (true)
    {
        cout << "Guess Number between " << min << " to " << max << endl
             << "Your answer: ";

        cin >> answer;

        if (answer == randomNumber)
        {
            cout << "Congratulations! You won!";
            break;
        }
        else if (answer < randomNumber)
        {
            min = answer;
            cin.ignore();
        }
        else if (answer > randomNumber)
        {
            max = answer;
            cin.ignore();
        }
    }

    return 0;
}