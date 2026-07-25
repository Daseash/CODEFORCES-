#include <iostream>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int x;
    cin >> x;
 
    // Minimum steps required using maximum step size of 5
    int steps = (x + 4) / 5;
 
    cout << steps << "
";
 
    return 0;
}