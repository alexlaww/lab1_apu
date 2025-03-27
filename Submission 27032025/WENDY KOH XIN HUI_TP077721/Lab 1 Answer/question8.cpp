#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const double GST=0.06;//fix GST 6%

    double meal_cost,tip;

    cout<<"Enter the meal cost: ";
    cin>>meal_cost;

    cout<<"Tip (In Percentage): ";
    cin>>tip;

    //Calculate the formula
    double GSTamount=meal_cost*GST;
    double MealWithGST=meal_cost*GSTamount;
    double tipA=MealWithGST*(tip/100);
    double TotalA=MealWithGST+tipA;

    cout<<fixed<<setprecision(2);//2dp
    cout<<"\n The total cost of the meal BEFORE GST and tipping: "<<meal_cost<<endl;
    cout<<"\n The total cost of the meal AFTER GST: "<<MealWithGST<<endl;
    cout<<"\n The total cost of the meal AFTER GST and tipping: "<<TotalA<<endl;

    return 0;
}