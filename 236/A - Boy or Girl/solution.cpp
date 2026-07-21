#include <iostream>
#include <string>
#include <unordered_set>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string username;
    cin >> username;
 
    unordered_set<char> unique_chars(username.begin(), username.end());
 
    if (unique_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!
";
    } else {
        cout << "IGNORE HIM!
";
    }
 
    return 0;
}