# include <iostream>
using namespace std;

bool validateAnswer();
void AnswerQues();
int CheckAnswer();
void FinalResult();

const int AnswerSize = 20;
const int Pass = 15;

char Answer[AnswerSize] = {
    'B', 'D', 'A', 'A', 'C',
    'A', 'B', 'A', 'C', 'D',
    'B', 'C', 'D', 'A', 'D',
    'C', 'C', 'B', 'D', 'A'
};
char Input[AnswerSize];

int main(){
    AnswerQues();
    CheckAnswer();
    FinalResult();
    return 0;
}

bool validateAnswer(char answer){
    return (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D');
}

void AnswerQues(){
    for(int count=0; count<AnswerSize; count++){
        char answer;
        do{
            cout << "Question " << count+1 << ", Enter your answer (A, B, C, D): ";
            cin >> answer;
            if(!validateAnswer(answer)){
                cout << "Invalid input. Please enter a letter (A, B, C, D).";
            }
            
        }while(!validateAnswer(answer));
        Input[count]=answer;
    }
}

int CheckAnswer(){
    int score = 0;

    const char *answerPtr = Answer;
    const char *inputPtr = Input;
    const char *endPtr = Answer + AnswerSize;

    //instead of array[], use pointer arithmetic
    for(endPtr; answerPtr<endPtr; answerPtr++, inputPtr++){
        if(*inputPtr == *answerPtr){
            score++;
        }
    }

    return score;
}

void FinalResult(){
    int score = CheckAnswer();
    if(score>Pass){
        cout << "You passed with a score of " << score << " out of " << AnswerSize;
    }else{
        cout << "You failed with a score of " << score << " out of " << AnswerSize;
    }
}