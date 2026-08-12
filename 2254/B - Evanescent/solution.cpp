#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    // Helper lambda or function logic to get compressed length of any string
    auto get_len = [&](const string& str) {
        int len = 1;
        for (size_t i = 1; i < str.length(); i++) {
            if (str[i] != str[i - 1]) {
                len++;
            }
        }
        return len;
    };
 
    int base_len = get_len(s);
    int min_len = base_len;
 
    // We can test deleting each character from index 1 to n - 2.
    // To ensure 100% correctness without missing edge boundary shifts:
    for (int i = 1; i < n - 1; i++) {
        // Check the contribution of the neighbors around i
        // Instead of a full O(N) string copy inside the loop which could TLE,
        // we can check local changes:
        int current_drop = 0;
        
        if (s[i - 1] == s[i + 1]) {
            if (s[i] != s[i - 1]) {
                // If s[i] is different, removing it merges two identical characters.
                // Does it reduce length by 2? Only if they form a single block when merged.
                current_drop = 2;
            }
        } else {
            if (s[i] == s[i - 1] || s[i] == s[i + 1]) {
                // Removing a duplicate next to a different character reduces length by 1
                current_drop = 1;
            }
        }
        
        // Let's refine the exact drop by checking the local segment:
        // A safer O(1) local check for adjacent pairs (i-1, i) and (i, i+1):
        int before_pairs = (s[i] != s[i - 1]) + (s[i + 1] != s[i]);
        // After removing s[i], the new pair is (i-1, i+1)
        int after_pair = (s[i + 1] != s[i - 1]);
        
        int drop = before_pairs - after_pair;
        min_len = min(min_len, base_len - drop);
    }
 
    cout << min_len << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if ((cin >> t)) {
        while ((t--)) {
            solve();
        }
    }
    return 0;
}