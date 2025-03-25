#include <iostream>

void classactivity1() {
    float feet, inches = 0;
    float cm = 0;
    std::cout << "How many feet: ";
    std::cin >> feet;
    std::cout << "How many inches: ";
    std::cin >> inches;

    inches += feet*12;
    cm += inches * 2.54;

    std::cout << "cm: " << cm << "\n";
}

void classactivity2() {
    // question 1
    int x, y = 0;
    std::cout << "insert y: ";
    std::cin >> y;

    if (y > 0)
    {
        x = 1;
    }

    std::cout << "x = " << x << "\n";

    // question 2

    double score;
    std::cout << "insert score: ";
    std::cin >> score;

    if (score > 80 && score < 90)
    {
        score += 5;
    }
    
    std::cout << "score = " << score << "\n";

    // question 3

    int x1; 

    std::cout << "enter x = ";
    std::cin >> x1;

    if (x1 % 2 == 0 && x1 > 0)
    {
        std::cout << "true \n";
    }

    // question 4
    
    int x2, y2 = 0;

    std::cout << "enter x = ";
    std::cin >> x2;
    std::cout << "enter y = ";
    std::cin >> y2;

    if (x > 0 && y > 0)
    {
        std::cout << "true \n";
    }

    // question 5 

    int speed, ticket = 0;

    std::cout << "enter speed = ";
    std::cin >> speed;

    if (speed > 55)
    {
        ticket = 1;
    }
    
    std::cout << "ticket is " << ticket;
    
}


int main() {
    //classactivity1();
    classactivity2();
}