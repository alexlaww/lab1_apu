#include <iostream>

int main() {
    // Variables for rectangle A
    double widthA, heightA;
    
    // Variables for rectangle B
    double widthB, heightB;
    
    // Variables for areas
    double areaA, areaB;
    
    // Get dimensions for rectangle A
    std::cout << "Rectangle A:" << std::endl;
    std::cout << "Width = ";
    std::cin >> widthA;
    std::cout << "Height = ";
    std::cin >> heightA;
    
    // Get dimensions for rectangle B
    std::cout << "\nRectangle B:" << std::endl;
    std::cout << "Width = ";
    std::cin >> widthB;
    std::cout << "Height = ";
    std::cin >> heightB;
    
    // Calculate areas
    areaA = widthA * heightA;
    areaB = widthB * heightB;
    
    // Display the results
    std::cout << "\nRectangle A:" << std::endl;
    std::cout << "Width = " << widthA << std::endl;
    std::cout << "Height = " << heightA << std::endl;
    
    std::cout << "\nRectangle B:" << std::endl;
    std::cout << "Width = " << widthB << std::endl;
    std::cout << "Height = " << heightB << std::endl;
    
    // Compare the areas and display the result
    if (areaA > areaB) {
        std::cout << "\nArea in rectangle A is bigger than rectangle B." << std::endl;
    } else if (areaB > areaA) {
        std::cout << "\nArea in rectangle B is bigger than rectangle A." << std::endl;
    } else {
        std::cout << "\nBoth rectangles have the same area." << std::endl;
    }
    
    return 0;
}