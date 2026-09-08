#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long x, y, k;
    cin >> x >> y >> k;
 
    long long d = y - x;
    long long totalsum = 0;
    long long i = 0;
 
    while (i < k) {
        long long currentx = x + i;
        
        if (currentx > d) {
            totalsum += (k - i) * d;
            break;
        }
 
        long long q = d / currentx;
        
        long long maxx = d / q;
        long long count = min(k - i, maxx - currentx + 1);
 
        long long startval = currentx;
        long long endval = currentx + count - 1;
        long long sumrange = (startval + endval) * count / 2;
 
        totalsum += count * d - q * sumrange;
        i += count;
    }
 
    cout << totalsum << "
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