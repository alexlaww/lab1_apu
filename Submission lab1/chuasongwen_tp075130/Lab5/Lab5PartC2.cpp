#include <iostream>
using namespace std;

void getLength(double* length);
void getWidth(double* width);
void getArea(double length, double width, double* area);
void displayData(const double* length, const double* width, const double* area);

int main() {
    double length, width, area;
    
    getLength(&length);
    getWidth(&width);
    getArea(length, width, &area);
    
    displayData(&length, &width, &area);
    
    return 0;
}

void getLength(double* length) {
    cout << "Enter the rectangle's length: ";
    cin >> *length;
}

void getWidth(double* width) {
    cout << "Enter the rectangle's width: ";
    cin >> *width;
}

void getArea(double length, double width, double* area) {
    *area = length * width;
}

void displayData(const double* length, const double* width, const double* area) {
    cout << "\nRectangle Data:" << endl;
    cout << "Length: " << *length << endl;
    cout << "Width: " << *width << endl;
    cout << "Area: " << *area << endl;
}