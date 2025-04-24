#include <iostream>
#include <iomanip>
using namespace std;

class Population {
    private:
    int pop;
    int births;
    int deaths;

    public:
    Population(int i_population, int i_births, int i_deaths) {
        set_population(i_population);
        set_births(i_births);
        set_deaths(i_deaths);
    }

    // Set population with validation
    void set_population(int population) {
        if (population < 1) {
            cout << "Population must be at least 1." << endl;
            pop = 1;
        }
        pop = population;
    }
    
    void set_births(double birth_count) {
        if (birth_count < 0) {
            cout << "Number of births cannot be negative.";
            births = 0;
        }
        births = birth_count;
    }

    void set_deaths(double death_count) {
        if (death_count < 0) {
            cout << "Number of deaths cannot be negative.";
            deaths = 0;
        }
        deaths = death_count;
    }

    int get_population() {
        return pop;
    }

    double get_birthrate() {
        return (static_cast<double>(births) / pop) * 100;
    }

    double get_deathrate() {
        return (static_cast<double>(deaths) / pop) * 100; 
    }

    void print_info() {
        cout << "Population: " << pop << endl;
        cout << "Births: " << births << endl;
        cout << "Deaths: " << deaths << endl;
        cout << "Birth Rate: " << fixed << setprecision(2) << get_birthrate() << "%" << endl;
        cout << "Death Rate: " << fixed << setprecision(2) << get_deathrate() << "%" << endl;
    }
};

int main() {
    int population, births, deaths;

    cout << "Enter population: ";
    cin >> population;

    cout << "Enter number of births: ";
    cin >> births;

    cout << "Enter number of deaths: ";
    cin >> deaths;

    Population Pop(population, births, deaths);

    Pop.print_info();
}