#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    vector<long long> a(3);
    cin >> a[0] >> a[1] >> a[2];
    
    // Sort the three numbers to easily identify x, y, and z
    sort(a.begin(), a.end());
    
    // Initial range is z - x
    long long initial_range = a[2] - a[0];
    
    // Range after replacing z with x + y is exactly y
    long long range_after_op = a[1];
    
    // The answer is the minimum of the two possibilities
    cout << min(initial_range, range_after_op) << "
";
}
 
int main() {
    // Fast I/O
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