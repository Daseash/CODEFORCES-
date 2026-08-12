#include <iostream>
#include <string>
#include <sstream>
 
using namespace std;
 
int main() {
    string s;
    cin >> s; // Read the input string
 
    // 1. Find every "WUB" and replace it with a space
    size_t pos = 0;
    while ((pos = s.find("WUB", pos)) != string::npos) {
        s.replace(pos, 3, " "); // "WUB" has length 3
        pos += 1;
    }
 
    // 2. Read back only the words (this automatically cleans up extra spaces)
    stringstream ss(s);
    string word;
    bool first = true;
 
    while (ss >> word) {
        if (!first) cout << " ";
        cout << word;
        first = false;
    }
    cout << endl;
 
    return 0;
}