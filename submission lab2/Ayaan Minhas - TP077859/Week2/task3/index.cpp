#include <iostream>
using namespace std;

main(){
    
    int x;
    string answer;
    
    cout << "Enter a number: ";
    cin >> x;
    cout << endl;

    if (x > 0 && x % 2 == 1) {
        answer = "true";
    } else {
        answer = "false";
    }
    cout << "Answer: " << answer << endl;

    return 0;
}