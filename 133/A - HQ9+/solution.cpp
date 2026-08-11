#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string p;
    if (cin >> p) {
        for (char c : p) {
            if (c == 'H' || c == 'Q' || c == '9') {
                cout << "YES
";
                return 0;
            }
        }
        cout << "NO
";
    }
    return 0;
}