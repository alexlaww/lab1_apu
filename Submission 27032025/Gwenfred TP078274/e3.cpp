#include <iostream>
#include <stdexcept> // For potential exception handling (optional)

class Population {
private:
    long population;
    long births;
    long deaths;

    // Helper to check validity of internal state for rate calculation
    bool isValidForRate() const {
        return population >= 1;
    }

public:
    // Constructor with validation
    Population(long pop = 1, long b = 0, long d = 0); // Default values

    // Setters with validation
    bool setPopulation(long pop);
    bool setBirths(long b);
    bool setDeaths(long d);

    // Getters for raw numbers
    long getPopulation() const;
    long getBirths() const;
    long getDeaths() const;

    // Getters for calculated rates
    double getBirthRate() const;
    double getDeathRate() const;
};

// Implementation of member functions

Population::Population(long pop, long b, long d) : population(1), births(0), deaths(0) { // Initialize safely first
    if (!setPopulation(pop)) {
        std::cerr << "Warning: Invalid initial population. Using default value 1." << std::endl;
    }
    if (!setBirths(b)) {
         std::cerr << "Warning: Invalid initial births. Using default value 0." << std::endl;
    }
    if (!setDeaths(d)) {
         std::cerr << "Warning: Invalid initial deaths. Using default value 0." << std::endl;
    }
}

bool Population::setPopulation(long pop) {
    if (pop >= 1) {
        population = pop;
        return true;
    } else {
        std::cerr << "Error: Population must be 1 or greater." << std::endl;
        // population = 1; // Optionally reset to a valid default
        return false;
    }
}

bool Population::setBirths(long b) {
    if (b >= 0) {
        births = b;
        return true;
    } else {
        std::cerr << "Error: Number of births cannot be negative." << std::endl;
        // births = 0; // Optionally reset to a valid default
        return false;
    }
}

bool Population::setDeaths(long d) {
    if (d >= 0) {
        deaths = d;
        return true;
    } else {
        std::cerr << "Error: Number of deaths cannot be negative." << std::endl;
        // deaths = 0; // Optionally reset to a valid default
        return false;
    }
}

long Population::getPopulation() const {
    return population;
}

long Population::getBirths() const {
    return births;
}

long Population::getDeaths() const {
    return deaths;
}


double Population::getBirthRate() const {
    if (isValidForRate()) {
        return static_cast<double>(births) / population;
    } else {
        std::cerr << "Error: Cannot calculate birth rate due to invalid population size." << std::endl;
        return -1.0; // Indicate error
        // Alternatively, could throw an exception:
        // throw std::runtime_error("Cannot calculate birth rate: Population is less than 1.");
    }
}

double Population::getDeathRate() const {
    if (isValidForRate()) {
        return static_cast<double>(deaths) / population;
    } else {
        std::cerr << "Error: Cannot calculate death rate due to invalid population size." << std::endl;
        return -1.0; // Indicate error
        // Alternatively, could throw an exception:
        // throw std::runtime_error("Cannot calculate death rate: Population is less than 1.");
    }
}


// Example Usage (Optional)
int main() {
    Population cityA(100000, 8000, 6000); // Use constructor

    std::cout << "City A:" << std::endl;
    std::cout << "Population: " << cityA.getPopulation() << std::endl;
    std::cout << "Births: " << cityA.getBirths() << std::endl;
    std::cout << "Deaths: " << cityA.getDeaths() << std::endl;
    std::cout << "Birth Rate: " << cityA.getBirthRate() << std::endl; // Should be 0.08
    std::cout << "Death Rate: " << cityA.getDeathRate() << std::endl; // Should be 0.06

    std::cout << "\nAttempting invalid updates:" << std::endl;
    cityA.setPopulation(0); // Error
    cityA.setBirths(-100);  // Error
    cityA.setDeaths(-50);   // Error

    // Rates should now indicate error if calculated
    std::cout << "Birth Rate after invalid pop: " << cityA.getBirthRate() << std::endl;
    std::cout << "Death Rate after invalid pop: " << cityA.getDeathRate() << std::endl;

    // Create with invalid constructor args
    std::cout << "\nCreating City B with invalid initial pop:" << std::endl;
    Population cityB(0, 50, 20); // Should trigger warnings and use defaults
    std::cout << "City B Population: " << cityB.getPopulation() << std::endl; // Should be 1
    std::cout << "City B Birth Rate: " << cityB.getBirthRate() << std::endl;
    std::cout << "City B Death Rate: " << cityB.getDeathRate() << std::endl;


    return 0;
}
// To run this specific example, you would call main_e3() from your actual main function
// or rename main_e3 to main.