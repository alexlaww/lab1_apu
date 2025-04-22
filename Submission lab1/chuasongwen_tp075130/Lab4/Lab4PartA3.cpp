# include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Population{
    private:
    int population;
    int births;
    int deaths;
    string period;
    
    public:
    Population(int population, int births, int deaths, const string& period);

    double getBirthRate() const;
    double getDeathRate() const;
    double getGrowthRate() const;

    int getPopulation() const;
    int getBirths() const;
    int getDeaths() const;

    string getTimePeriod() const;

    void display() const;

};

int main(){
    int population, births, deaths;
    string period;

    do{
        cout << "Enter population (at least 1): ";
        cin >> population;

        if(population < 1){
            cout << "Population must be at least 1. Please try again." << endl;
        }
        
    }while(population < 1);

    do{
        cout << "Enter births (non-negative): ";
        cin >> births; 
        
        if(births < 0) {
             cout << "Births must be non-negative. Please try again." << endl; 
        }

    }while(births < 0);

    do{
        cout << "Enter deaths (non-negative): ";
        cin >> deaths;

        if(deaths < 0) {
             cout << "Deaths must be non-negative. Please try again." << endl;
        }

    }while(deaths < 0);

    cin.ignore();
    cout << "Enter time period (e.g., '2024', 'January 2024'): ";
    getline(cin, period);

    Population cityData(population, births, deaths, period);
    cityData.display();

    cout << "As comparison: " << endl;
    Population cityData2(10000, 500, 300, "January 2024");
    cityData2.display();

    return 0;
}

Population::Population(int population, int births, int deaths, const string& period) : population(population), births(births), deaths(deaths), period(period) {}

double Population::getBirthRate() const{
    return static_cast<double>(births) / population * 1000;
}

double Population::getDeathRate() const{
    return static_cast<double>(deaths) / population * 1000;
}

double Population::getGrowthRate() const{
    return getBirthRate() - getDeathRate();
}

int Population::getPopulation() const{
    return population; 
}

int Population::getBirths() const{
    return births;
}

int Population::getDeaths() const{
    return deaths;
}

string Population::getTimePeriod() const{
    return period;
}

void Population::display() const {
    cout << "Population Data for " << period << ":" << endl;
    cout << "Population: " << population << endl;
    cout << "Births: " << births << endl;
    cout << "Deaths: " << deaths << endl;
    cout << "Birth Rate: " << getBirthRate() << endl;
    cout << "Death Rate: " << getDeathRate() << endl;
    cout << "Growth Rate: " << getGrowthRate() << endl;
    cout << endl;

}
