#include <iostream>
#include <algorithm>


void class1() {
    int minimum, maximum, total = 0;
    int stuff[3] = {1, 2, 3};
    int size = sizeof(stuff) / sizeof(stuff[0]);
    for (int i = 0; i < size; i++) {
        total += stuff[i];
        std::cout << stuff[i] << (i == size - 1 ? "" : " + ");
    }

    maximum = *std::max_element(stuff, stuff + size);
    minimum = *std::min_element(stuff, stuff + size);

    std::cout << " = " << total << "\nMaximum: " << maximum << "\nMinimum: " << minimum;
}


void class2() {
    int stuff[5];
    int size = sizeof(stuff) / sizeof(stuff[0]);
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter your number " << i + 1 << " : ";
        std::cin >> stuff[i];
    }
    
    for (int i = 0; i < size; i++) {
        total += stuff[i];
        std::cout << stuff[i] << (i == size - 1 ? "" : " + ");
    }

    std::cout << " = " << total;
}


void class3() {
    int stuff[4][5] = {
        {1, 2, 3, 4, 5},
        {10, 9, 8, 7, 6},
        {11, 12, 13, 14, 15},
        {20, 19, 18, 17, 16}    
    };

    int rows = sizeof(stuff) / sizeof(stuff[0]);
    int cols = sizeof(stuff[0]) / sizeof(stuff[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << stuff[i][j] << " ";
        }
        
        std::cout << "\n";
    }
    
}


void class4() {
    int row1, col1;
    
    std::cout << "Enter the number or rows and columns for matrix \n";
    std::cin >> row1;
    std::cin >> col1;
    
    int matrix1[row1][col1];
    int matrix2[row1][col1];
    int sum[row1][col1];

    std::cout << "Enter elements of first matrix\n";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            std::cin >> matrix1[i][j];   
        }
    }
    
    
    std::cout << "Enter elements of second matrix\n";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            std::cin >> matrix2[i][j];   
        }
    }


    std::cout << "Sum of entered matrices \n";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j]; 
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            std::cout << sum[i][j] << "\t";   
        }
        std::cout << "\n";
    }
}

int main() {
    //class1();
    //class2();
    //class3();
    class4();
}