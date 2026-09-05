#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    int cost = 0;
    // Iterate through the string in chunks of size k
    for (int i = 0; i < n; i += k) {
        bool has_zero = false;
        // Check fields in the current farm
        for (int j = 0; j < k; ++j) {
            if (s[i + j] == '0') {
                has_zero = true;
                break;
            }
        }
        // If all fields are '1', we must incur a cost
        if (!has_zero) {
            cost++;
        }
    }
    cout << cost << "
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