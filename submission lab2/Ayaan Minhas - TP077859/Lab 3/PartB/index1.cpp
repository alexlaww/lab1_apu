#include <iostream>
#include <string>
#include <vector>
#include <iomanip> // For formatting output
#include <limits>  // For numeric_limits (used in finding min/max)

using namespace std;

// --- Global Constants (or pass max scores to functions) ---
const double MAX_QUIZ_SCORE = 20.0;
const double MAX_MIDTERM_SCORE = 50.0;
const double MAX_FINAL_SCORE = 30.0;

// --- Weights for each component ---
const double QUIZ_WEIGHT = 20.0;
const double MIDTERM_WEIGHT = 50.0;
const double FINAL_WEIGHT = 30.0; // Adjusted to make total 100

// --- Function Prototypes ---
// Calculate contribution of each component to the final 100 marks
double CalculateQuizContribution(double rawQuizScore);
double CalculateMidtermContribution(double rawMidtermScore);
double CalculateFinalContribution(double rawFinalScore);

// Determine grade based on total score out of 100
char Check_Grade(double totalScore);

// --- Main Function ---
int main() {
    const int NUM_STUDENTS = 5;

    // --- Student Data (Parallel Arrays) ---
    string names[NUM_STUDENTS] = {
        "Tan Chi Yong", "Lim Jie Jing", "Jason Leong", "Monday Johnny", "Holiday James"
    };
    string tps[NUM_STUDENTS] = {
        "TP001234", "TP001235", "TP001236", "TP001237", "TP001238"
    };
    // Raw Scores [student][quiz, midterm, final]
    double rawScores[NUM_STUDENTS][3] = {
        {14, 44, 13.5}, // Tan Chi Yong (70% quiz = 14, 88% mid = 44, 45% final = 13.5) - Assuming input values were percentages
        {17.6, 33, 21}, // Lim Jie Jing (88% quiz = 17.6, 66% mid = 33, 70% final = 21)
        {9, 27.5, 19.8}, // Jason Leong (45% quiz = 9, 55% mid = 27.5, 66% final = 19.8)
        {4.4, 33, 10.2}, // Monday Johnny (22% quiz = 4.4, 66% mid = 33, 34% final = 10.2)
        {11, 44, 28.2}  // Holiday James (55% quiz = 11, 88% mid = 44, 94% final = 28.2)
        // Note: Interpreting the table values 70, 88, 45 etc. as percentages of the max raw score for that component.
        // E.g., Tan's Quiz: 70% of 20 = 14. Mid: 88% of 50 = 44. Final: 45% of 30 = 13.5
    };

    // --- Arrays for Calculated Results ---
    double totalScores[NUM_STUDENTS];
    char grades[NUM_STUDENTS];

    // --- Calculate Scores and Grades ---
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        double quizContrib = CalculateQuizContribution(rawScores[i][0]);
        double midtermContrib = CalculateMidtermContribution(rawScores[i][1]);
        double finalContrib = CalculateFinalContribution(rawScores[i][2]);

        totalScores[i] = quizContrib + midtermContrib + finalContrib;
        grades[i] = Check_Grade(totalScores[i]);
    }

    // --- Display Results Table ---
    cout << fixed << setprecision(1); // Format scores to 1 decimal place
    cout << "----------------------------------------------------------------------------------" << endl;
    cout << left << setw(18) << "Student Name" << " | "
         << left << setw(10) << "Student TP" << " | "
         << right << setw(8) << "Quiz" << " | "
         << right << setw(8) << "Mid Term" << " | "
         << right << setw(8) << "Final" << " | "
         << right << setw(10) << "Total (%)" << " | "
         << right << setw(5) << "Grade" << " |" << endl;
    cout << "----------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << left << setw(18) << names[i] << " | "
             << left << setw(10) << tps[i] << " | "
             << right << setw(8) << rawScores[i][0] << " | " // Display raw scores
             << right << setw(8) << rawScores[i][1] << " | "
             << right << setw(8) << rawScores[i][2] << " | "
             << right << setw(10) << totalScores[i] << " | "
             << right << setw(5) << grades[i] << " |" << endl;
    }
    cout << "----------------------------------------------------------------------------------" << endl << endl;


    // --- Find Highest and Lowest Scoring Student ---
    double maxScore = -1.0; // Initialize lower than any possible score
    double minScore = 101.0; // Initialize higher than any possible score
    int maxIndex = -1;
    int minIndex = -1;
    int countAB = 0; // Counter for A/B grades

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        if (totalScores[i] > maxScore) {
            maxScore = totalScores[i];
            maxIndex = i;
        }
        if (totalScores[i] < minScore) {
            minScore = totalScores[i];
            minIndex = i;
        }
        if (grades[i] == 'A' || grades[i] == 'B') {
            countAB++;
        }
    }

    // --- Display Summary Results ---
    cout << fixed << setprecision(1); // Ensure formatting for scores
    if (maxIndex != -1) {
        cout << "Highest Scoring Student: " << names[maxIndex] << " (" << maxScore << "%)" << endl;
    }
    if (minIndex != -1) {
        cout << "Lowest Scoring Student: " << names[minIndex] << " (" << minScore << "%)" << endl;
    }
    cout << "Total students scoring Grade A or B: " << countAB << endl;

    return 0;
}

// --- Function Definitions ---

// Calculate contribution based on weightage (Max raw score -> Weight %)
double CalculateQuizContribution(double rawQuizScore) {
    // Ensure score doesn't exceed max possible raw score
    if (rawQuizScore > MAX_QUIZ_SCORE) rawQuizScore = MAX_QUIZ_SCORE;
    if (rawQuizScore < 0) rawQuizScore = 0;
    return (rawQuizScore / MAX_QUIZ_SCORE) * QUIZ_WEIGHT;
}

double CalculateMidtermContribution(double rawMidtermScore) {
    if (rawMidtermScore > MAX_MIDTERM_SCORE) rawMidtermScore = MAX_MIDTERM_SCORE;
    if (rawMidtermScore < 0) rawMidtermScore = 0;
    return (rawMidtermScore / MAX_MIDTERM_SCORE) * MIDTERM_WEIGHT;
}

double CalculateFinalContribution(double rawFinalScore) {
    if (rawFinalScore > MAX_FINAL_SCORE) rawFinalScore = MAX_FINAL_SCORE;
    if (rawFinalScore < 0) rawFinalScore = 0;
    return (rawFinalScore / MAX_FINAL_SCORE) * FINAL_WEIGHT;
}

// Determine grade based on total percentage score
char Check_Grade(double totalScore) {
    if (totalScore >= 90.0) return 'A';
    if (totalScore >= 70.0) return 'B';
    if (totalScore >= 50.0) return 'C';
    return 'F';
}