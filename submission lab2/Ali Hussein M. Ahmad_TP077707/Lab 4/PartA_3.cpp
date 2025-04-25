#include <iostream>
#include <iomanip>
#include <stdexcept>

class Population{
    private:
    int population; // total population
    int births; // number of births
    int deaths; // number of deaths

    public:
    //constructor with input validation
    Population(int pop, int numBirths, int numDeaths);

    //Accessor methods
    int getPopulation() const;
    int getBirths() const;
    int getDeaths() const;

    //mutator methods with validation
    void setPopulation(int pop);
    void setBirths(int numBirths);
    void setDeaths(int numDeaths);

    //analysis methods
    double getBirthRate() const;
    double getDeathRate() const;
    double getGrowthRate() const; //additional feature calculate growth rate

    //display method
    void displayStatistics() const;
};

//Constructor
Population::Population(int pop, int numBirths, int numDeaths){
    //validate inputs before setting them 
    if(pop < 1){
        throw std::invalid_argument("population must be atleast 1");

    }
    if(numBirths < 0){
        throw std::invalid_argument("Number of births cannot be negative");

    }
    if(numDeaths < 0){
        throw std::invalid_argument("Number of deaths cannot be negative");
    }

    population = pop;
    births = numBirths;
    deaths = numDeaths;
}

//accessor methods
int Population::getPopulation() const{
    return population;

}

int Population::getBirths() const{
    return births;
}

int Population::getDeaths() const{
    return deaths;
}

//mutator methods with validation 
void Population::setPopulation(int pop){
    if(pop < 1){
        throw std::invalid_argument("Population must be atleast 1 ");

    }
    population = pop;
}

void Population::setBirths(int numBirths){
    if(numBirths < 0){
        throw std::invalid_argument("Number of births cannot be negative");

    }
    births = numBirths;
}

void Population::setDeaths(int numDeaths){
    if (numDeaths < 0) {
        throw std::invalid_argument("Number of deaths cannot be negative");

    }
    deaths = numDeaths;
}

//calculate birth rate
double Population::getBirthRate() const{
    return static_cast<double>(births) / population;

}
//calculate death rate
double Population::getDeathRate() const{
    return static_cast<double>(deaths) / population;
}

//Calculate growth rate (birth rate - death rate)
double Population::getGrowthRate()const{
    return getBirthRate() - getDeathRate();
}

//display statistics 
void Population::displayStatistics() const {
    std :: cout << std :: fixed << std :: setprecision(6);
    std:: cout << "Population Statistics:" << std :: endl;
    std::cout << "------------------------" << std::endl;
    std :: cout << "Population: " << population << std :: endl;
    std :: cout << "Births: " << births << std :: endl;
    std :: cout << "Deaths: " << deaths << std :: endl;
    std :: cout << "Birth Rate: " << getBirthRate() << std :: endl;
    std :: cout << "Death Rate: " << getDeathRate() << std :: endl;
    std :: cout << "Growth Rate: " << getGrowthRate() << std :: endl;
}

int main(){
    //variables for user input
    int popSize , birthCount, deathCount;

    //get input from user
    std::cout << "Enter the population size";
    std::cin >> popSize;

    std::cout <<"Enter the number of births";
    std::cin >> birthCount;

    std::cout << "Enter the number of deaths";
    std:: cin >> deathCount;

    try{
        //Create population object with user input
        Population cityData(popSize, birthCount, deathCount);

        // display the statistics
        cityData.displayStatistics();

        //example calculation like in the problem statement
        std::cout << "\nSample Caldculation :" << std::endl;
        std::cout << "Birth rate  = " << birthCount<< " / " << popSize << " = " << cityData.getBirthRate() << std::endl;
        std::cout << "Death rate = " << deathCount << " /" <<popSize << " = "<<cityData.getDeathRate() << std::endl;

    }
    catch(const std:: invalid_argument& e) {
        std:: cout << "Error :" << e.what() << std::endl;
        std::cout << "Please run the program again with valid input data." << std::endl;
        return 1;
    }
    return 0;

    }


