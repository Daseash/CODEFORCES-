#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int val;
    for (int r = 1; r <= 5; ++r) {
        for (int c = 1; c <= 5; ++c) {
            cin >> val;
            if (val == 1) {
                // Instantly found - print Manhattan distance to center (3,3)
                cout << abs(r - 3) + abs(c - 3) << "
";
                return 0;
            }
        }
    }
    return 0;
}