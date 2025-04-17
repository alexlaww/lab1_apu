#include <iostream>
using namespace std;

class Population {
    private:
    int population;
    int num_of_births;
    int num_of_deaths;

    public:
    Population() {}

    void setPopulation(int population) {
        if (population < 1) {
            cout << "Invalid input!" << endl;
        }
        else {
            this->population = population;
        }
    }

    void setNumOfBirths(int num_of_births) {
        if (num_of_births < 0) {
            cout << "Invalid input!" << endl;
        }
        else {
            this->num_of_births = num_of_births;
        }
    }

    void setNumOfDeaths(int num_of_deaths) {
        if (num_of_births < 0) {
            cout << "Invalid input!" << endl;
        }
        else {
            this->num_of_deaths = num_of_deaths;
        }
    }

    double getBirthRate() {
        return num_of_births/population;
    }

    double getDeathRate() {
        return num_of_deaths/population;
    }
};