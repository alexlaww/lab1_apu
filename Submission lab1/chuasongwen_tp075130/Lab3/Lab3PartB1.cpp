# include <iostream>
using namespace std;

// string name;
// string tp;
// int quiz;
// int midTerm;
// int finalExam;
// int total;
// char grade;

// int* arr;

struct Student {
    string name;
    string tp;
    int quiz;
    int midTerm;
    int finalExam;
    int total;
    char grade;
};

Student students[5];

void InputStudent();
int ChangeQuizScoreToPercentage(int quiz);
int ChangeMidTermScoreToPercentage(int midTerm);
int ChangeFinalScoreToPercentage(int finalExam);
int CalculateTotal(int quiz, int midTerm, int finalExam);
char Check_Grade(int total);
void UpdateResult();
void PrintResult();
// int ChangeQuizScoreToPercentage();
// int ChangeMidTermScoreToPercentage();
// int ChangeFinalScoreToPercentage();
// int Total();
// char Check_Grade();
// void UpdateResult();
// void PrintResult();

int main(){
    // arr = new int[5][7];
    InputStudent();
    UpdateResult();
    PrintResult();
    return 0;
}

void InputStudent(){
    int i=0;
    while(i<5){
        
        // cout << "\n\nStudent Name: ";
        // cin >> name;
        // arr[i][0]=name;
        // cout << "\nStudent TP: ";        
        // cin >>tp;
        // arr[i][1]=tp;
        // cout << "\nQuiz Score: ";
        // cin >> quiz;
        // arr[i][2]=quiz;
        // cout << "\nMid Term Score: ";
        // cin >> midTerm;
        // arr[i][3]=midTerm;
        // cout << "\nFinal Exam Score: ";
        // cin >> finalExam;
        // arr[i][4]=finalExam;

        cout << "\n\nStudent " << (i+1) << ":" << endl;
        
        cout << "Student Name: ";
        cin >> students[i].name;
        
        cout << "Student TP: ";
        cin >> students[i].tp;
        
        cout << "Quiz Score (0-100): ";
        cin >> students[i].quiz;
        
        cout << "Mid Term Score (0-100): ";
        cin >> students[i].midTerm;
        
        cout << "Final Exam Score (0-100): ";
        cin >> students[i].finalExam;

        i++;
    }
}

int ChangeQuizScoreToPercentage(int quiz) {
    return quiz * 0.2;
}

int ChangeMidTermScoreToPercentage(int midTerm) {
    return midTerm * 0.5;
}

int ChangeFinalScoreToPercentage(int finalExam) {
    return finalExam * 0.3;
}

int CalculateTotal(int quiz, int midTerm, int finalExam) {
    int quizPercentage = ChangeQuizScoreToPercentage(quiz);
    int midTermPercentage = ChangeMidTermScoreToPercentage(midTerm);
    int finalExamPercentage = ChangeFinalScoreToPercentage(finalExam);
    return quizPercentage + midTermPercentage + finalExamPercentage;
}

char Check_Grade(int total) {
    if (total >= 90) {
        return 'A';
    } else if (total >= 70) {
        return 'B';
    } else if (total >= 50) {
        return 'C';
    } else {
        return 'F';
    }
}

void UpdateResult() {
    for (int i = 0; i < 5; i++) {
        students[i].total = CalculateTotal(students[i].quiz, students[i].midTerm, students[i].finalExam);
        students[i].grade = Check_Grade(students[i].total);
    }
}

void PrintResult() {
    cout << "\n\n================ STUDENT RESULTS ================\n";
    cout << "Name\tTP\tQuiz\tMidterm\tFinal\tTotal\tGrade\n";
    cout << "==================================================\n";
    
    for (int i = 0; i < 5; i++) {
        cout << students[i].name << "\t"
             << students[i].tp << "\t"
             << students[i].quiz << "\t"
             << students[i].midTerm << "\t"
             << students[i].finalExam << "\t"
             << students[i].total << "\t"
             << students[i].grade << "\n";
    }
    cout << "==================================================\n";
}

// int ChangeQuizScoreToPercentage(){
//     return quiz*0.2;
// }
// int ChangeMidTermScoreToPercentage(){
//     return midTerm*0.5;
// }
// int ChangeFinalScoreToPercentage(){
//     return finalExam*0.3;
// }

// int Total(){
//     quiz = ChangeQuizScoreToPercentage();
//     midTerm = ChangeMidTermScoreToPercentage();
//     finalExam = ChangeFinalScoreToPercentage();
//     return quiz + midTerm + finalExam;
// }
// char Check_Grade(){
//     total = Total();
//     if(total>=90){
//         return grade='A';
//     } else if(total>=70){
//         return grade='B';
//     } else if(total>=50){
//         return grade='C';
//     } else{
//         return grade='F';
//     }

// }

// void UpdateResult(){
//     int i = 0;
//     while(i<5){
        
//         arr[i][5] = Total();
//         arr[i][6] = Check_Grade();
//         i++;
//     }
// }

// void PrintResult(){
//     for(int i = 0; i < 5; i++){
//         for(int j =0; j < 7; j++){
//             cout << arr[i][j] << endl;
//         }
//     }
// }
