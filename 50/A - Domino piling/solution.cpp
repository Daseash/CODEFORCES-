#include <iostream>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int m, n;
    if (cin >> m >> n) {
        // Total area is M * N. Since each domino covers 2 squares,
        // integer division (m * n) / 2 gives the maximum dominoes.
        cout << (m * n) / 2 << "
";
    }
 
    return 0;
}