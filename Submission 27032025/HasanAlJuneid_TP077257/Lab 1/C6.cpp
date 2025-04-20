#include <iostream>
#include <string>
#include <sstream>

int main() {
    double quizScore, midtermScore, finalScore;
    double averageScore;
    char grade;
    std::string input;
    
    // Prompt the user for the three scores
    std::cout << "Enter 3 scores (quiz, mid-term, and final) vales separated by space:";
    std::getline(std::cin, input);
    
    // Parse the input string
    std::stringstream ss(input);
    ss >> quizScore >> midtermScore >> finalScore;
    
    // Calculate the average score
    averageScore = (quizScore + midtermScore + finalScore) / 3.0;
    
    // Determine the grade based on the average score
    if (averageScore >= 90.0) {
        grade = 'A';
    } else if (averageScore >= 70.0 && averageScore < 90.0) {
        grade = 'B';
    } else if (averageScore >= 50.0 && averageScore < 70.0) {
        grade = 'C';
    } else {
        grade = 'F';
    }
    
    // Display the grade
    std::cout << "Grade " << grade << std::endl;
    std::cout << "Press any key to continue . . . ";
    std::cin.get();
    
    return 0;
}