#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    string s;
    cin >> n >> s;
 
    // Case 1: Already no palindromes possible
    if (n == 1) {
        cout << 1 << "
";
        return;
    }
    if (n == 2) {
        cout << (s[0] == s[1] ? 1 : 2) << "
";
        return;
    }
 
    // Check if the string is monochromatic (all 0s or all 1s)
    bool all_same = true;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[0]) {
            all_same = false;
            break;
        }
    }
    if (all_same) {
        cout << 1 << "
";
        return;
    }
 
    // Check if it matches the non-interlocking pattern: 0...01...1 or 1...10...0
    // This is equivalent to checking if the string changes character groups at most once.
    int transitions = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
            transitions++;
        }
    }
 
    if (transitions == 1) {
        // Forms like 000111 or 111000 can only be reduced to 01 or 10
        cout << 2 << "
";
    } else {
        // Any interlocking pattern (transitions >= 2) can be completely collapsed to 1
        cout << 1 << "
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}