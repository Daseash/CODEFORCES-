#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    if (cin >> s) {
        if (s.find("0000000") != string::npos || s.find("1111111") != string::npos) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
    return 0;
}