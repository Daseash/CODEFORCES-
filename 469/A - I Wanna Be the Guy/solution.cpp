#include <iostream>
#include <set>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    set<int> levels;
 
    // Read Little X's levels
    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }
 
    // Read Little Y's levels
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }
 
    // If the size of the set equals n, all levels from 1 to n can be passed
    if (levels.size() == n) {
        cout << "I become the guy.
";
    } else {
        cout << "Oh, my keyboard!
";
    }
 
    return 0;
}