#include <iostream>
#include <string>
using namespace std;

const int NUM_STUDENTS = 5;

// Structure to hold student info
struct Student {
    string name;
    string tp;
    int quizScore;
    int midtermScore;
    int finalScore;
    double totalPercentage;
    char grade;
};

// Function declarations
double ChangeQuizScoreToPercentage(int quizScore);
double ChangeMidTermScoreToPercentage(int midtermScore);
double ChangeFinalScoreToPercentage(int finalScore);
char Check_Grade(double totalPercentage);

int main() {
    Student students[NUM_STUDENTS] = {
        {"Tan Chi Yong", "TP001234", 70, 88, 45},
        {"Lim Jie Jing", "TP001235", 88, 66, 70},
        {"Jason Leong", "TP001236", 45, 55, 66},
        {"Monday Johnny", "TP001237", 22, 66, 34},
        {"Holiday James", "TP001238", 55, 88, 94}
    };

    double highestScore = 0;
    double lowestScore = 100;
    int highestIndex = 0;
    int lowestIndex = 0;
    int gradeACount = 0, gradeBCount = 0;

    // Calculate percentages and grades
    for (int i = 0; i < NUM_STUDENTS; i++) {
        double quizPercent = ChangeQuizScoreToPercentage(students[i].quizScore);
        double midtermPercent = ChangeMidTermScoreToPercentage(students[i].midtermScore);
        double finalPercent = ChangeFinalScoreToPercentage(students[i].finalScore);

        students[i].totalPercentage = quizPercent + midtermPercent + finalPercent;
        students[i].grade = Check_Grade(students[i].totalPercentage);

        if (students[i].totalPercentage > highestScore) {
            highestScore = students[i].totalPercentage;
            highestIndex = i;
        }

        if (students[i].totalPercentage < lowestScore) {
            lowestScore = students[i].totalPercentage;
            lowestIndex = i;
        }

        if (students[i].grade == 'A') gradeACount++;
        if (students[i].grade == 'B') gradeBCount++;
    }

    // Display table
    cout << "Name\t\t\tTP\t\tQuiz\tMidterm\tFinal\tTotal\tGrade\n";
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << students[i].name << "\t"
             << students[i].tp << "\t"
             << students[i].quizScore << "\t"
             << students[i].midtermScore << "\t"
             << students[i].finalScore << "\t"
             << students[i].totalPercentage << "\t"
             << students[i].grade << endl;
    }

    cout << "\nHighest scoring student: " << students[highestIndex].name << " (" << students[highestIndex].totalPercentage << "%)\n";
    cout << "Lowest scoring student: " << students[lowestIndex].name << " (" << students[lowestIndex].totalPercentage << "%)\n";
    cout << "Total students with grade A: " << gradeACount << endl;
    cout << "Total students with grade B: " << gradeBCount << endl;

    return 0;
}

// Convert quiz score out of 20
double ChangeQuizScoreToPercentage(int quizScore) {
    return (quizScore / 100.0) * 20;
}

// Convert midterm score out of 50
double ChangeMidTermScoreToPercentage(int midtermScore) {
    return (midtermScore / 100.0) * 50;
}

// Convert final exam score out of 30
double ChangeFinalScoreToPercentage(int finalScore) {
    return (finalScore / 100.0) * 30;
}

// Determine grade based on total percentage
char Check_Grade(double totalPercentage) {
    if (totalPercentage >= 90) return 'A';
    else if (totalPercentage >= 70) return 'B';
    else if (totalPercentage >= 50) return 'C';
    else return 'F';
}
