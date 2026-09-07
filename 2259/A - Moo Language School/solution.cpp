#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    int ans = 0;
    // Iterate through each farm (chunk of size k)
    for (int i = 0; i < n; i += k) {
        bool all_ones = true;
        for (int j = 0; j < k; j++) {
            if (s[i + j] == '0') {
                all_ones = false;
                break;
            }
        }
        // If the whole farm is '1's, we have to build on Nhoj's land
        if (all_ones) {
            ans++;
        }
    }
    cout << ans << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}