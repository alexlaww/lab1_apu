const int MAX_STUDENTS = 10;

// void displayMarks(string names[], int marks[], int count) {
//     cout << "Displaying marks:\n";
//     for (int i = 0; i < count; ++i) {
//         cout << names[i] << ": " << marks[i] << endl;
//     }
// }

// int main() 
// {
//     int n;
//     string names[MAX_STUDENTS];
//     int marks[MAX_STUDENTS];

//     cout << "Enter number of students (max 10): ";
//     cin >> n;

//     cin.ignore(); // to clear newline before getline

//     for (int i = 0; i < n; ++i) 
//     {
//         cout << "Enter name for student " << i + 1 << ": ";
//         getline(cin, names[i]);

//         cout << "Enter mark for " << names[i] << ": ";
//         cin >> marks[i];
//         cin.ignore(); // prepare for next input
//     }

//     cout << endl;
//     displayMarks(names, marks, n);

//     return 0;
// }