#include <iostream>

int main() {
    std::string input;
    int uppercase = 0;

    std::cout << "Enter a String: ";
    std::getline(std::cin, input);

    for(int i = 0; i < input.length(); i++)
    {
        if (std::isupper(input[i]))
        {
            ++uppercase;
        }
    }

    std::cout << "The number of uppercase letters is: " << uppercase;
}