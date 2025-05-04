#include <iostream>
using namespace std;

double calcAverage(double* scores, int numSub) {
    double sum = 0.0;
    for (int i = 0; i < numSub; ++i) {
        sum += scores[i];
    }
    return sum / numSub;
}

double findLowest(double* scores, int numSub) {
    double lowest = scores[0];
    for (int i = 1; i < numSub; ++i) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

int main() {
    int numSub;

    do {
        cout << "Enter the total number of subjects (non-negative): ";
        cin >> numSub;

        if (numSub < 0) {
            cout << "WARNING: Input should be a positive number!" << endl;
        }
    } while (numSub < 0);

    double* scores = new double[numSub];

    for (int i = 0; i < numSub; ++i) {
        cout << "Enter score for subject " << (i + 1) << ": ";
        cin >> scores[i];
    }

    double average = calcAverage(scores, numSub);
    double lowest = findLowest(scores, numSub);

    cout << "Average score: " << average << endl;
    cout << "Lowest score: " << lowest << endl;
}