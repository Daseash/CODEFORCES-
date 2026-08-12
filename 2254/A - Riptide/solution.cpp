#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int rounds = 0;
    
    // Continue rounds until at least two players have the same number of tokens
    while (a != b && b != c && a != c) {
        int mx = max({a, b, c});
        int mn = min({a, b, c});
        
        // Player with the most tokens gives 1 token to the player with the fewest
        if (a == mx) a--;
        else if (b == mx) b--;
        else c--;
        
        if (a == mn) a++;
        else if (b == mn) b++;
        else c++;
        
        rounds++;
    }
    
    cout << rounds << "
";
}
 
int main() {
    // Fast I/O optimization for competitive programming
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