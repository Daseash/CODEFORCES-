#include <iostream>
#include <string>
#include <cctype>
 
using namespace std;
 
int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin >> s;
 
    // Convert the first character to uppercase in-place
    s[0] = toupper(s[0]);
 
    cout << s << "
";
 
    return 0;
}