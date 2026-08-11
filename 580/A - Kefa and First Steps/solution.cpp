#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    // Fast I/O for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int max_len = 1;
    int current_len = 1;
 
    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            current_len++;
        } else {
            current_len = 1; // Reset when sequence breaks
        }
        max_len = max(max_len, current_len);
    }
 
    cout << max_len << "
";
 
    return 0;
}