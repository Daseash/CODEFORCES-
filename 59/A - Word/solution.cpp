#include <iostream>
#include <string>
#include <cctype>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    
    int up_count = 0;
    int low_count = 0;
    
    // Count uppercase and lowercase letters
    for (char c : s) {
        if (isupper(c)) {
            up_count++;
        } else {
            low_count++;
        }
    }
    
    // Transform the string based on the counts
    if (up_count > low_count) {
        for (char &c : s) {
            c = toupper(c);
        }
    } else {
        for (char &c : s) {
            c = tolower(c);
        }
    }
    
    cout << s << endl;
    
    return 0;
}