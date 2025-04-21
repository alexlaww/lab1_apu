#include<iostream>
#include <iomanip>
#include <string>
using namespace std;

const int numStudents = 5;
const int numScores = 3;

int ChangeQuizScoreToPercentage(int score) {
    return (static_cast<double>(score) / 20) * 100;
}

int ChangeMidTermScoreToPercentage(int score) {
    return (static_cast<double>(score) / 50) * 100;
}

int ChangeFinalScoreToPercentage(int score) {
    return (static_cast<double>(score) / 30) * 100;
}

char Check_Grade(double average) {
    if (average >= 90) {
        return 'A';
    }
    else if (average >= 70 && average < 90) {
        return 'B';
    }
    else if (average >= 50 && average < 70) {
        return 'C';
    }
    else {
        return 'F';
    }
}

int main() {
    int scores[numStudents][numScores];
    double averages[numStudents]; 
    char grades[numStudents]; 
    string studentNames[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter student " << (i + 1) << "'s name: ";
        cin >> studentNames[i];

        cout << "Enter " << studentNames[i] << "'s quiz score: ";
        cin >> scores[i][0];
        cout << "Enter " << studentNames[i] << "'s mid-term score: ";
        cin >> scores[i][1];
        cout << "Enter " << studentNames[i] << "'s final exam score: ";
        cin >> scores[i][2];
    }

    int countA = 0, countB = 0;
    double highestAverage = 0, lowestAverage = 100;
    string highestScoringStudent, lowestScoringStudent;

    for (int i = 0; i < numStudents; i++) {
        double quizPercentage = ChangeQuizScoreToPercentage(scores[i][0]);
        double midTermPercentage = ChangeMidTermScoreToPercentage(scores[i][1]);
        double finalPercentage = ChangeFinalScoreToPercentage(scores[i][2]);

        averages[i] = (quizPercentage * 0.2) + (midTermPercentage * 0.5) + (finalPercentage * 0.3);
        grades[i] = Check_Grade(averages[i]);

        if (grades[i] == 'A') countA++;
        if (grades[i] == 'B') countB++;

        if (averages[i] > highestAverage) {
            highestAverage = averages[i];
            highestScoringStudent = studentNames[i];
        }
        if (averages[i] < lowestAverage) {
            lowestAverage = averages[i];
            lowestScoringStudent = studentNames[i];
        }
    }

    cout << fixed << setprecision(2);
    cout << "\nStudent Records:\n";
    cout << setw(15) << "Name" << setw(10) << "Quiz" << setw(10) << "Midterm" << setw(10) << "Final" << setw(10) << "Average (%)" << setw(10) << "Grade" << endl;

    for (int i = 0; i < numStudents; i++) {
        cout << setw(15) << studentNames[i]
             << setw(10) << scores[i][0]
             << setw(10) << scores[i][1]
             << setw(10) << scores[i][2]
             << setw(10) << averages[i] // Displaying average directly as it is calculated in percentage
             << setw(10) << grades[i] << endl;
    }

    cout << "\nHighest scoring student: " << highestScoringStudent << " with an average of " << highestAverage << "%" << endl;
    cout << "Lowest scoring student: " << lowestScoringStudent << " with an average of " << lowestAverage << "%" << endl;
    cout << "Total students with grade A: " << countA << endl;
    cout << "Total students with grade B: " << countB << endl;

}