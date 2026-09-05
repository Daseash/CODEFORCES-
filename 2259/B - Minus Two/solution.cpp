#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int c_odd = 0, c_0 = 0, c_2 = 0;
    
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        
        // Classify each number into one of the 3 buckets
        if (val % 2 != 0) {
            c_odd++;
        } else if (val % 4 == 0) {
            c_0++;
        } else {
            c_2++;
        }
    }
    
    // The answer is the size of the largest bucket
    cout << max({c_odd, c_0, c_2}) << "
";
}
 
int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}