#include<iostream>
using namespace std;

// Chapter3
void Activity1(){

    int billy[] = {16,2,77,40,12071,51};
    int sum = 0;
    int min = billy[0];
    int max = billy[0];

    for(int i=0 ; i<6 ; i++){

        sum = sum + billy[i];

        if(billy[i] < min){

            min = billy[i];
        }
        else if(billy[i] > max){

            max = billy[i];
        }
    }

    cout << "Sum of the array =" << sum << endl;
    cout << "Min values of the array =" << min << endl;
    cout << "Max values of th array = " << max << endl;
}

void Activity2(){

    int input[5];
    int sum = 0;
    string output;

    for(int i=0; i<5 ; i++){

        // endl -> end + line -> take place to move the cursor to the beginning of the next line like ('\n').
        cout << "Enter your number " << i + 1 << " :" ;
        cin >> input[i];
        sum = sum + input[i];

        //Append the number to the output string
        output = output + to_string(input[i]); // Convert int to string and append
        if(i<4) // Add '+' only if it's not the last number
        {
            output = output + '+';
        }

    }
    cout << output << '=' << sum << endl;
    
}

void Activity3(){

    int array[4][5] ={
                        {1,2,3,4,5},
                        {10,9,8,7,6},
                        {11,12,13,14,15},
                        {20,19,18,17,16}
                     };

    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<5 ; j++){
            cout << array[i][j] << " ";
        }
        cout <<'\n';
    }
}

void Activity4(){
    
    int rowsInput,columnInput;

    cout << "Enter the number of rows and columsn of matrix\nRows:";
    cin >> rowsInput;
    cout << "Columns:";
    cin >> columnInput;

    if(rowsInput <= 5 && columnInput <= 5){

        int matrixInput1[5][5];
        int matrixInput2[5][5];

        cout << "Enter the elements of first matrix: " << endl;

        for(int i=0; i<rowsInput ;i++){
            for(int j=0 ; j<columnInput ;j++){
                cout << "Element [" << i << "][" << j << "]: ";
                cin >> matrixInput1[i][j];
            }
        }

        cout << "Enter the elements of second matrix: " << endl;

        for(int a=0 ; a<rowsInput ;a++){
            for(int b=0 ; b<columnInput ;b++){
                cout << "Element [" << a << "][" << b << "]:";
                cin >> matrixInput2[a][b]; 
            }
        }

        int total_matrix[5][5];
        for(int c=0; c<5 ; c++){
            for(int d=0; d<5 ;d++){
                total_matrix[c][d] = matrixInput1[c][d] + matrixInput2[c][d]; 
            }
        }

        for(int m=0; m<rowsInput ;m++){
            for(int n=0 ;n<columnInput ;n++){
                cout << total_matrix[m][n] << " ";
            }
            cout << '\n';
        }
        
    }else{

        cout << "The maximum number of rows and columns is 5.";
    }
}

void array(int studentMarks[5]){
    for(int i=0 ; i<5 ; i++){
        cout << "Student" << i+1 << ":" << studentMarks[i] << "\n";
    }
}


int main(){

    // Activity1();
    // Activity2();
    // Activity3();
    // Activity4();
    int studentMarks[5] = {88,76,90,61,69};
    cout << "Displaying marks:";
    array(studentMarks);
    return 0;
}