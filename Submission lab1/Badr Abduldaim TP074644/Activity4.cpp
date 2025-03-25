# include <iostream>
# include <sstream>
# include <iomanip>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int lowercaseeCount = 0;
    for (char c : input) {
        if (islower(c)) {
            lowercaseeCount++;
        }
    }

    cout << "Number of lowercase letters: " << lowercaseeCount << endl;
    return 0;
}