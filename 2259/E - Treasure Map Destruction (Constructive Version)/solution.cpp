#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> b(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
 
    // Difference array to mark strictly forbidden zones
    vector<int> diff(n + 2, 0);
 
    for (int i = 1; i <= n; i++) {
        if (b[i] != -1) {
            int L = i - b[i] + 1;
            int R = i + b[i] - 1;
            
            // Constrain bounds to valid island indices
            L = max(1, L);
            R = min(n, R);
            
            // If the interval is valid, apply to difference array
            if (L <= R) {
                diff[L]++;
                diff[R + 1]--;
            }
        }
    }
 
    int current_sum = 0;
    string treasure_map_fin = "";
    
    // Construct the greedy solution: place a treasure wherever it's not forbidden
    for (int i = 1; i <= n; i++) {
        current_sum += diff[i];
        if (current_sum > 0) {
            treasure_map_fin += '0';
        } else {
            treasure_map_fin += '1';
        }
    }
 
    // Must contain at least one treasure
    bool has_treasure = false;
    for (int i = 0; i < n; i++) {
        if (treasure_map_fin[i] == '1') {
            has_treasure = true;
            break;
        }
    }
 
    if (!has_treasure) {
        cout << -1 << "
";
        return;
    }
 
    // Validate the exact distance requirements
    bool valid = true;
    for (int i = 1; i <= n; i++) {
        if (b[i] != -1) {
            bool ok = false;
            int p1 = i - b[i];
            int p2 = i + b[i];
 
            if (p1 >= 1 && p1 <= n && treasure_map_fin[p1 - 1] == '1') {
                ok = true;
            }
            if (p2 >= 1 && p2 <= n && treasure_map_fin[p2 - 1] == '1') {
                ok = true;
            }
 
            if (!ok) {
                valid = false;
                break;
            }
        }
    }
 
    if (valid) {
        cout << treasure_map_fin << "
";
    } else {
        cout << -1 << "
";
    }
}
 
int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}