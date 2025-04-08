#include <iostream>
using namespace std;

int main() {
    float w1, h1, w2, h2, area1, area2;

    cout << "Enter width and height of Rectangle A: ";
    cin >> w1 >> h1;
    cout << "Enter width and height of Rectangle B: ";
    cin >> w2 >> h2;

    area1 = w1 * h1;
    area2 = w2 * h2;

    if (area1 > area2) cout << "Rectangle A has the greater area.\n";
    else if (area2 > area1) cout << "Rectangle B has the greater area.\n";
    else cout << "Both rectangles have the same area.\n";

    return 0;
}
