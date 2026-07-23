#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    if (!(cin >> n)) return 0;
 
    int total_matches = n * (n - 1) / 2 - 1;
    vector<int> matches_played(n + 1, 0);
    vector<int> wins(n + 1, 0);
 
    for (int i = 0; i < total_matches; ++i) {
        int u, v;
        cin >> u >> v;
        matches_played[u]++;
        matches_played[v]++;
        wins[u]++;
    }
 
    // Find the two players who played only (N - 2) matches
    int p1 = -1, p2 = -1;
    for (int i = 1; i <= n; ++i) {
        if (matches_played[i] == n - 2) {
            if (p1 == -1) p1 = i;
            else p2 = i;
        }
    }
 
    // Determine the winner based on total wins
    if (wins[p1] > wins[p2]) {
        cout << p1 << " " << p2 << "
";
    } else {
        cout << p2 << " " << p1 << "
";
    }
 
    return 0;
}