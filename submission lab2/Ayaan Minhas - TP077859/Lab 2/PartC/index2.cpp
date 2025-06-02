#include <iostream>
#include <string>
#include <cctype>   // For tolower
#include <iomanip>  // For setw

using namespace std;

// Function Prototypes
bool processWeatherInput(char input, int& hot_days, int& rainy_days, int& cloudy_days);
void displayReport(const string& month_year, int hot, int rainy, int cloudy);
void printStars(int count); // Helper function to print stars for the graph

int main() {
    string month_year_str;
    char weather_input;
    int hot_days = 0;
    int rainy_days = 0;
    int cloudy_days = 0;
    int day_count = 1;
    bool keep_going = true;

    cout << "Enter Your Month (e.g. August 2019): ";
    getline(cin, month_year_str); // Read the whole line

    cout << "--- Enter Weather Forecast ---" << endl;

    while (keep_going) {
        cout << "Day " << day_count << ": Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, (\"E\" to end): ";
        cin >> weather_input;
        // Clear the input buffer completely after reading a single character
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        char lower_input = tolower(weather_input);

        if (lower_input == 'e') {
            keep_going = false; // Signal to stop loop
        } else if (processWeatherInput(lower_input, hot_days, rainy_days, cloudy_days)) {
            day_count++; // Increment day only if H/R/C was entered
        } else {
            cout << "Invalid input. Please enter H, R, C, or E." << endl;
            // Don't increment day_count for invalid input
        }
    }

    // Display the final report
    displayReport(month_year_str, hot_days, rainy_days, cloudy_days);

    // Keep console window open (optional)
    cout << "Press any key to continue . . .";
    cin.get();

    return 0;
}

// --- Function Definitions ---

// Processes weather input, updates counts, returns true if H/R/C
bool processWeatherInput(char input, int& hot_days, int& rainy_days, int& cloudy_days) {
    // Assumes input is already lowercase 'h', 'r', 'c' or other
    if (input == 'h') {
        hot_days++;
        return true;
    } else if (input == 'r') {
        rainy_days++;
        return true;
    } else if (input == 'c') {
        cloudy_days++;
        return true;
    }
    return false; // Not a valid weather input (could be 'e' or invalid char)
}

// Helper function to print stars aligned with header columns
void printStars(int count) {
    const int columnWidth = 20; // Width for 10 '* ' pairs
    const string separator = "| "; // 2 chars wide
    const int pipe1_pos = columnWidth; // Position after 10 stars
    const int pipe2_pos = pipe1_pos + separator.length() + columnWidth; // Position after 20 stars
    const int pipe3_pos = pipe2_pos + separator.length() + columnWidth; // Position after 30 stars
    const int padding31plus = 10; // Width for the "31+" column based on header
    const int final_pipe_pos = pipe3_pos + separator.length() + padding31plus; // Position for the last pipe

    int charsPrinted = 0;

    // Print stars with spacing ('* ')
    for (int i = 0; i < count; ++i) {
        // Stop printing stars if we would exceed the graph area (e.g., after 30 for this layout)
        if (charsPrinted + 2 > pipe3_pos + separator.length()) { // Check before printing next star pair
             // Optionally indicate more stars exist beyond the graph display limit
             if (i == 30) { // Print ellipsis exactly at the 31st position if needed
                cout << "..";
                charsPrinted += 2;
             }
            //break; // Or just stop printing stars that won't fit in first 3 cols
        }
        
        // Print the star and space only if it fits within the main graph area (before 31+)
        if (charsPrinted + 2 <= pipe3_pos + separator.length()) {
             cout << "* ";
             charsPrinted += 2;
        } else if (charsPrinted < pipe3_pos + separator.length()) {
            // Handle edge case: Print '*' if only one space left before 31+ section
             cout << "*"; 
             charsPrinted += 1;
        }


        // Check if we landed exactly on a pipe position after printing '* '
        // Add the separator only if it's needed (i.e., if more stars or padding will follow)
        if (charsPrinted == pipe1_pos && count > 10) {
            cout << separator;
            charsPrinted += separator.length();
        } else if (charsPrinted == pipe2_pos && count > 20) {
             cout << separator;
            charsPrinted += separator.length();
        } else if (charsPrinted == pipe3_pos && count > 30) {
             cout << separator;
            charsPrinted += separator.length();
        }
         // Break if we printed exactly the number of stars and landed on a pipe position
        if (i + 1 == count && (charsPrinted == pipe1_pos + separator.length() ||
                               charsPrinted == pipe2_pos + separator.length() ||
                               charsPrinted == pipe3_pos + separator.length())) {
            break;
        }
    }

    // Now, fill remaining space and add pipes up to the final pipe position

    // Pad and add pipe 1 if needed
    if (charsPrinted < pipe1_pos) {
        cout << string(pipe1_pos - charsPrinted, ' ');
        charsPrinted = pipe1_pos;
    }
    if (charsPrinted <= pipe1_pos) { // Add pipe 1 if exactly at pos or before (meaning we need padding)
        cout << separator;
        charsPrinted += separator.length();
    }

    // Pad and add pipe 2 if needed
    if (charsPrinted < pipe2_pos) {
        cout << string(pipe2_pos - charsPrinted, ' ');
        charsPrinted = pipe2_pos;
    }
     if (charsPrinted <= pipe2_pos) {
        cout << separator;
        charsPrinted += separator.length();
    }

    // Pad and add pipe 3 if needed
    if (charsPrinted < pipe3_pos) {
        cout << string(pipe3_pos - charsPrinted, ' ');
        charsPrinted = pipe3_pos;
    }
    if (charsPrinted <= pipe3_pos) {
        cout << separator;
        charsPrinted += separator.length();
    }

    // Add padding for the "31+" section
    if (charsPrinted < final_pipe_pos) {
        cout << string(final_pipe_pos - charsPrinted, ' ');
        charsPrinted = final_pipe_pos;
    }

    // Add the final pipe
    cout << "|";
}


// Displays the final report including the star graph
void displayReport(const string& month_year, int hot, int rainy, int cloudy) {
    cout << "\n--- Weather Summary for " << month_year << " ---" << endl;
    cout << "Number of hot days this month: " << hot << endl;
    cout << "Number of rainy days this month: " << rainy << endl;
    cout << "Number of cloudy days this month: " << cloudy << endl;

    // --- Display Star Graph ---
    cout << "\nSample of graph:" << endl;
    cout << "The analysis star design as below:" << endl;

    // Calculate border length: label(7) + graph area up to last pipe (77 from thought process) = 84
    string border = "------------------------------------------------------------------------------------"; // 84 dashes

    cout << border << endl;
    // Print the header accurately spaced
    cout << "     |        1 - 10       |      11 - 20        |        21 - 30       |      31+      |" << endl;
    cout << border << endl;

    // Print rows with aligned labels and stars
    cout << left << setw(7) << "Hot :" ;
    printStars(hot);
    cout << endl;

    cout << left << setw(7) << "Rainy:";
    printStars(rainy);
    cout << endl;

    cout << left << setw(7) << "Cloudy:";
    printStars(cloudy);
    cout << endl;

    cout << border << endl;
}