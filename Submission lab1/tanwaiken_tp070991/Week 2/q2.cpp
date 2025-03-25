#include <iostream>
using namespace std;

int main() {
  int score;

  cout << "Give me the score please. \n";
  cin >> score;

  score = (score >= 80 && score <= 90) ? score += 5: score;

  cout << "The final score is: " << score;

  return 0;
}
