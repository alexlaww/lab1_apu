//b2
#include <iostream>
using namespace std;
#include <ctime>

int main()
{   srand(time(0));
    /* code */
    cout << "Guess number game started now" << endl;
    cout << string(80, '=') << endl;

    int min =0;
    int max = 100;
    int randNum = rand() % (max+1);
    

    int ans = -1;

    while (ans != randNum){
        cout << "Guess number between " << min << " and " << max << endl;
        cout << "Your answer: ";
        cin >> ans;
        if (ans < randNum){
            min = ans;
        }else if (ans > randNum){
            max = ans;
        }
    }
    cout << endl << "Congratulation! You won!";

    return 0;
}



