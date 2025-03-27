// #include <iostream>
// #include <iomanip>

// int main(){
//     //Define the student details
//     std::string name = "Amal";
//     std::string gender = "Male";
//     int age = 23;
//     std::string address = "Selangor";
//     double eWalletAmount = 23.12;

//     // Print the first part of the output
//     std::cout << "Student Name              : "<< name << std::endl;
//     std::cout << "Student Gender            : "<< gender << std::endl;
//     std::cout << "Student Age               : "<< age <<std::endl;
//     std::cout << "Student Home Address      : "<< address <<std::endl;
//     std::cout << "E-Wallet Amount           : "<< std::fixed << std::setprecision(2) << eWalletAmount << std::endl;

//     //Print table header
//     std::cout << "\nStudent details as below\n";
//     std::cout << "------------------------------------------------------\n";
//     std::cout << "|Name     | Age | Gender | Address | E-wallet amount |\n";
//     std::cout << "------------------------------------------------------\n";

//     // Print student details in table format
//     std::cout << "| " << std::left << std::setw(10) << name
//               << "| " << std::setw(3) << age
//               << "| " << std::setw(7) << gender
//               << "| " << std::setw(9) << address
//               << "| RM" << std::setw(10) << std::fixed << std::setprecision(2) << eWalletAmount << " |\n";

//     std::cout << "------------------------------------------------------\n";
// }



// #include <iostream>
// #include <cctype>

// int main(){
//     std::string input;
//     int capitalCount = 0;

//     std::cout << "Enter a string: ";
//     std::getline(std::cin, input);

//     for(char ch : input){
//         if(std::isupper(ch)){
//             capitalCount++;
//         }
//     }

//     std::cout << "Number of capital letters: " << capitalCount << std::endl;

//     return 0;
// }