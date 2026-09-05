#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    // pos[x] will store the indices where element x appears.
    // We only care about elements up to n+1.
    vector<vector<int>> pos(n + 2);
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        if (val <= n + 1) {
            pos[val].push_back(i);
        }
    }
 
    if (pos[0].empty()) {
        cout << "YES
";
        cout << string(n, 'A') << "
";
        return;
    }
    if (pos[0].size() == 1) {
        cout << "NO
";
        return;
    }
 
    cout << "YES
";
    string ans(n, 'C'); // Default all assignments to 'C'
    int targets = (pos[0].size() >= 3) ? 3 : 2;
 
    for (int x = 0; x <= n + 1; x++) {
        int cx = pos[x].size();
        
        if (targets == 3) {
            if (cx >= 3) {
                ans[pos[x][0]] = 'A';
                ans[pos[x][1]] = 'B';
                // ans[pos[x][2]] is already 'C'
                for (int i = 3; i < cx; i++) {
                    ans[pos[x][i]] = 'A'; // Distribute excess to A
                }
            } else if (cx == 2) {
                ans[pos[x][0]] = 'A';
                ans[pos[x][1]] = 'B';
                targets = 2; // C is left behind, only A and B continue
            } else if (cx == 1) {
                ans[pos[x][0]] = 'A';
                targets = 0; // Stop growing entirely
            } else {
                targets = 0;
            }
        } else if (targets == 2) {
            if (cx >= 2) {
                ans[pos[x][0]] = 'A';
                ans[pos[x][1]] = 'B';
            } else {
                // If cx == 1, it naturally gets assigned to 'C', stopping A and B
                targets = 0;
            }
        } else {
            break; // Stop processing, all remaining default to 'C'
        }
    }
    
    cout << ans << "
";
}
 
int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}