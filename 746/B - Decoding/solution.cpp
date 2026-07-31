#include <iostream>
#include <string>
#include <deque>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    deque<char> ans;
 
    for (int i = 0; i < n; ++i) {
        int rem = n - i;
        if (rem % 2 == 0) {
            ans.push_front(s[i]);
        } else {
            ans.push_back(s[i]);
        }
    }
 
    for (char c : ans) {
        cout << c;
    }
    cout << "
";
 
    return 0;
}