#include <iostream>
#include <iomanip> // 用于格式化输出
using namespace std;

int main() {
    // 定义变量
    string name = "Mien May";
    string gender = "Female";
    int age = 23;
    string address = "Selangor";
    double ewallet = 23.12;

    // 输出学生信息
    cout << "Student Name       : " << name << endl;
    cout << "Student Gender     : " << gender << endl;
    cout << "Student Age        : " << age << endl;
    cout << "Student Home Address : " << address << endl;
    cout << "E-wallet Amount    : RM" << fixed << setprecision(2) << ewallet << endl;
    
    cout << "\nStudent details as below:\n";
    cout << "--------------------------------------------------------\n";
    cout << "| Name      | Age | Gender | Address  | E-wallet amount |\n";
    cout << "--------------------------------------------------------\n";
    cout << "| " << setw(9) << left << name << " | " 
         << setw(3) << age << " | " 
         << setw(6) << gender << " | " 
         << setw(8) << address << " | RM" 
         << fixed << setprecision(2) << ewallet << " |\n";
    cout << "--------------------------------------------------------\n";

    return 0;
}
