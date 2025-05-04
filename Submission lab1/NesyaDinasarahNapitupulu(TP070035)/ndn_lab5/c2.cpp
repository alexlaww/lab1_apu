#include <iostream>
using namespace std;

double getLength(double length) {
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

double getWidth(double width) {
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}

double getArea(double length, double width, double area) {
    area = length * width;
    return area;
}

double displayData(double length, double width, double area) {
    cout << "Length of rectangle: " << length << endl;
    cout << "Width of rectangle: " << width << endl;
    cout << "Area of rectangle: " << area;
}

int main() {
    double length, width, area;

    length = getLength(length);
    width = getWidth(width);
    area = getArea(length, width, area);
    displayData(length, width, area);
}