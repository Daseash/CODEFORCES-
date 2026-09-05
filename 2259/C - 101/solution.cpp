#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    int first_one = -1, last_one = -1;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        // 1. Find the first and last fixed '1's
        if (a[i] == 1) {
            if (first_one == -1) first_one = i;
            last_one = i;
        }
    }
    
    if (first_one != -1) {
        // 2. If there are fixed '1's, extend the boundaries outwards
        for (int i = 0; i < first_one; i++) {
            if (a[i] == -1) {
                a[i] = 1;
                break;
            }
        }
        for (int i = n - 1; i > last_one; i--) {
            if (a[i] == -1) {
                a[i] = 1;
                break;
            }
        }
    } else {
        // 3. If there are no fixed '1's, place '1's at the extremities
        for (int i = 0; i < n; i++) {
            if (a[i] == -1) {
                a[i] = 1;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == -1) {
                a[i] = 1;
                break;
            }
        }
    }
    
    // 4. Turn all other '-1's into '0's to keep the inside empty
    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            a[i] = 0;
        }
    }
    
    // Output the resulting array
    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "
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