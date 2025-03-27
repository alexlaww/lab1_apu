#include <iostream>
#include <sstream>
using namespace std;

bool isValidTime(int h, int m, int s) {
    return (h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60);
}

int main() {
    string input;
    int h, m, s;
    char c1, c2;

    while (true) {
        cout << "please enter your elapsed time (in hh:mm:ss format) = ";
        getline(cin, input);

        stringstream ss(input);
        if (ss >> h >> c1 >> m >> c2 >> s && c1 == ':' && c2 == ':' && isValidTime(h, m, s))
            break;

        cout << "invalid input!\n";
    }

    int elapsed_seconds = h * 3600 + m * 60 + s;
    cout << "elapsed time in seconds = " << elapsed_seconds << " seconds\n";

    return 0;
}