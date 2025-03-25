#include <iostream>
using namespace std;

int main() {
    for (int i = 2; i <= 50; i += 2) {
        cout << i << " ";
        if (i % 10 == 0) cout << endl; // 每行 5 个数
    }
    return 0;
}
