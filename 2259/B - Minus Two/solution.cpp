#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int odds = 0;
    int even0 = 0; // for x % 4 == 0
    int even2 = 0; // for x % 4 == 2
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        
        if (x % 2 != 0) {
            odds++;
        } else if (x % 4 == 0) {
            even0++;
        } else {
            even2++;
        }
    }
    
    // The maximum possible frequency is the largest of the 3 groups
    cout << max({odds, even0, even2}) << "
";
}
 
int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}