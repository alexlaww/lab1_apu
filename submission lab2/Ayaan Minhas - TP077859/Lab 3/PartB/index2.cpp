#include <iostream>
#include <vector>
#include <random>   // For modern C++ random number generation
#include <ctime>    // For seeding random numbers
#include <iomanip>  // For formatting output
#include <string>   // For labels

using namespace std;

// --- Function Prototypes ---
void generateRandomNumbers(vector<int>& numbers, int count);
void displayNumbers(const vector<int>& numbers);
void analyzeDistribution(const vector<int>& numbers, int counts[], int numRanges);
void drawStarGraph(int counts[], int numRanges);
void verifyGraph(const vector<int>& numbers);
void printStarsRow(int count); // Helper for drawStarGraph

int main() {
    int numRandoms;
    const int NUM_RANGES = 5; // 1-10, 11-20, 21-30, 31-40, 41-50

    // --- Get Input ---
    cout << "Enter how many random numbers you want to do an analysis? ";
    cin >> numRandoms;

    if (numRandoms <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    // --- Generate Random Numbers ---
    vector<int> randomNumbers;
    generateRandomNumbers(randomNumbers, numRandoms);

    // --- Display Generated Numbers ---
    displayNumbers(randomNumbers);

    // --- Analyze Distribution ---
    int counts[NUM_RANGES] = {0}; // Initialize counts for each range to zero
    analyzeDistribution(randomNumbers, counts, NUM_RANGES);

    // --- Draw Star Graph ---
    drawStarGraph(counts, NUM_RANGES);

    // --- Verify Graph ---
    verifyGraph(randomNumbers);


    return 0;
}

// --- Function Definitions ---

// Generates 'count' random numbers between 1 and 50
void generateRandomNumbers(vector<int>& numbers, int count) {
    // Use modern C++ random number generation
    mt19937 rng(static_cast<unsigned int>(time(0))); // Mersenne Twister engine seeded with time
    uniform_int_distribution<int> dist(1, 50);      // Distribution from 1 to 50 (inclusive)

    numbers.clear(); // Ensure vector is empty before filling
    numbers.reserve(count); // Optional: reserve space for efficiency
    for (int i = 0; i < count; ++i) {
        numbers.push_back(dist(rng));
    }
}

// Displays the numbers in a formatted way (e.g., 10 per line)
void displayNumbers(const vector<int>& numbers) {
    cout << "\nThe random numbers (between 1 - 50) as below:" << endl;
    const int NUM_PER_LINE = 10;
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout << setw(4) << numbers[i];
        if ((i + 1) % NUM_PER_LINE == 0 || i == numbers.size() - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
    cout << endl;
}

// Counts how many numbers fall into each range
void analyzeDistribution(const vector<int>& numbers, int counts[], int numRanges) {
    // Assumes numRanges is 5, corresponding to 1-10, 11-20, etc.
    for (int num : numbers) {
        if (num >= 1 && num <= 10) counts[0]++;
        else if (num >= 11 && num <= 20) counts[1]++;
        else if (num >= 21 && num <= 30) counts[2]++;
        else if (num >= 31 && num <= 40) counts[3]++;
        else if (num >= 41 && num <= 50) counts[4]++;
    }
}

// Draws the star graph similar to the previous lab's weather graph
void drawStarGraph(int counts[], int numRanges) {
    cout << "The analysis star design as below:" << endl;
    // Estimate a reasonable border length based on potential stars
    string border = "-------------------------------------------------------------------------"; // Adjust as needed

    cout << border << endl;
    // Header for the graph (optional, but makes it clearer)
    // cout << " Range   | Stars" << endl;
    // cout << border << endl;

    string labels[5] = {" 1 - 10", "11 - 20", "21 - 30", "31 - 40", "41 - 50"};

    for (int i = 0; i < numRanges; ++i) {
        cout << left << setw(7) << labels[i] << ": "; // Print range label
        printStarsRow(counts[i]);                    // Print the stars for this range
        cout << endl;
    }
     cout << border << endl;
}

// Helper function to print stars for drawStarGraph (can be simple or complex)
void printStarsRow(int count) {
    // Simple version: just print the stars
    for (int i = 0; i < count; ++i) {
        cout << "*";
    }
    // More complex version (like weather graph with spacing/pipes) could be added here
    // if that exact format is desired. For now, keeping it simple as per the
    // primary visual element in the sample (rows of stars per range).
}


// Displays numbers that fall into the 41-50 range for verification
void verifyGraph(const vector<int>& numbers) {
    cout << "\nTo verify the graph is correct: (display numbers of 41 - 50)" << endl;
    bool first = true;
    const int NUM_PER_LINE = 10;
    int count_on_line = 0;
    for (int num : numbers) {
        if (num >= 41 && num <= 50) {
            cout << setw(4) << num;
             count_on_line++;
             if(count_on_line % NUM_PER_LINE == 0) {
                cout << endl;
             } else {
                cout << " ";
             }
             first = false;
        }
    }
    // Add a final newline if the last line wasn't full and wasn't empty
    if (!first && count_on_line % NUM_PER_LINE != 0) {
        cout << endl;
    }
    if (first) { // Handle case where no numbers were in the range
        cout << "(No numbers found in the 41-50 range)" << endl;
    }
     cout << endl;
}