#include <iostream>
using namespace std;

class Population {
private:
    int population;
    int births;
    int deaths;

public:
    // Constructor with validation
    Population(int pop, int b, int d) {
        if (pop < 1 || b < 0 || d < 0) {
            cout << "Invalid input. Population must be >= 1 and births/deaths >= 0." << endl;
            population = 1;
            births = 0;
            deaths = 0;
        } else {
            population = pop;
            births = b;
            deaths = d;
        }
    }

    double getBirthRate() {
        return static_cast<double>(births) / population;
    }

    double getDeathRate() {
        return static_cast<double>(deaths) / population;
    }

    void displayRates() {
        cout << "Birth Rate: " << getBirthRate() << endl;
        cout << "Death Rate: " << getDeathRate() << endl;
    }
};

int main() {
    int pop, b, d;

    cout << "Enter total population (>= 1): ";
    cin >> pop;

    cout << "Enter number of births (>= 0): ";
    cin >> b;

    cout << "Enter number of deaths (>= 0): ";
    cin >> d;

    Population p(pop, b, d);
    p.displayRates();

    return 0;
}
