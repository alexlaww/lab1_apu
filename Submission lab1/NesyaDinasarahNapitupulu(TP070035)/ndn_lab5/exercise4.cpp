#include <iostream>
#include <cctype>
using namespace std;

const int NUM_QUESTIONS = 20;

// Function to validate input
char getAnswer(int num_q) {
    char ans;
    do {
        cout << "Enter answer for question " << num_q + 1 << " (A/B/C/D): ";
        cin >> ans;
        ans = toupper(ans);
        if (ans != 'A' && ans != 'B' && ans != 'C' && ans != 'D') {
            cout << "Invalid input. Please enter A, B, C, or D.\n";
        }
    } while (ans != 'A' && ans != 'B' && ans != 'C' && ans != 'D');
    return ans;
}

int main() {
    // Array of correct answers
    const char correct_ans[NUM_QUESTIONS] = {
        'B', 'D', 'A', 'A', 'C',
        'A', 'B', 'A', 'C', 'D',
        'B', 'C', 'D', 'A', 'D',
        'C', 'C', 'B', 'D', 'A'
    };

    char stu_ans[NUM_QUESTIONS];
    int i_correct = 0;

    // Input student answers
    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        stu_ans[i] = getAnswer(i);
        if (stu_ans[i] == correct_ans[i]) {
            ++i_correct;
        }
    }

    // Display results
    cout << "\nYou answered " << i_correct << " questions correctly.\n";
    if (i_correct >= 15) {
        cout << "Congratulations! You passed the exam.\n";
    } else {
        cout << "Sorry, you failed the exam.\n";
    }

    // Optionally display incorrect answers
    cout << "\nQuestions answered incorrectly:\n";
    bool anywrong = false;
    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        if (stu_ans[i] != correct_ans[i]) {
            anywrong = true;
            cout << "Question " << (i + 1)
                 << ": Your answer = " << stu_ans[i]
                 << ", Correct answer = " << correct_ans[i] << endl;
        }
    }
    if (!anywrong) {
        cout << "You got a perfect score!\n";
    }

    return 0;
}
