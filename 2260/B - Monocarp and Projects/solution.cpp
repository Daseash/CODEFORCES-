#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long x, y, k;
    cin >> x >> y >> k;
 
    long long d = y - x;
    long long total_sum = 0;
    long long i = 0;
 
    while (i < k) {
        long long current_x = x + i;
        
        if (current_x > d) {
            total_sum += (k - i) * d;
            break;
        }
 
        long long q = d / current_x;
        
        long long max_x = d / q;
        long long count = min(k - i, max_x - current_x + 1);
 
        long long start_val = current_x;
        long long end_val = current_x + count - 1;
        long long sum_range = (start_val + end_val) * count / 2;
 
        total_sum += count * d - q * sum_range;
        i += count;
    }
 
    cout << total_sum << "
";
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