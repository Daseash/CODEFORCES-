#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    vector<int> ans(n + 1);
 
    for (int i = 1; i <= n; ++i) {
        int gift_to;
        cin >> gift_to;
        ans[gift_to] = i; // Friend i gave a gift to friend gift_to
    }
 
    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << "
";
 
    return 0;
}