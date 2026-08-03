#include <iostream>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    long long ans = 0;
    for (int b = 1; b <= n; ++b) {
        long long k = n / b;
        ans += k * k;
    }
 
    cout << ans << "
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