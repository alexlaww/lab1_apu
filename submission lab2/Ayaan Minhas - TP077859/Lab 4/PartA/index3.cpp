#include <iostream>
#include <string>

using namespace std;

// Population class definition (same as before)
class Population {
private:
    long population;
    int numBirths;
    int numDeaths;
public:
    Population() : population(1), numBirths(0), numDeaths(0) {}
    Population(long pop, int births, int deaths) {
        setPopulation(pop);
        setBirths(births);
        setDeaths(deaths);
    }
    void setPopulation(long pop) {
        if (pop < 1) {
            cout << "Error: Population must be 1 or greater. Setting to 1." << endl;
            population = 1;
        } else { population = pop; }
    }
    void setBirths(int births) {
        if (births < 0) {
            cout << "Error: Number of births cannot be negative. Setting to 0." << endl;
            numBirths = 0;
        } else { numBirths = births; }
    }
    void setDeaths(int deaths) {
         if (deaths < 0) {
            cout << "Error: Number of deaths cannot be negative. Setting to 0." << endl;
            numDeaths = 0;
        } else { numDeaths = deaths; }
    }
    long getPopulation() const { return population; }
    int getBirths() const { return numBirths; }
    int getDeaths() const { return numDeaths; }
    double getBirthRate() const {
        if (population == 0) return 0.0;
        return static_cast<double>(numBirths) / population;
    }
    double getDeathRate() const {
        if (population == 0) return 0.0;
        return static_cast<double>(numDeaths) / population;
    }
};

// Main function for testing 
int main() {
    long popInput;
    int birthsInput, deathsInput;

    cout << "Enter population: ";
    cin >> popInput;
    cout << "Enter annual births: ";
    cin >> birthsInput;
    cout << "Enter annual deaths: ";
    cin >> deathsInput;

    Population myTown(popInput, birthsInput, deathsInput);

    cout << "\n--- Population Data ---" << endl;
    cout << "Population: " << myTown.getPopulation() << endl;
    cout << "Births: " << myTown.getBirths() << endl;
    cout << "Deaths: " << myTown.getDeaths() << endl;
    cout << "Birth Rate: " << myTown.getBirthRate() << endl;
    cout << "Death Rate: " << myTown.getDeathRate() << endl;



    return 0;
}