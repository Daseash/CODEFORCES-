#include <iostream>
 
using namespace std;
 
void solve() {
    long long a, b;
    cin >> a>> b;
 
    long long S = a + b;
    long long x = 0;
 
    
    for (int i = 29; i >= 0; --i) {
        if ((S >> i) & 1) {
            if (x + (1LL << i) <= a) {
                x += (1LL << i);
            }
        }
    }
 
    long long min_ops = a - x;
    cout << S << " " << min_ops << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}