#include <iostream>
using namespace std;

void reverseDisplayNumber(int number1, int number2);
int findTotalSumByNumberAndSum(int number1, int number2);

int main()
{
    int startValue, endValue;
    cout << "Enter start value: ";
    cin >> startValue;
    cout << "Enter end value: ";
    cin >> endValue;

    cout << "Reverse display of values: ";
    reverseDisplayNumber(startValue, endValue);
    
    int totalSum = findTotalSumByNumberAndSum(startValue, endValue);
    
    cout << "\nTotal sum of values: " << totalSum << endl;
    
    return 0;
}

void reverseDisplayNumber(int number1, int number2)
{
   if (number1 <= number2)
   {
       reverseDisplayNumber(number1 + 1, number2);
       cout << number1 << " ";
   }
}

int findTotalSumByNumberAndSum(int number1, int number2)
{
   if (number1 > number2)
       return 0;
   else
       return (number1 + findTotalSumByNumberAndSum(number1 + 1, number2));
}
