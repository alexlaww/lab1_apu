#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int STUDENTS = 5;
const int COMPONENTS = 3; // Quiz, Midterm, Final
const int FULL_SCORE = 100;

// Functions
void ChangeQuizScoreToPercentage(float scores[STUDENTS][COMPONENTS]);
void ChangeMidTermScoreToPercentage(float scores[STUDENTS][COMPONENTS]);
void ChangeFinalScoreToPercentage(float scores[STUDENTS][COMPONENTS]);
char Check_Grade(float totalScore);

int main() {
    string names[STUDENTS] = {"Tan Chi Yong", "Lim Jie Jing", "Jason Leong", "Monday Johnny", "Holiday James"};
    string tps[STUDENTS] = {"TP001234", "TP001235", "TP001236", "TP001237", "TP001238"};

    // Scores: [Quiz (20), Midterm (50), Final (30)]
    float scores[STUDENTS][COMPONENTS] = {
        {70, 88, 45},
        {88, 66, 70},
        {45, 55, 66},
        {22, 66, 34},
        {55, 88, 94}
    };

    float total[STUDENTS];
    char grades[STUDENTS];

    // Convert raw scores to percentage contribution
    ChangeQuizScoreToPercentage(scores);
    ChangeMidTermScoreToPercentage(scores);
    ChangeFinalScoreToPercentage(scores);

    // Calculate total and grades
    for (int i = 0; i < STUDENTS; i++) {
        total[i] = scores[i][0] + scores[i][1] + scores[i][2];
        grades[i] = Check_Grade(total[i]);
    }

    // Output table
    cout << left << setw(18) << "Student Name" << setw(12) << "Student TP" 
         << setw(10) << "Quiz" << setw(10) << "Midterm" << setw(10) << "Final" 
         << setw(14) << "Total Score" << "Grade" << endl;
    cout << string(70, '-') << endl;

    for (int i = 0; i < STUDENTS; i++) {
        cout << left << setw(18) << names[i] << setw(12) << tps[i]
             << setw(10) << fixed << setprecision(1) << scores[i][0]
             << setw(10) << scores[i][1]
             << setw(10) << scores[i][2]
             << setw(14) << total[i]
             << grades[i] << endl;
    }

    // Find highest, lowest, and A/B count
    float maxScore = total[0], minScore = total[0];
    int maxIndex = 0, minIndex = 0, ABcount = 0;

    for (int i = 1; i < STUDENTS; i++) {
        if (total[i] > maxScore) {
            maxScore = total[i];
            maxIndex = i;
        }
        if (total[i] < minScore) {
            minScore = total[i];
            minIndex = i;
        }
        if (grades[i] == 'A' || grades[i] == 'B')
            ABcount++;
    }

    cout << "\nHighest scoring student: " << names[maxIndex] << " (" << maxScore << ")\n";
    cout << "Lowest scoring student : " << names[minIndex] << " (" << minScore << ")\n";
    cout << "Total students scoring A or B: " << ABcount << endl;

    return 0;
}

// Convert quiz out of 20 to 20% contribution
void ChangeQuizScoreToPercentage(float scores[STUDENTS][COMPONENTS]) {
    for (int i = 0; i < STUDENTS; i++) {
        scores[i][0] = (scores[i][0] / 100) * 20;
    }
}

// Convert midterm out of 50 to 50% contribution
void ChangeMidTermScoreToPercentage(float scores[STUDENTS][COMPONENTS]) {
    for (int i = 0; i < STUDENTS; i++) {
        scores[i][1] = (scores[i][1] / 100) * 50;
    }
}

// Convert final out of 30 to 30% contribution
void ChangeFinalScoreToPercentage(float scores[STUDENTS][COMPONENTS]) {
    for (int i = 0; i < STUDENTS; i++) {
        scores[i][2] = (scores[i][2] / 100) * 30;
    }
}

// Return grade based on total score
char Check_Grade(float totalScore) {
    if (totalScore >= 90)
        return 'A';
    else if (totalScore >= 70)
        return 'B';
    else if (totalScore >= 50)
        return 'C';
    else
        return 'F';
}
