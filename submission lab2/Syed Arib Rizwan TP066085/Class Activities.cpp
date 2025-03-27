// Chapter 2

/*#include <iostream>   // Line 1

using namespace std;   // Line 2

const int NUMBER = 12;   // Line 3

int main()   // Line 4
{   
    int firstNum;   // Line 5
    int secondNum;   // Line 6

    firstNum = 18;   // Line 7
    cout << "Line 9: firstNum = " << firstNum   // Line 8
         << endl;   // Line 9

    cout << "Line 10: Enter an integer: ";   // Line 10
    cin >> secondNum;   // Line 11
    cout << endl;   // Line 12

    cout << "Line 13: secondNum = " << secondNum   // Line 13
         << endl;

    firstNum = firstNum + NUMBER + 2 * secondNum;   // Line 14

    cout << "Line 15: The new value of "   // Line 15
         << "firstNum = " << firstNum << endl;

    return 0;   // Line 16
}   // Line 17*/

/*#include <iostream>

using namespace std;

int main() {
    double feet, inches, centimeters;

    cout << "Enter length in feet: ";
    cin >> feet;
    cout << "Enter additional inches: ";
    cin >> inches;

    int totalInches = (feet * 12) + inches;

    centimeters = totalInches * 2.54;

    cout << "Equivalent length in centimeters: " << centimeters << " cm" << endl;

    return 0;
}*/

/*#include <iostream>  

using namespace std;  

int main() {  
    // 1. Assign 1 to x if y is greater than 0  
    int x, y;  
    cout << "Enter value for y: ";  
    cin >> y;  
    if (y > 0)  
        x = 1;  
    cout << "x = " << x << endl;  

    // 2. Increase score by 5 if it is between 80 and 90  
    double score;  
    cout << "Enter the score: ";  
    cin >> score;  
    if (score >= 80 && score <= 90)  
        score += 5;  
    cout << "Updated score: " << score << endl;  

    // 3. Print true if x is an odd number and positive  
    cout << "Enter a value for x: ";  
    cin >> x;  
    if (x > 0 && x % 2 != 0)  
        cout << "true" << endl;  
    else  
        cout << "false" << endl;  

    // 4. Print true if both x and y are positive  
    cout << "Enter values for x and y: ";  
    cin >> x >> y;  
    if (x > 0 && y > 0)  
        cout << "true" << endl;  
    else  
        cout << "false" << endl;  

    // 5. Use a conditional operator to set ticket to 1 if speed > 55, otherwise 0  
    int speed, ticket;  
    cout << "Enter speed: ";  
    cin >> speed;  
    ticket = (speed > 55) ? 1 : 0;  
    cout << "Ticket = " << ticket << endl;  

    return 0;  
}*/

/*#include <iostream>

using namespace std;

int main() {
    // Using while loop
    cout << "Using while loop:" << endl;
    int number = 100;
    while (number > 10) {
        cout << number << endl;
        number -= 5;
    }

    // Using for loop
    cout << "\nUsing for loop:" << endl;
    for (int number = 100; number > 10; number -= 5) {
        cout << number << endl;
    }

    // Using do...while loop
    cout << "\nUsing do...while loop:" << endl;
    number = 100;
    do {
        cout << number << endl;
        number -= 5;
    } while (number > 10);

    return 0;
}*/

/*#include <iostream>

#include <cctype>

using namespace std;

int main() {
    string input;
    int uppercaseCount = 0;

    // Prompt user for input
    cout << "Enter a string: ";
    getline(cin, input);

    // Count uppercase letters
    for (char ch : input) {
        if (isupper(ch)) {
            uppercaseCount++;
        }
    }

    // Display the result
    cout << "The number of uppercase letters is " << uppercaseCount << endl;

    return 0;
}*/

/*#include <iostream>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to print prime numbers in a given range
void printPrimeNumbers(int start, int end) {
    cout << "Prime numbers between " << start << " to " << end << ":\n";
    cout << "=============================================\n";

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    
    cout << "\n=============================================\n";
}

int main() {
    int start, end;

    // Taking user input
    cout << "Start value: ";
    cin >> start;
    cout << "End value: ";
    cin >> end;

    // Print prime numbers in the given range
    printPrimeNumbers(start, end);

    return 0;
}*/


// Chapter 3

/*#include <iostream>

using namespace std;

int main() {
    int billy[] = {16, 2, 77, 40, 12071, 51};
    int size = sizeof(billy) / sizeof(billy[0]);
    
    int sum = 0, minVal = billy[0], maxVal = billy[0];

    cout << "Summation process: ";
    
    for (int i = 0; i < size; i++) {
        sum += billy[i];

        // Print the summation process
        cout << billy[i];
        if (i != size - 1) cout << " + ";

        // Find the minimum and maximum values
        if (billy[i] < minVal) minVal = billy[i];
        if (billy[i] > maxVal) maxVal = billy[i];
    }

    cout << " = " << sum << endl;
    cout << "Minimum value: " << minVal << endl;
    cout << "Maximum value: " << maxVal << endl;

    return 0;
}*/

/*#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5; // Define the size of the array
    int numbers[SIZE], sum = 0;

    // Taking input from the user
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter your number " << i + 1 << " : ";
        cin >> numbers[i];
        sum += numbers[i]; // Calculate the sum
    }

    // Display the summation process
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i];
        if (i != SIZE - 1) cout << " + ";
    }
    cout << " = " << sum << endl;

    return 0;
}*/

/*#include <iostream>

using namespace std;

int main() {
    int rows = 4, cols = 5;
    int arr[4][5];
    int num = 1;

    // Filling the array with the required pattern
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) { // Left to right
            for (int j = 0; j < cols; j++) {
                arr[i][j] = num++;
            }
        } else { // Right to left
            for (int j = cols - 1; j >= 0; j--) {
                arr[i][j] = num++;
            }
        }
    }

    // Displaying the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}*/

/*#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    const int MAX_SIZE = 5;
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], sum[MAX_SIZE][MAX_SIZE];

    // Input for rows and columns with validation
    cout << "Enter the number of rows and columns of the matrices (max 5x5): ";
    cin >> rows >> cols;

    if (rows > MAX_SIZE || cols > MAX_SIZE || rows <= 0 || cols <= 0) {
        cout << "Invalid matrix size! Please enter values between 1 and 5." << endl;
        return 1;
    }

    // Input for first matrix
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input for second matrix
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Adding the matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the sum matrix
    cout << "Sum of entered matrices:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}*/

/*#include <iostream>

#include <string>

using namespace std;

// Function to display student marks
void displayMarks(string names[], int marks[], int n) {
    cout << "\nDisplaying marks:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << (i + 1) << " (" << names[i] << "): " << marks[i] << endl;
    }
}

int main() {
    const int MAX_STUDENTS = 10;  // Maximum students allowed
    int n;
    
    // Get the number of students
    cout << "Enter the number of students (max 10): ";
    cin >> n;

    // Validate input
    if (n > MAX_STUDENTS || n <= 0) {
        cout << "Invalid number of students! Enter between 1 and 10.\n";
        return 1;
    }

    string names[MAX_STUDENTS];
    int marks[MAX_STUDENTS];

    // Taking input for students' names and marks
    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << (i + 1) << ": ";
        cin >> names[i];
        cout << "Enter marks of " << names[i] << ": ";
        cin >> marks[i];
    }

    // Function call to display marks
    displayMarks(names, marks, n);

    return 0;
}*/