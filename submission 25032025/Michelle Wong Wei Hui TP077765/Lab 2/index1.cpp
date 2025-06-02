void add1() {
    cout << "Sum=" << num1 + num2 << endl;
}

int add2(int a, int b) {
    return a + b;
}

void add3(int a, int b){
    cout << "Sum=" << a+b << endl;
}

int add4(){
    return num1+num2;
}


int main() {
    // Input from user
    cout << "Enters two integers: ";
    cin >> num1 >> num2;

    // Function 1: without return without parameters
    add1();

    //Function 2: with return and parameters
    int result2 = add2(num1,num2);
    cout << "Sum=" << results2 <<endl;

    //Function 3: without return and without parameters
    add3(num1,num2);

    //Function 4: with return and without parameters
    int result4 = add4();
    cout << "Sum=" << result4 <<endl;

    return 0;
}