#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int max_len = 1;
    int left = 0;
 
    // Use two pointers: `left` marks the start of the non-decreasing segment,
    // `right` expands the window.
    for (int right = 1; right < n; right++) {
        if (a[right] < a[right - 1]) {
            // Sequence broke, reset left pointer to current position
            left = right;
        }
        max_len = max(max_len, right - left + 1);
    }
 
    cout << max_len << "
";
 
    return 0;
}