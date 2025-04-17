#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int NUM_STUDENTS = 5;
const int NUM_SCORES = 3;

// Function to convert quiz scores to percentages (out of 20 marks)
void ChangeQuizScoreToPercentage(double scores[][NUM_SCORES], double quizPercentages[]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        quizPercentages[i] = (scores[i][0] / 20.0) * 100;
    }
}

// Function to convert mid-term scores to percentages (out of 50 marks)
void ChangeMidTermScoreToPercentage(double scores[][NUM_SCORES], double midTermPercentages[]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        midTermPercentages[i] = (scores[i][1] / 50.0) * 100;
    }
}

// Function to convert final exam scores to percentages (out of 40 marks)
void ChangeFinalScoreToPercentage(double scores[][NUM_SCORES], double finalPercentages[]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        finalPercentages[i] = (scores[i][2] / 40.0) * 100;
    }
}

// Function to determine grade based on average score
char Check_Grade(double average) {
    if (average >= 90)
        return 'A';
    else if (average >= 70)
        return 'B';
    else if (average >= 50)
        return 'C';
    else
        return 'F';
}

// Main program
int main() {
    string studentNames[NUM_STUDENTS] = {"Tan Chi Yong", "Lim Jie Jing", "Jason Leong", "Monday Johnny", "Holiday James"};
    double scores[NUM_STUDENTS][NUM_SCORES] = {
        {14, 44, 27}, // Tan Chi Yong: quiz, mid-term, final scores
        {18, 33, 28}, // Lim Jie Jing
        {9, 28, 20},  // Jason Leong
        {4, 33, 14},  // Monday Johnny
        {11, 44, 37}  // Holiday James
    };

    double quizPercentages[NUM_STUDENTS], midTermPercentages[NUM_STUDENTS], finalPercentages[NUM_STUDENTS];
    double totalScores[NUM_STUDENTS];
    char grades[NUM_STUDENTS];

    // Convert scores to percentages
    ChangeQuizScoreToPercentage(scores, quizPercentages);
    ChangeMidTermScoreToPercentage(scores, midTermPercentages);
    ChangeFinalScoreToPercentage(scores, finalPercentages);

    // Calculate total scores and grades
    for (int i = 0; i < NUM_STUDENTS; i++) {
        totalScores[i] = (quizPercentages[i] + midTermPercentages[i] + finalPercentages[i]) / 3.0;
        grades[i] = Check_Grade(totalScores[i]);
    }

    // Display the student table
    cout << left << setw(15) << "Student Name" << setw(10) << "Quiz" << setw(15) << "Mid-Term" << setw(10) << "Final"
         << setw(10) << "Total" << setw(10) << "Grade" << endl;
    cout << string(65, '-') << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << left << setw(15) << studentNames[i]
             << setw(10) << fixed << setprecision(2) << quizPercentages[i]
             << setw(15) << fixed << setprecision(2) << midTermPercentages[i]
             << setw(10) << fixed << setprecision(2) << finalPercentages[i]
             << setw(10) << fixed << setprecision(2) << totalScores[i]
             << setw(10) << grades[i] << endl;
    }

    // Determine highest and lowest scoring students
    double highestScore = totalScores[0];
    double lowestScore = totalScores[0];
    string highestScorer = studentNames[0];
    string lowestScorer = studentNames[0];
    int gradeA_or_B_count = 0;

    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (totalScores[i] > highestScore) {
            highestScore = totalScores[i];
            highestScorer = studentNames[i];
        }
        if (totalScores[i] < lowestScore) {
            lowestScore = totalScores[i];
            lowestScorer = studentNames[i];
        }
        if (grades[i] == 'A' || grades[i] == 'B') {
            gradeA_or_B_count++;
        }
    }

    cout << "\nHighest Scoring Student: " << highestScorer << " with score " << highestScore << endl;
    cout << "Lowest Scoring Student: " << lowestScorer << " with score " << lowestScore << endl;
    cout << "Total students with grade A or B: " << gradeA_or_B_count << endl;

    return 0;
}