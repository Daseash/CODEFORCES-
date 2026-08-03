#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    // Alice deletes the first '0'
    size_t zero_pos = s.find('0');
    s.erase(zero_pos, 1);
 
    // Bob deletes the first '1'
    size_t one_pos = s.find('1');
    s.erase(one_pos, 1);
 
    cout << s << "
";
}
 
int main() {
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