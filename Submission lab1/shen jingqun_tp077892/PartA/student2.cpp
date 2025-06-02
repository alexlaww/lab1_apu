#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    // 变量定义
    string name = "Test";
    string gender = "Female";
    int age = 23;
    string address = "Selangor";
    double ewallet = 25.77;

    // 第一部分输出
    cout << "Student Name       : " << name << endl;
    cout << "Student Gender     : " << gender << endl;
    cout << "Student Age        : " << age << endl;
    cout << "Student Home Address : " << address << endl;
    cout << "E-wallet Amount    : RM" << fixed << setprecision(2) << ewallet << endl;

    // 等待用户输入
    system("pause");

    // 第二部分输出
    cout << "\n=========================================\n";
    cout << "        Student Details as below\n";
    cout << "=========================================\n";
    cout << "Name     : " << name << endl;
    cout << "Age      : " << age << endl;
    cout << "Gender   : " << gender << endl;
    cout << "Address  : " << address << endl;
    cout << "E-Wallet : RM" << fixed << setprecision(2) << ewallet << endl;
    cout << "=========================================\n";

    return 0;
}
